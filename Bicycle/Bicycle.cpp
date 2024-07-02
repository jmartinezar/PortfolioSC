#include <iostream>
#include "include.h"

int main(void)
{
  std::cout << tinit << "\t" << v_0 << "\n";
  double vi = velocity(v_0);
  
  for(int ii = 1; ii < Nsteps; ++ii)
    {
      double ti = tinit + ii*dt;
      std::cout << ii*dt << "\t" << vi << "\n";
      vi = velocity(vi);
    }
  return 0;
}
