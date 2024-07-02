#include "include.h"

double velocity(double vi)
{
  return vi + (P*dt)/(mass*vi);
}
