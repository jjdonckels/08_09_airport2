#ifndef AIRPORT_SIM_H
#define AIRPORT_SIM_H
#include <iostream>
#include <assert.h>
#include <cstdlib>

using namespace std;

// class to handle airport simulation

class airport_simulation
{
public:
    // CONSTRUCTOR
    airport_simulation(unsigned int t_off_time = 15,
                        double t_off_prob = 0.08,
                        unsigned int land_time = 5,
                        double land_prob = 0.1, 
                        unsigned int fuel_lim = 20,
                        unsigned int time = 1440);
    void run_simulation();


private:
    // how long it takes for a take off once plane is on the runway
    unsigned int takeoff_time; 

    // probability of arrival of a plane into the takeoff line
    double takeoff_probability; 

    // how long it takes for a plane to land on the runway in each second
    unsigned int landing_time;

    //probability of arrival of planes for landing in each second
    double landing_probability;

    // maximum amount of time a plane can stay in landing queue without
    // crashing
    unsigned int fuel_limit;

    // total time the simulation runs for
    unsigned int total_time;

};


class bool_probability
{
public:
    // CONSTRUCTOR
    bool_probability(double p = 0.5);
    // CONSTANT function
    bool query( ) const;
private:
    double probability; // Probability of query( ) returning true
};

class plane_averager
{
public:
    plane_averager();
    void add_takeoff(double value);
    void add_landing(double value);
    std::size_t takeoff_num() const {return takeoff_count;}
    std::size_t landing_num() const {return landing_count;}
    double takeoff_avg() const;
    double landing_avg() const;

private:
    std::size_t takeoff_count;
    double takeoff_sum;
    std::size_t landing_count;
    double landing_sum;
};



#endif