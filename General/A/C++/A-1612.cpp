#include <bits/stdc++.h>
using namespace std;
int manhattan(int x1, int y1, int x2, int y2){
    return abs(x1 - x2) + abs(y1 - y2);
}
int main(){
    int t, x, y, is_done; cin >> t;
    for (int i = 0; i < t; i++){
        cin >> x >> y;
        is_done = 0;
        for (int n = 0; n <= x; n++){
            for (int m = 0; m <= y; m++){
                if (!is_done && manhattan(0, 0, n, m) == manhattan(n, m, x, y)){
                    cout<<to_string(n)<<" "<<to_string(m)<<"\n";
                    is_done = 1;
                }
            }
        }
        if (!is_done) cout<<"-1 -1\n";
    }
    return 0;
}