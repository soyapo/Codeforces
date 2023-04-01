#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, count = 0; cin >> a >> b;
    while (true){
        if (a < 1 || b < 1 || (a == 1 && b == 1)) break;
        if(b > a) swap(b, a);
        a -= 2, b -= 1, count += 1;
    }
    cout << count;
    return 0;
}