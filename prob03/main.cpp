// Sales prediction Calculator

#include <iostream>

int main()
{
  const int TOTAL = 2103419277;
  const double PERCENT = 0.18;

  //Percentage by which sales have increased in 2103419277
  long prediction = (TOTAL * PERCENT) + TOTAL;
  std::cout << "Last year's sales were: $" << TOTAL << std::endl;
  std::cout << "This year's sales prediction: $" << prediction << std::endl;

    return 0;
  }
