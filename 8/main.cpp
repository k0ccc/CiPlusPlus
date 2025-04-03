// Не много усложнил задание добавив хранение изначальной переменной. 
// теперь это 9е задание

#include <iostream>

class Counter
{
private:
  int count_init_;
  int count_;

public:
  explicit Counter(int count);
  void increment(); 
  void reset(); 
  int getValue() const;  // Great for getters
};

Counter::Counter(int count = 42) : count_init_(count)
{
  count_ = count;
}

void Counter::increment(){
  count_ += 1;
}

void Counter::reset(){
  count_ = count_init_;
}

int Counter::getValue() const{
  return count_;
}

int main()
{
  Counter mySecCounter;
  mySecCounter.increment();
  mySecCounter.increment();
  std::cout << mySecCounter.getValue() << std::endl;
  Counter myCounter(20);
  myCounter.increment();
  myCounter.increment();
  myCounter.increment();
  std::cout << myCounter.getValue() << std::endl;
  myCounter.reset();
  std::cout << myCounter.getValue() << std::endl;
  return 0;
}
