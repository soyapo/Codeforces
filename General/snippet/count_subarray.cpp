#include <bits/stdc++.h>
using namespace std;
const int N = 32;
bool flag[N];
int n;
void zirmaj(int k){
    if(k == n + 1){
        for(int i = 0; i < n; i++){
            if(flag[i]) cout<<i<<" ";
        }
        cout<<endl;
        return;
    }
    flag[k] = true;
    zirmaj(k+1);
    flag[k] = false;
    zirmaj(k+1);
}
int main(){
    cin>>n;
    zirmaj(1);
    return 0;
}