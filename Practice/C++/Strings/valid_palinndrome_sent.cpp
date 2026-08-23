// using rev string
bool isPalinSent(string &s) {
  string s1 = "";
  for(char ch:s){
      if(isalnum(ch)){
          s1.push_back(tolower(ch));
      }
  }
  string rev = s1;
  reverse(rev.begin(),rev.end());
  return s1 == rev;
}

// using two pointers
bool isPalindrome(string s) {
    int i = 0;
    int j = s.length()-1;
    while(i < j){
        if(!isalnum(s[i])) i++;
        else if(!isalnum(s[j])) j--;
        else if(tolower(s[i]) == tolower(s[j])){
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;
}
