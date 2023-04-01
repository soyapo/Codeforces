#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, n, a, b;
    cin>>t;
    while(t--){
        cin>>n>>a>>b;
        if(a+b+2 > n || abs(a-b) > 1) cout<<"-1\n";
        else{
            if(a > b){
                for(int i = 1; i <= a; i++) cout<<i<<" "-(i-1)<<" ";  
                for(int i = n - a; i >= a + 1; i--) cout<<i<<" ";
                cout<<endl;
            }
            else if(a == b){
                for(int i = 1; i <= a; i++) cout<<i<<" "<<n-(i-1)<<" ";  
                for(int i = a + 1; i <= n - a; i++) cout<<i<<" ";
                cout<<endl;
            }
            else{
                for(int i = 1; i <= b; i++) cout<<n-(i-1)<<" "<<i<<" ";     
                for(int i = b + 1; i <= n - b; i++) cout<<i<<" ";
                cout<<endl;
            }

        }
    }
}