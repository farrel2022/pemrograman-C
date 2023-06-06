#include <iostream>

using namespace std;

class SubjectClass {
  public:
    static int count;
    SubjectClass() {
      count++;
    }
};

int SubjectClass::count = 0;

int main() {
  SubjectClass obj1;
  SubjectClass obj2;
  SubjectClass obj3;

  cout << "Total objects created: " << SubjectClass::count << endl;

  return 0;
}

