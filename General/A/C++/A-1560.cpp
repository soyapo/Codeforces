#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int t, k, count = 0, num = 0, counter = 0; cin>>t;
    while(t--){
        cin>>k;
        count = 0, counter = 0;
        while(count < k){
            counter++;
            if(counter%3 == 0 || counter%10 == 3) continue;
            else num = counter, count+= 1;
        }
        cout<<num<<endl;
    }
}