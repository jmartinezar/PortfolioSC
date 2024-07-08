#include <iostream>
#include <fstream>
#include <cctype>

void read_variables(double & rho, double & eta, std::ifstream & input);

int main(void)
{
  double rho = 0.0, eta = 0.0;

  std::ifstream input("test1.dat");

  read_variables(rho, eta, input);

  input.close();

  std::cout << "rho: " << rho << "; eta: " << eta << "\n";

  std::ifstream input2("test2.dat");

  read_variables(rho, eta, input2);

  input2.close();

  std::cout << "rho: " << rho << "; eta: " << eta << "\n";

  return 0;
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
      if(ch == '#' && !in_comment)
	{
	  in_comment = true;
	}
      if(ch == '\n')
	{
	  in_comment = false;
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
      if(!in_comment && (ch != '\t') && (ch != '\n'))
	{
	  if(std::isdigit(ch) || ((ch == '.') && !number.empty() && (number.find('.') == std::string::npos)))
	    {
	      number += ch;
	    }
	}
    }
}
