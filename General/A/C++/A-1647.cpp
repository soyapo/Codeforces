#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
int main(){
    fst
    int t, n; cin>>t;
    while(t--){
        cin>>n;
        if(n%3==0){
            for(int i = 0; i < n/3; i++)
                cout<<"21";
            cout<<endl;
        }
        else if(n%3==1){
            cout<<1;
            for(int i = 0; i < (n - 1) / 3; i++)
                cout<<"21";
            cout<<endl;
        }
        else{
            cout<<2;
            for(int i = 0; i < (n - 2) / 3; i++)
                cout<<"12";
            cout<<endl;
        }
    }
    return 0;
}