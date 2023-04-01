#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, n, now, previous, height = 1, is_dead; cin >> t;
    while (t--){
        cin >> n;
        is_dead = 0, height = 1, previous = 0;
        for (int i = 0; i < n; i++){
            if (i > 0){
                previous = now;
                cin >> now;
                if (now == 0 && previous == 0) is_dead = 1;
                else if (now == 1 && previous == 0) height += 1;
                else if (now == 1 && previous == 1) height += 5;
                else if (now == 0 && previous == 1) height += 0;
            }
            else{
                cin >> now;
                if(now) height++;
            }
        }
        if (is_dead) cout << "-1\n";
        else cout << height << endl;
    }
    return 0;
}