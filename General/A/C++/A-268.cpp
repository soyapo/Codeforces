#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n, h, a, all = 0, nums[30]; cin>>n;
    map <int, int> left;
    map <int, int> right;
    for(int i = 0; i < n; i++){
        cin>>h>>a;
        left[h]++, right[a]++, nums[i] = h;
    }
    for(int i = 0; i < n; i++) all += left[nums[i]] * right[nums[i]], left[nums[i]] = 0;
    cout<<all;
    return 0;
}