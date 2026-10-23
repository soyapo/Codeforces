#include <bits/stdc++.h>
using namespace std;
int nums[7];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t; cin >> t;
    while (t--){
        for (int i = 0; i < 7; i++) cin >> nums[i];
        int is_done = 0;
        for (int i = 0; i < 3; i++){
            for (int j = i + 1; j < 4; j++){
                for (int k = j + 1; k < 5; k++){
                    if (!is_done && nums[i] + nums[j] + nums[k] == nums[6]){
                        cout << nums[i] << " " << nums[j] << " " << nums[k] << '\n';
                        is_done = 1;
                    }
                }
            }
        }
    }
    return 0;
}