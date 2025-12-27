#include <iostream>
#include <string>
using namespace std;

class Library {
  int studentCount=0;
  string name;
  public:
    explicit Library(string LibName) : name(LibName) {}
    void greet(void) const;
    void incrementCount(void){
      studentCount++;
    }
    int getStudentCount(void){
      return studentCount;
    }
    string getName(){
      return name;
    }
};

void Library :: greet(void) const {
  cout << "Welcome to the Libray!"<< endl;
}