#include <iostream>

using namespace std;

int main() {
  int i;
  cout << "Enter your age: ";
  cin >> i;
  cout << endl;
  if (i >= 18) {
    cout << "You can get a driving license in Japan." << endl;
  } else {
    cout << "You can't get a driving license in Japan." << endl;
  }
}
