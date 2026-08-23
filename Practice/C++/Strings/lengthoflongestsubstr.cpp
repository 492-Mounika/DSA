int lengthOfLongestSubstring(string s) {
    if(s.length() == 0 || s.length() == 1) return s.length();
    vector<bool> vis(256,false);
    int l = 0;
    int r = 0;
    int res = 0;
    while(r < s.length()){
        while(vis[(unsigned char)s[r]] == true){
            vis[(unsigned char)s[l]] = false;
            l++;
        }
        vis[(unsigned char)s[r]] = true;
        res = max(res, r-l+1);
        r++;
    }
    return res; 
}
