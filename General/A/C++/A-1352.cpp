#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t, n, n2, n3, mazrab = 1, c = 0; cin>>t;
    while(t--){
        cin>>n;
        n2 = n, c = 0, mazrab = 1;
        do c = n % 10 ? c++ : c, n/=10;
        while(n >= 1);
        cout<<c<<endl;
        do{
            n3 = n2%10, n2/=10;
            if(mazrab * n3 > 0) cout<<mazrab * n3<<" ";
            mazrab *= 10;
        }
        while(n2 >= 1);
        cout<<endl;
    }
    return 0;
}