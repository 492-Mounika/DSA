vector<int> findAnagrams(string s, string p) {
    int n = s.length(), m = p.length();
    vector<int> countp(256,0), countT(256,0);
    vector<int> res;
    for(int i = 0;i<m;i++){
        countp[p[i]]++;
        countT[s[i]]++;
    }
    for(int i = m;i<n;i++){
      //check for the first window created above
        if(countT == countp) res.push_back(i-m);
      //Add the next element to the window
        countT[s[i]]++;
      //Remove the first element of the previous window from the current window
        countT[s[i-m]]--;
    }
    if(countp == countT) res.push_back(n-m);
    return res;
}
