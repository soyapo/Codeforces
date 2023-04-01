#include <bits/stdc++.h>
using namespace std;
int nums[7];
int main(){
    int t; cin >> t;
    while (t--){
        for (int i = 0; i < 7; i++) cin >> nums[i];
        for (int i = 0; i < 3; i++){
            for (int j = i + 1; j < 4; j++){
                for (int k = j + 1; k < 5; k++){
                    if (nums[i] + nums[j] + nums[k] == nums[6]) cout << nums[i] << " " << nums[j] << " " << nums[k] << endl;
                }
            }
        }
    }
    return 0;
}