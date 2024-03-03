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
    cout << "Average waiting time to land: ";
    cout << "\nAverage waiting time to take off: ";
    cout << "\nplanes in landing queue : ";
    cout << "\nplanes in take off queue: ";
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