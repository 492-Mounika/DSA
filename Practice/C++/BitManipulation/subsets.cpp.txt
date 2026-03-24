#include <bits/stdc++.h>
using namespace std;

bool check_bit(int N,int pos){
    if(N&(1<<pos)) return true;
    else{
        return false;
    }
}
void sub_sets(char S[], int N){
    for(int i = 0;i<(1<<N);i++){
        for(int j = 0;j<N;j++){
            if(check_bit(i,j)) cout << S[j];
        }
        cout<<endl;
    }
}
int main() {
	char S[] = {'R','O','M'};
	int N = 3;
	sub_sets(S,N);

}
