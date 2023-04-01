#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    map <string, int> nums;
    int n, mx = -1; cin>>n;
    string s, win; cin>>s;
    for(int i = 0; i < n-1; i++){
        string temp = s.substr(i, 2);
        nums[temp]++;
    }
    map<string, int>::iterator it;
    for (it = nums.begin(); it != nums.end(); it++){
        if(it->second > mx) mx = it->second, win = it->first;
    }
    cout<<win;
    return 0;
}