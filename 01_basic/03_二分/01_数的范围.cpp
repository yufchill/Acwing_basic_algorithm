#include <bits/stdc++.h>
using namespace std;

int check(vector<int>& nums, int k) {
  int l = 0, r = nums.size() - 1;
  while (l <= r) {
    int mid = (l + r) / 2;
    if (nums[mid] < k) {
      l = mid + 1;
    } else {
      r = mid - 1;
    }
  }
  return l;
}

int main() {
  int n, q;
  cin >> n >> q;
  vector<int> nums(n);
  for (int i = 0; i < n; i++) {
    cin >> nums[i];
  }
  while (q--) {
    int k;
    cin >> k;
    int ans1 = check(nums, k);
    int ans2 = check(nums, k + 1);
    if (ans1 == nums.size() || nums[ans1] != k) {
      cout << "-1 -1" << endl;
    } else {
      cout << ans1 << " " << ans2 - 1 << endl;
    }
  }
}