#include "include.h"
#include <iostream>
#include <string>
#include <fstream>
#include <cctype>

double velocity_wf(double vi, double rho, double eta)
{
  return vi + (P*dt)/(mass*vi) - (dt*C*rho*A*vi*vi)/(2*mass);
}

double velocity_wd(double vi, double rho, double eta)
{
  return vi + (P*dt)/(mass*vi) - (dt*C*rho*A*vi*vi)/(2*mass) - eta*A*vi/h;
}

void generate_data(std::ofstream & data, double ti, double v0, int N, double dt, std::function<double(double, double, double)> func, double rho, double eta)
{
  data << ti << "\t" << v0 << "\n";
  
  double vi = func(v0, rho, eta);
  
  for(int ii = 1; ii < N; ++ii)
    {
      data << ii*dt << "\t" << vi << "\n";
      vi = func(vi, rho, eta);
    }
}

void read_variables(double & rho, double & eta, std::ifstream & input)
{
  if(!input)
    {
      std::cout << "Error opening file.\n";
    }

  std::string number;
  int counter = 1;
  char ch;
  bool in_comment = false;

  while(input.get(ch))
    {
      if(ch == '#')
	{
	  in_comment = true;
	}
      if(ch == '\n')
	{
	  in_comment = false;
	}
      if(!in_comment && (ch != '\t') && (ch != '\n'))
	{
	  if(std::isdigit(ch) || ((ch == '.') && !number.empty() && (number.find('.') == std::string::npos)))
	    {
	      number += ch;
	    }
	  else
	    {
	      if(!number.empty())
		{
		  if(counter == 1)
		    {
		      rho = std::stod(number);
		      counter += 1;
		    }
		  else if(counter == 2)
		    {
		      eta = std::stod(number);
		      return;
		    }
		  number.clear();
		}
	    }
	}
    }
}
