#include <iostream>
#include <fstream>
#include <functional>
#include "include.h"

int main(void)
{
  std::ofstream data_1;
  data_1.open("2_4.txt");

  generate_data(data_1, tinit, v_0, Nsteps, dt, velocity_at_slope);

  data_1.close();

  return 0;
}
