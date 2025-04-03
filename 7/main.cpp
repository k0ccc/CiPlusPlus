
#include <iostream>

void addValue(int *ptrNum, int valueToAdd)
{
  *ptrNum += valueToAdd;
}

int main()
{
  int counter = 0;
  std::cout << counter << std::endl;
  addValue(&counter, 4);
  std::cout << counter << std::endl;
  addValue(&counter, 4);
  std::cout << counter << std::endl;
  return 0;
}
