#include "main.hpp"

int main(int argc, char **argv)
{
  std::string   str;
  std::string   needle(argv[2]);
  std::string   fileName(argv[1]);
  std::string   namePostfix(".replace");
  std::ofstream outFile((fileName + namePostfix).c_str());
  std::ifstream myFile(argv[1]);
  std::size_t   loc;
  
  if (argc == 4 && myFile.fail())
  {
    std::cout << "No such file!" << std::endl;
    return (0);
  }  
  if (argc != 4)
  {
    myFile.close();
    return (0);
  }
  while (true)
  {
    getline(myFile, str);
    loc = str.find(argv[2]);
    if (loc != std::string::npos)
    {
      str.erase(loc, needle.length());
      str.insert(loc, argv[3]);
    }
    if (myFile.eof())
      break;
    outFile << str << std::endl;
  }
  myFile.close();
  outFile.close();
  return (0);
}
