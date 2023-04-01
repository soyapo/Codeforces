#include <bits/stdc++.h>
using namespace std;
const long long mn = 2e5 + 1;
long long nums[mn], mx;
int top(long long arr[], long long len){
    for (int i = 1; i < len; i++) mx = max(mx, arr[i]);
    return mx;
}
int main(){
    long long int t, n, m, count = 0;
    cin >> t;
    while (t--){
        cin >> n;
        for (int i = 0; i < n; i++)cin >> nums[i];
        m = nums[n - 1], count = 0;
        if (m == top(nums, n) || n == 1) cout << "0\n";
        else{
            for (int i = n - 1; i >= 0; --i){
                if (nums[i] > m) count = count + 1, m = nums[i];
            }
            cout<<count<<endl;
        }
    }
    return 0;
}