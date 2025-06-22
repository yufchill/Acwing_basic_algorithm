#include <bits/stdc++.h>
using namespace std;

void quick_sort(vector<int>& nums, int left, int right, int k) {
  if (left >= right) return;
  int mid = nums[(right - left) / 2 + left];
  int i = left - 1, j = right + 1;
  while (i < j) {
    while (nums[++i] < mid);
    while (nums[--j] > mid);
    if (i < j) swap(nums[i], nums[j]);
  }
  int len = j - left + 1;
  if (k <= len) {
    quick_sort(nums, left, j, k);
  } else {
    quick_sort(nums, j + 1, right, k - len);
  }
}

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> nums(n);
  for (int i = 0; i < n; i++) {
    cin >> nums[i];
  }
  quick_sort(nums, 0, n - 1, k);
  cout << nums[k - 1] << endl;
}