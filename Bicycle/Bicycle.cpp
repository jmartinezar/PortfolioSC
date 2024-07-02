#include <iostream>
#include <fstream>
#include <functional>
#include "include.h"

int main(void)
{
  std::ofstream data_1;
  data_1.open("data_1.txt");

  generate_data(data_1, tinit, v_0, Nsteps, dt, velocity);

  data_1.close();

  std::ofstream data_2;
  data_2.open("data_2.txt");

  generate_data(data_2, tinit, v_0, Nsteps, dt, velocity_wf);
  
  data_2.close();
  
  return 0;
}
