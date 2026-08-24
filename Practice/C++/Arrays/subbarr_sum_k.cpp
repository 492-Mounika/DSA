// Naive approach using nested loop
int subarraySum(vector<int>& nums, int k) {
    int n = nums.size();
    int count = 0;
    for(int i = 0;i<n;i++){
        int currsum = 0;
        for(int j = i;j<n;j++){
           currsum += nums[j];
           if(currsum == k) count++;
        }
    }
    return count;
}

//Using Prefix sum approach
int cntSubarrays(vector<int> &arr, int k) {
    int n = arr.size();
  //Generating the prefix sum array
    vector<int> PS(n);
    PS[0] = arr[0];
    for(int i = 1;i<n;i++){
        PS[i] = PS[i-1]+arr[i];
    }
    unordered_map<int,int> m; //<PS, freq>
    int count = 0;
    for(int i = 0;i<n;i++){
        // if element of prefix sum array is already equal to k
        if(PS[i] == k) count++;
        // Calculating val i.e, the initial index of the sub string
        int val = PS[i]-k;
        // if the value is found in the map, add its frequency to count
        if(m.find(val) != m.end()){
            count += m[val];
        }
       // if the prefix sum is not in the map, add it by creating its frequency eith 0
        if(m.find(PS[i]) == m.end()){
            m[PS[i]] = 0;
        }
      //Increment the frequency or obtained PS to 1
        m[PS[i]]++;
    }
    return count;
}
