#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n;
    cin>>t;
    for(int i = 0; i < t; i++){
        cin>>n;
        for(int j = 1; j <= n; j++){
            cout<<string(j, '(') + string(j, ')');
            int temp = n - j;
            for(int k = 0; k < temp; k++) cout<<"()";
            cout<<endl;
        }
    }
    return 0;
}