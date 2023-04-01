#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
int main(){
    fst
    map <string, int> nums;
    int index = 1, t; cin>>t;
    for(char i = 'a'; i <= 'z'; i++)
        for(char j = 'a'; j <= 'z'; j++)
            if(i != j) nums[to_string(i) + to_string(j)] = index, index++;
    string s;
    while(t--){
        cin>>s;
        cout<<nums[s]<<endl;
    }
    for(auto u: nums)
        cout<<u.first<<" "<<u.second<<endl;
}