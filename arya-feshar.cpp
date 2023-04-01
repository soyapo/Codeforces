#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
int main(){
    fst
    int cnt = 0;
    for(int i = 111111; i <= 444444; i++){
        int n = i, n2 = i, valid = 1;
        string s;
        while(n > 0)
            if(n % 10 > 4 || n % 10 < 1) 
                valid = 0;
            n /= 10;
        s = to_string(n2);
        for(int i = 0; i < 4; i++){
            int a = stoi(s.substr(i, 3)), sum = 0;
            while(a > 0) 
                sum += a % 10, a /= 10;
            if(sum % 2 == 1) 
                valid = 0;
        }
        if(valid){
            cout<<n2<<endl;
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}