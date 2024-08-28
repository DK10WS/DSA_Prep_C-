/* Given an array arr[] of size n containing integers. The problem is to find
 * the length of the longest sub-array having sum equal to the given value k.

    Input: arr[] = { 10, 5, 2, 7, 1, 9 }, k = 15
    Output: 4
    Explanation: The sub-array is {5, 2, 7, 1}.

    Input: arr[] = {-5, 8, -14, 2, 4, 12}, k = -5
    Output: 5
*/

#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int longestSubarray(vector<int> a, int k) {
  map<int, int> mpp;
  signed sum = 0;
  int maxlen = 0;
  for (int i = 0; i < a.size(); i++) {
    sum += a[i];
    if (sum == k) {
      maxlen = max(maxlen, i + 1);
    }
    int rem = sum - k;
    if (mpp.find(rem) != mpp.end()) {
      int len = i - mpp[rem];
      maxlen = max(maxlen, len);
    }
    if (mpp.find(sum) == mpp.end()) {
      mpp[sum] = i;
    }
  }
  return maxlen;
};

int main(int argc, char *argv[]) {
  vector<int> A = {10, 5, 2, 7, 1, 9};
  int k = 15;
  int x;
  x = longestSubarray(A, k);
  cout << x << endl;

  return 0;
}
