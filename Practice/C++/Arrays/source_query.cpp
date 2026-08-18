#include <bits/stdc++.h>
using namespace std;
vector<int> sq(int n, vector<int> &sa, int m,vector<int> &qa){
    vector<int> ans(m,-1);
    for(int i = 0;i<m;i++){
        int p1 = 0;
        while(p1<n && qa[i] != sa[p1]) p1++;
        for(int j = p1+1;j<n;j++){
            if(sa[p1]<sa[j]){
                ans[i] = sa[j];
                break;
            }
        }
    }
    return ans;
}
int main() {
	// your code goes here
	int n;
	cin >> n;
	vector<int> sa(n);
	for(int i = 0;i<n;i++){
	    cin >> sa[i];
	}
	int m;
	cin >> m;
	vector<int> qa(m);
	for(int i = 0;i<m;i++){
	    cin >> qa[i];
	}
	vector<int> res = sq(n,sa,m,qa);
	for(int i = 0;i<m;i++){
	    cout<<res[i]<<" ";
	}
	return 0;

}
