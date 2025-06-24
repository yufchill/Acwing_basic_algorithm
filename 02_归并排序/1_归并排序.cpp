#include <bits/stdc++.h>
using namespace std;
void merge_sort(vector<int> &nums, int left, int right) {
  if (left >= right) return;
  int mid = (right - left) / 2 + left;
  merge_sort(nums, left, mid);
  merge_sort(nums, mid + 1, right);
  int i = left, j = mid + 1;
  vector<int> temp(right - left + 1);
  int idx = 0;
  while (i <= mid && j <= right) {
    if (nums[i] < nums[j]) {
      temp[idx++] = nums[i++];
    } else {
      temp[idx++] = nums[j++];
    }
  }
  while (i <= mid) {
    temp[idx++] = nums[i++];
  }
  while (j <= right) {
    temp[idx++] = nums[j++];
  }
  for (int i = left, idx = 0; i <= right; i++) {
    nums[i] = temp[idx++];
  }
}

int main() {
  int n;
  cin >> n;
  vector<int> nums(n);
  for (int i = 0; i < n; i++) {
    cin >> nums[i];
  }
  merge_sort(nums, 0, nums.size() - 1);
  for (auto &num : nums) {
    cout << num << " ";
  }
}