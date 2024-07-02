#pragma once

const double v_0 = 1.0;
const double P = 1.0;
const double mass = 1.0;
const double tinit = 0.0;
const double tfinal = 10.0;
const int Nsteps = 1000;
const double dt = (tfinal - tinit)/Nsteps;

double velocity(double vi);
