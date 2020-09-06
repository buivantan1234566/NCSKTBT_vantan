// basic file operations
#include <iostream>
#include <fstream>
using namespace std;
int main (void) {
  ofstream myfile;
  myfile.open ("example.txt");
  myfile << "Writing this to a file.\n";
  myfile.close();
  return 0;
}