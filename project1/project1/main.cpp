
#include "lib1/Calc.hpp"

#include <iostream>

// int main(int argc, char *argv[], char* envp[])
int main(int argc, char *argv[]) 
{
  Calc calc;

  std::cout<<"Hello World 12+7 = " << calc.add(12,7) << "\n";
  return 0;
}
