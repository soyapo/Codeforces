#include <bits/stdc++.h>
using namespace std;
int main(){
    string seq;
    int n, cn = 0, tmp;
    cin>>n>>seq;
    for(int i = 1; i <= n; i++){
        tmp = i;
        for(int j = 0; j < seq.length(); j++){
            if(seq[j] == '>'){
                if(tmp + 1 > n){
                    cn++;
                    goto star;
                }
                else tmp++;
            }
            if(seq[j] == '<'){
                if(tmp - 1 < 1){
                    cn++;
                    goto star; 
                }
                else tmp--;
            }
        }
        star:tmp = tmp + 1 - 1;
    }
    cout<<cn;
    return 0;
}