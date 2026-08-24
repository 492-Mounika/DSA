void generate_permutations(int idx,string &s,vector<string> &res){
        if(idx == s.size()){
            res.push_back(s);
            return;
        }
        for(int i = idx;i<s.size();i++){
          //make a swap
            swap(s[idx],s[i]);
          //explore the permutations
            generate_permutations(idx+1,s,res);
          //backtracking
            swap(s[idx],s[i]);
        }
    }
    vector<string> permutation(string s) {
        // code here
        vector<string> res;
        generate_permutations(0,s,res);
        sort(res.begin(),res.end());
        return res;  
    }


//all permutations of s1 in s2 using sliding window
bool checkInclusion(string s1, string s2) {
        vector<int> cs1(26),cs2(26);
        if(s1.size()>s2.size()) return false;
        for(int i = 0;i<s1.size();i++){
                cs1[s1[i]-'a']++;
                cs2[s2[i]-'a']++;
        }
        for(int i = s1.size();i<s2.size();i++){
                if(cs1 == cs2) return true;
                cs2[s2[i]-'a']++;
                cs2[s2[i-s1.size()]-'a']--;
        }
        return cs1 == cs2;
}
