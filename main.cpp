#include <iostream>
#include <string>
#include <vector>
#include "library.h"

using namespace std;

int main() {
  cout << "Hello from the Colab-GitHub C++ project!" << endl;
  Library MyLibrary("navi");
  MyLibrary.greet();
  cout << MyLibrary.getStudentCount() <<endl;
  return 0;
}
