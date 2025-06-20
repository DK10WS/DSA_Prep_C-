#include <iostream>
using namespace std;

int main() {
  long long num, x, total = 0;
  cin >> num;

  long long expectedsum = num * (num + 1) / 2;

  for (int i = 0; i < num - 1 ; i++) {
    cin >> x;
    total += x;
  }
  cout << expectedsum - total;
}
