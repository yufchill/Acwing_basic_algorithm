#include <bits/stdc++.h>
using namespace std;

int main() {
  double n;
  cin >> n;
  double l = -10000, r = 10000;
  while (r - l >= 1e-8) {
    double mid = (l + r) / 2.0;
    if (n > (mid * mid * mid)) {
      l = mid;
    } else {
      r = mid;
    }
  }
  printf("%.6lf\n", l);
}