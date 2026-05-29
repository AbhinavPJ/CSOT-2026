#include <bits/stdc++.h>
using namespace std;
int main() {
  int count = 0;
  int n = 100000;
  int v[n];
  for (int i = 0; i < n; i++)
    cin >> v[i];
  int target = 2006;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (v[i] + v[j] == target) {
        count++;
      }
    }
  }
  cout << count << endl;
}