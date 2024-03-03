#include <assert.h>
#include <cstdlib>
#include <iostream>
#include "airport_sim.h"


using namespace std;

airport_simulation::airport_simulation(unsigned int t_off_time,
                        double t_off_prob,
                        unsigned int land_time,
                        double land_prob, 
                        unsigned int fuel_lim,
                        unsigned int time)
    {
        takeoff_time = t_off_time;
        takeoff_probability = t_off_prob;
        landing_time = land_time;
        landing_probability = land_prob;
        fuel_limit = fuel_lim;
        total_time = time;
    }

void airport_simulation::run_simulation()
{
    unsigned int num_landed = 0, num_took_off = 0, num_crashed = 0;
    Queue<unsigned int> takeoff_q;
    Queue<unsigned int> landing_q;
    bool_probability land(landing_probability);
    bool_probability takeoff(takeoff_probability);
    plane_averager times;
    unsigned int current_second;

    airport runway(landing_time, takeoff_time);

    // loop through simulation for given amount of time
    for (current_second = 1; current_second <= total_time; ++current_second)
    {
        // each loop iteration is one second of time

        //check if a plane has arrived in landing queue
        if (land.query()){
            landing_q.push(current_second); // add plane to landing queue
        }
        
        //check if a plane has arrived in takeoff queue
        if (takeoff.query()){
            takeoff_q.push(current_second); // add plane to takeoff queue
        }

        // checking if runway is available and if there are planes first in 
        // landing queue then in takeoff queue since landing planes get priority
        if (!runway.is_busy())
        {
            // check landing queue first 
            if (!landing_q.empty()){
                // if a plane is in landing queue, have it use the runway
                // take difference of current time and time from queue to 
                // find time spent waiting
                unsigned int waiting_time = current_second - landing_q.pop();

                // check if plane ran out of fuel while waiting
                if (waiting_time > fuel_limit){
                    // this branch means the plane waited too long and crashed
                    ++num_crashed;
                }
                else {
                    // only enter this branch if plane didn't crash
                    // add waiting time from landing queue to averager
                    times.add_landing(waiting_time); 

                    // record landed plane
                    ++num_landed;

                    // now the plane is actively landing on runway, so 
                    // mark runway as being used for landing
                    runway.start_landing();
                }                
            }
            else if (!takeoff_q.empty()){
                // if no planes in landing queue and planes in takeoff queue, 
                // this branch will be entered

                // take difference of current time and time from queue to 
                // find time spent waiting
                unsigned int waiting_time = current_second - takeoff_q.pop();
                // add waiting time from takeoff queue to averager
                times.add_takeoff(waiting_time);

                // record plane that took off
                ++num_took_off;

                // now the plane is actively taking off on runway, so
                // mark runway as being used for takeoff
                runway.start_takeoff();
            }
        }

        // have the runway simulate the passage of one second.
        runway.one_second();
    }

    
    
    // format doubles
    cout.setf(ios::showpoint);
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "\n============================================";
    cout << "\ntime to take off\t: " << takeoff_time;
    cout << "\ntime to land\t\t: " << landing_time;
    cout << "\nprobability of landing\t: " << landing_probability;
    cout << "\nprobability of takeoff\t: " << takeoff_probability;
    cout << "\nfuel: time to crash\t: " << fuel_limit;
    cout << "\ntotal simulation time\t: " << total_time;
    cout << "\n\n. . . . . . . . . . . . . . . . . . . . . . . .\n";

    cout.precision(3);
    cout << num_landed << " landed\n";
    cout << num_took_off << " took off\n";
    cout << num_crashed << " planes crashed. :(\n";
    cout << "Average waiting time to land: " << times.landing_avg();
    cout << "\nAverage waiting time to take off: " << times.takeoff_avg();
    cout << "\nplanes in landing queue : " << landing_q.size();
    cout << "\nplanes in take off queue: " << takeoff_q.size();
    cout << "\n============================================\n";
}

bool_probability::bool_probability(double p)
// Library facilities used: cassert
{
    assert(p >= 0);
    assert(p <= 1);
    probability = p;
}

bool bool_probability::query( ) const
// Library facilities used: cstdlib
{
    return (rand( ) < probability * RAND_MAX);
}

plane_averager::plane_averager()
{
    takeoff_count = 0;
    takeoff_sum = 0;
    landing_count = 0;
    landing_sum = 0;
}

void plane_averager::add_takeoff(double value)
{
    ++takeoff_count;
    takeoff_sum += value;
}

void plane_averager::add_landing(double value)
{
    ++landing_count;
    landing_sum += value;
}

double plane_averager::takeoff_avg() const
{
    assert(takeoff_count > 0);
    return takeoff_sum / takeoff_count;
}
double plane_averager::landing_avg() const
{
    assert(landing_count > 0);
    return landing_sum / landing_count;
}

airport::airport(unsigned int seconds_to_land, unsigned int seconds_to_takeoff)
{
    sec_to_land = seconds_to_land;
    sec_to_takeoff = seconds_to_takeoff;
    time_left = 0;
}

void airport::one_second()
{
    if (is_busy())
        --time_left;
}

void airport::start_landing()
{
    assert(!is_busy());
    time_left = sec_to_land;
}

void airport::start_takeoff()
{
    assert(!is_busy());
    time_left = sec_to_takeoff;
}