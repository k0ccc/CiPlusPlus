#include <memory>
#include <iostream>

class SimpleBuffer
{
private:
  std::unique_ptr<int[]> buffer_ptr_;
  size_t size_;
public:
  SimpleBuffer(size_t size);
  void print();
  void fill(int value);
};

SimpleBuffer::SimpleBuffer(size_t size) : size_(size)
{
  buffer_ptr_ = std::make_unique<int[]>(size);
}

void SimpleBuffer::print()
{
  if (!buffer_ptr_)
  {
    std::cout << "Buffer is empty or not allocated." << std::endl;
    return;
  }
  std::cout << "Buffer content (size " << size_ << "): [";
  for (std::size_t i = 0; i < size_; ++i)
  {
    std::cout << buffer_ptr_[i] << (i == size_ - 1 ? "" : ", ");
  }
  std::cout << "]" << std::endl;
}

void SimpleBuffer::fill(int value)
{
  if (!buffer_ptr_)
    return; 
  for (std::size_t i = 0; i < size_; ++i)
  {
    buffer_ptr_[i] = value; // Обращаемся к элементам массива через unique_ptr как к обычному массиву
  }
  std::cout << "Buffer filled with " << value << std::endl;
}

int main(int argc, char const *argv[])
{
  SimpleBuffer buffer(2);
  buffer.fill(5);
  buffer.print();
  return 0;
}
