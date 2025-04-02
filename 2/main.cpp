#include <iostream>
#include <fstream>
#include <string>
#include <map>
int main()
{
  std::map<std::string, std::string> object_parsed;
  std::string line;
  std::ifstream in_file("settings.conf");
  if (in_file.is_open())
  {
    while (std::getline(in_file, line))
    {
      
      object_parsed[line.substr(0, line.find("="))] = line.substr(line.find("=") + 1);// + 1 Потому что нам не нужен "="
    }
    for (auto it = object_parsed.begin(); it != object_parsed.end(); ++it)
    {
      std::cout << it->first << ": " << it->second << std::endl;
    }
  }
  return 0;
}
