int maxSubarraySum(vector<int> &arr) {
  int n = arr.size();
  int maxi = arr[0];
  int sum = arr[0];
  for(int i = 1;i<n;i++){
      sum = max(sum+arr[i],arr[i]);
      maxi = max(sum,maxi);
  }
  return maxi;   
}
