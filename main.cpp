#include <iostream>

/// This program shows arugments
int main(int argc, char* argv[])
{
  for (int i=0; i!=argc; ++i)
  {
      std::cout << i << ": " << argv[i] << '\n';
  }
  if (std::string(argv[1]) == "--help")
  {
      std::cout << "HELP\n";
  }
}
