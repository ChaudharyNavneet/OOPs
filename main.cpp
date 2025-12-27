#include <iostream>
#include <string>
#include <vector>
#include "library.h"

using namespace std;


int main() {
  cout << "Hello from the Colab-GitHub C++ project!" << endl;
  Library MyLibrary("Navi");
  MyLibrary.getStudentCount();
  MyLibrary.greet();
  cout << "Owner:  " <<MyLibrary.getName() << "\n"<< "Students Count: " <<MyLibrary.getStudentCount() <<endl;
  return 0;
}
