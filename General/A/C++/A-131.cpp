#include <bits/stdc++.h>
using namespace std;
int main(){
    string test, temp; cin>>test;
    temp = test;
    int start, count = 0, lenn = test.length();
    for(int i = 0; i < lenn; i++){
        if(isupper(test[i])){
            count++;
            if(count == 1) start = i;
        }
        if(isupper(temp[i])) temp[i] = tolower(temp[i]);
        else temp[i] = toupper(temp[i]);
    }
    if(lenn == 1 || count == lenn || (start == 1 && count == lenn - 1)) cout<<temp;
    else cout<<test;
    return 0;
}