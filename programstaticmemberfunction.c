#include <iostream>

using namespace std;

class MyClass {
  public:
    static int add(int a, int b) {
      return a + b;
    }
};

int main() {
  int result = MyClass::add(5, 10);

  cout << "Result: " << result << endl;

  return 0;
}
