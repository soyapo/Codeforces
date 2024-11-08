#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
const int mn = 2e5 + 10;
long long int nums[2][mn];
int main(){
    fst
    long long int t, n, x, y; cin>>t;
    while(t--){
        cin>>n;

        long long int s = 0;

        for(int i = 0; i < n; i++){
            cin>>x>>y;
            nums[y][x] = 1;
        }

        for(int i = 0; i < n; i++)
            if(nums[0][i] && (nums[0][i] == nums[1][i]))
                s += n - 2;

        for(int i = 0; i < 2; i++)
            for(int j = 1; j < n - 1; j++)
                if(nums[i][j] && nums[1 - i][j - 1] && nums[1 - i][j + 1])
                    s++;

        cout<<s<<'\n';

        
        for(int i = 0; i < 2; i++)
            for(int j = 0; j < n; j++)
                nums[i][j] = 0;
    }
    return 0;
}