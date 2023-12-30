
#include <iostream>

#include "driver.hpp"

int main(void)
{

  try
  {
    Driver driver;
    driver.run();
  }
  catch (const std::exception &e)
  {
    std::cerr << e.what() << std::endl;
  }

  return 0;
}