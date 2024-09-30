#include <iostream>
#include <vector>
using namespace std;

vector<int> sortedArray(vector<int> a, vector<int> b) {
  signed asize = a.size();
  signed bsize = b.size();

  vector<int> unionarray;
  int i = 0;
  int j = 0;

  while (i < asize && j < bsize) {
    if (a[i] <= a[j]) {
      if (unionarray.size() == 0 || unionarray.back() != a[i]) {
        unionarray.push_back(a[i]);
      }
      i++;
    } else {
      if (unionarray.size() == 0 || unionarray.back() != b[j]) {
        unionarray.push_back(b[j]);
      }
      j++;
    }
  }
  while (i < a.size()) {
    if (unionarray.size() == 0 || unionarray.back() != a[i]) {
      unionarray.push_back(a[i]);
    }
    i++;
  }
  while (j < b.size()) {
    if (unionarray.size() == 0 || unionarray.back() != b[i]) {
      unionarray.push_back(b[i]);
    }
    j++;
  }
  return unionarray;
}

int main(int argc, char *argv[]) {

  vector<int> a = {1, 2, 3, 4, 6};
  vector<int> b = {2, 3, 5};
  vector<int> final;
  final = sortedArray(a, b);
  for (int i = 0; i < final.size(); i++) {
    cout << final[i] << endl;
  }
  return 0;
}
