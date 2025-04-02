#include <iostream>
#include <fstream>
#include <string>

int main()
{
  // Запись
  std::ofstream out_file("settings.conf");
  if (!out_file)
  {
    std::cerr << "Error: Could not open settings.conf for writing." << std::endl;
    return 1; // Возвращаем код ошибки
  }
  out_file << "username=guest" << std::endl
           << "theme=dark" << std::endl;
  // Чтение
  std::string line;
  std::ifstream in_file("settings.conf");
  if (in_file.is_open())
  {
    while (std::getline(in_file, line))
    {
      std::cout << line << std::endl;
    }
  }

    return 0;
  }