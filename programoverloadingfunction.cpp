#include <iostream>

using namespace std;

class SubjectClass {
  public:
    int add(int a, int b) {
      return a + b;
    }
    double add(double a, double b) {
      return a + b;
    }
    int add(int a, int b, int c) {
      return a + b + c;
    }
};

int main() {
  SubjectClass obj;

  int result1 = obj.add(5, 10);
  double result2 = obj.add(2.5, 4.5);
  int result3 = obj.add(1, 2, 3);

  cout << "Result 1: " << result1 << endl;
  cout << "Result 2: " << result2 << endl;
  cout << "Result 3: " << result3 << endl;

  return 0;
}

