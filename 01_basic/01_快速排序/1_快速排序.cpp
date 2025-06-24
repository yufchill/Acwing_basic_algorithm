#include <bits/stdc++.h>
using namespace std;

void quick_sort(vector<int> &nums, int left, int right) {
  if (left >= right) return;
  int i = left - 1, j = right + 1;
  int x = nums[(left + right) / 2];
  while (i < j) {
    while (nums[++i] < x);
    while (nums[--j] > x);
    if (i < j) swap(nums[i], nums[j]);
  }
  quick_sort(nums, left, j);
  quick_sort(nums, j + 1, right);
}

int main() {
  int n;
  cin >> n;
  vector<int> nums(n);
  for (int i = 0; i < n; i++) {
    cin >> nums[i];
  }
  quick_sort(nums, 0, n - 1);
  for (auto &num : nums) {
    cout << num << " ";
  }
  return 0;
}