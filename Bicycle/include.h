#pragma once

const double v_0 = 1.0; //[m/s]
const double P = 1.0; //[W]
const double mass = 1.0; //[kg]
const double tinit = 0.0; //[s]
const double tfinal = 10.0; //[s]
const int Nsteps = 1000;
const double dt = (tfinal - tinit)/Nsteps; //[s]

double velocity(double vi);
