#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t, nums[4], temp; cin >> t;
    while (t--){
        cin >> nums[0] >> nums[1] >> nums[2] >> nums[3];
        temp = min(nums[1], nums[3]);
        nums[1] -= temp, nums[3] -= temp;
        if (nums[1] >= 7) cout << ">\n";
        else if (nums[3] >= 7) cout << "<\n";
        else{
            for (int i = 0; i < nums[1]; i++) nums[0] *= 10;
            for (int i = 0; i < nums[3]; i++) nums[2] *= 10;
            if (nums[0] > nums[2]) cout << ">\n";
            else if (nums[0] == nums[2]) cout << "=\n";
            else cout << "<\n";
        }
    }
    return 0;
}
