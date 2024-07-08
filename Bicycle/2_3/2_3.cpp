#include <iostream>
#include <fstream>
#include <functional>
#include "include.h"

int main(void)
{
  /* Air */
  
  std::ifstream input_air("input_air.dat");

  double rho = 0.0, eta = 0.0;

  read_variables(rho, eta, input_air);

  input_air.close();

  std::cout << "rho: " << rho << "; eta: " << eta << "\n";

  /* With two terms of viscosity */
  
  std::ofstream data_1_air;
  data_1_air.open("2_3_wd_air.txt");

  generate_data(data_1_air, tinit, v_0, Nsteps, dt, velocity_wd, rho, eta);

  data_1_air.close();

  /* With one term of viscosity */

  std::ofstream data_2_air;
  data_2_air.open("2_3_wf_air.txt");

  generate_data(data_2_air, tinit, v_0, Nsteps, dt, velocity_wf, rho, eta);

  data_2_air.close();

  /* Water */

  std::ifstream input_water("input_water.dat");

  read_variables(rho, eta, input_water);

  input_water.close();

  std::cout << "rho: " << rho << "; eta: " << eta << "\n";

  /* With two terms of viscosity */
  
  std::ofstream data_1_water;
  data_1_water.open("2_3_wd_water.txt");

  generate_data(data_1_water, tinit, v_0, Nsteps, dt, velocity_wd, rho, eta);

  data_1_water.close();

  /* With one term of viscosity */

  std::ofstream data_2_water;
  data_2_water.open("2_3_wf_water.txt");

  generate_data(data_2_water, tinit, v_0, Nsteps, dt, velocity_wf, rho, eta);

  data_2_water.close();
  
  return 0;
}
