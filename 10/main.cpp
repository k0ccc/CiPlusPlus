#include <iostream>

class IntObserver
{
private:
  /* data */
  int *observed_ptr_ = nullptr;

public:
  explicit IntObserver(int *ptr);
  void printObservedValue() const;
};

IntObserver::IntObserver(int *ptr) : observed_ptr_(ptr){}

void IntObserver::printObservedValue() const
{
  if (observed_ptr_){
    std::cout << "Observed value: " << *observed_ptr_ << std::endl;
  }
}
int main()
{
  int externalValue = 10;
  IntObserver obs1(&externalValue);
  obs1.printObservedValue();
  externalValue = 20;
  obs1.printObservedValue();
  IntObserver obs2(nullptr);
  obs2.printObservedValue();
  return 0;
}
