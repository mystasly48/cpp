#include <iostream>

using namespace std;

int main() {
  int count;
  cout << "Enter a loop count";
  cin >> count;
  cout << endl;
  for (int i = 0; i < count; i++) {
    cout << i+1 << " times" << endl;
  }
}
