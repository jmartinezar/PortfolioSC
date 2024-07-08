#pragma once

#include <fstream>
#include <functional>
#include <cmath>

/* Constants of problem */

const double v_0 = 4.0; //[m/s]
const double mass = 70.0; //[kg]
const double tinit = 0.0; //[s]
const double tfinal = 100.0; //[s]
const int Nsteps = 1000; //dimensionless
const double dt = (tfinal - tinit)/Nsteps; //[s]
const double C = 0.5; //dimensionless
const double rho = 1.0; //[kg/m^3]
const double P = 400.0; //[W]
const double A = 0.33; //[m^2]
const double theta = std::atan(0.1);
const double g = 9.81;

/* Functions of problem */

double velocity_at_slope(double vi);
void generate_data(std::ofstream & data, double ti, double v0, int N, double dt, std::function<double(double)> func);
