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
