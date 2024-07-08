#pragma once

#include <fstream>
#include <functional>

/* Constants of problem */

const double v_0 = 4.0; //[m/s]
const double mass = 70.0; //[kg]
const double tinit = 0.0; //[s]
const double tfinal = 100.0; //[s]
const int Nsteps = 1000; //dimensionless
const double dt = (tfinal - tinit)/Nsteps; //[s]
const double C = 0.5; //dimensionless
const double rho = 1.0; //[kg/m^3]
const double A = 0.33;

/* Functions of problem */

double velocity_wf(double vi, double P);
void generate_data(std::ofstream & data, double ti, double v0, int N, double dt, std::function<double(double, double)> func, double P);
