// Two pointers approach
bool isSubsequence(string s, string t) {
  int m = s.size(), n = t.size();
  if(m>n) return false;
  int i = 0,j = 0;
  while(i<m && j<n){
      if(s[i] == t[j]){
          i++;
      }
      j++;
  }
  return i == m;
}

//Recursion
bool isSubSeqRec(string& s1, string& s2,int m,int n) {
        // code here
    if(m == 0) return true;
    if(n == 0) return false;
    if(s1[m-1]==s2[n-1]){
        return isSubSeqRec(s1,s2,m-1,n-1);
    }
    return isSubSeqRec(s1,s2,m,n-1);
}
bool isSubSeq(string& s1, string& s2) {
    // code here
    int m = s1.size(), n = s2.size();
    return isSubSeqRec(s1,s2,m,n);
}
