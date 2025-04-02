#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>

int main()
{
  std::vector<int> numbers;
  int max_array = 0;
  int sum_array;
  int arifmetic;
  int max_number;
  int min_number;

  std::string line;
  std::ifstream in_file("data.txt");
  if (in_file.is_open())
  {
    while(std::getline(in_file, line, ','))
    {
      numbers.push_back(std::stoi(line));
      max_array += 1;
    }
    sum_array = std::reduce(numbers.begin(), numbers.end(), 0);
    arifmetic = sum_array / max_array;
    auto minmax = std::minmax_element(numbers.begin(), numbers.end());
    max_number = *minmax.second;
    min_number = *minmax.first;
    // Output
    std::cout << max_array << std::endl;
    std::cout << sum_array << std::endl;
    std::cout << arifmetic << std::endl;
    std::cout << max_number << std::endl;
    std::cout << min_number << std::endl;
    }
    return 0;
  }
