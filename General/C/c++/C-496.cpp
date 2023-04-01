#include <bits/stdc++.h>
using namespace std;
const int mn = 101;
string nums[mn];
int check[mn];
int main(){
    int n, m, cn = 0, small_present = 0; cin >> n >> m;
    for (int i = 0; i < n; i++) cin>>nums[i];
    for(int index = 0; index < m; index++){
        small_present = 0;
        for(int i = 1; i < n; i++){
            if(nums[i][index] < nums[i - 1][index] && check[i] != 1){
                cn++, small_present = 1;
                break;
            }
        }
        if(!small_present){
            for(int i = 1; i < n; i++){
                if(nums[i][index] > nums[i - 1][index] && check[i] != 1) check[i] = 1;
            }
        }
    }
    cout << cn;
    return 0;
}