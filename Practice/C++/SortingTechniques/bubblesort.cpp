#include<bits/stdc++.h>
using namespace std;
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
void bubblesort(vector<int> &nums, int n){
  for(int i = 0;i<n;i++){
    for(int j = 0;j<n-i-1;j++){
      if(nums[j] > nums[j+1]) swap(nums[j],nums[j+1]);
    }
  }
}
int main(){
  vector<int> nums = {6,4,3,9,2};
  int n = nums.size();
  bubblesort(nums,n);
  for(int x : nums){
    cout << x << " ";
  }
  return 0;
}
