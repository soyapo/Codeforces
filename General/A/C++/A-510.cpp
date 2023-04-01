#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n, m, right = 1; cin>>n>>m;
    for(int i = 1; i <= n; i++){
        if(i%2==1) cout<<string(m,'#')<<endl;
        else{
            if(right){
                cout<<string(m - 1, '.')<<"#"<<endl;
                right = 1 - right;
            }
            else{
                cout<<'#'<<string(m - 1, '.')<<endl;
                right = 1 - right;
            }
        }
    }
    return 0;
}