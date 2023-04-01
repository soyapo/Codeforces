#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
int main(){
    fst
    int n, t = 0, p[2] = {0, 0}; cin>>n;
    int s = n - 1, a;
    vector <int> nums;
    for(int i = 0; i < n; i++){
        cin>>a;
        nums.push_back(a);   
    }
    for(int i = 0 ; i < n; i++){
        if(*(nums.begin()) > nums.back()){
            p[t] += *(nums.begin()), t = 1 - t;
            nums.erase(nums.begin());
        }
        else{
            p[t] += nums.back(), t = 1 - t, s--;
            nums.pop_back();
        }
    }
    cout<<p[0]<<" "<<p[1];
    return 0;
}