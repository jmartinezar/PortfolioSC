#include <iostream>
#include <fstream>
#include <string>
#include "include.h"

int main(int charc, char * argv[])
{
  std::string index = argv[1];
  std::string name = "data_22_";
  name = name + index + ".txt";

  double value = std::atof(argv[1])*0.05;

  double P = 1.0;
  
  P -= value;
  
  std::ofstream data;
  data.open(name);

  generate_data(data, tinit, v_0, Nsteps, dt, velocity_wf, P);
  
  data.close();
  
  return 0;
}
