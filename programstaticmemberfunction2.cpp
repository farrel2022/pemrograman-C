#include <iostream>

using namespace std;

class SubjectClass {
  public:
    static int add(int a, int b) {
      return a + b;
    }
};

int main() {
  int result = SubjectClass::add(5, 10);

  cout << "Result: " << result << endl;

  return 0;
}

