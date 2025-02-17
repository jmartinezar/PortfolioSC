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
const double P = 400.0; //[W]
const double A = 0.33; //[m^2]
const double h = 1.5;

/* Functions of problem */

double velocity_wf(double vi, double rho, double eta);

double velocity_wd(double vi, double rho, double eta);

void generate_data(std::ofstream & data, double ti, double v0, int N, double dt, std::function<double(double, double, double)> func, double rho, double eta);

void read_variables(double & rho, double & eta, std::ifstream & input);
