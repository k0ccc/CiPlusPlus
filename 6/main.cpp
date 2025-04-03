#include <iostream>



int main()
{
  int myValue = 42;
  int* ptrValue;
  ptrValue = &myValue;
  std::cout << myValue << std::endl; // 42  
  std::cout << &myValue << std::endl; // 0x5ffec4
  std::cout << ptrValue << std::endl; // 0x5ffec4
  std::cout << *ptrValue << std::endl; // 42; По сути он хранит ссылку на память, соотвественно если мы его развертываем получаем значение ссылки MyValue
  return 0;
}
