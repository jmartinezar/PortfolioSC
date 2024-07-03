#include "include_22.h"

double velocity(double vi, double P)
{
  return vi + (P*dt)/(mass*vi);
}

double velocity_wf(double vi, double P)
{
  return vi + (P*dt)/(mass*vi) - (dt*C*rho*A*vi*vi)/(2*mass);
}

void generate_data(std::ofstream & data, double ti, double v0, int N, double dt, std::function<double(double, double)> func, double P)
{
  data << ti << "\t" << v0 << "\n";
  
  double vi = func(v0, P);
  
  for(int ii = 1; ii < N; ++ii)
    {
      data << ii*dt << "\t" << vi << "\n";
      vi = func(vi, P);
    }
}
