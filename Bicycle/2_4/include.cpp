#include "include.h"

double velocity_at_slope(double vi)
{
  return vi + (P*dt)/(mass*vi) - (dt*C*rho*A*vi*vi)/(2*mass) - g*std::sin(theta)*dt;
}

void generate_data(std::ofstream & data, double ti, double v0, int N, double dt, std::function<double(double)> func)
{
  data << ti << "\t" << v0 << "\n";
  
  double vi = func(v0);
  
  for(int ii = 1; ii < N; ++ii)
    {
      data << ii*dt << "\t" << vi << "\n";
      vi = func(vi);
    }
}
