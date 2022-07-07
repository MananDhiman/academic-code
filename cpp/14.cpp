#include <iostream>
#include <fstream>
using namespace std;

int main() {

  ofstream WriteFile("file_handling.txt");

  WriteFile << "This is a C++ Program to Show File Handling\n";
  WriteFile.close();

  string text;
  ifstream ReadFile("file_handling.txt");

  while(getline(ReadFile, text)){
    cout << text;
  }
  ReadFile.close();

  return 0;
}
