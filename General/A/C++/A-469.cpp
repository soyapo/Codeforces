#include <bits/stdc++.h>
using namespace std;
vector <int> levels;
int main(){
    int n, p, q; cin>>n>>p;
    while(p--){
        cin>>q;
        levels.push_back(q);
    }
    cin>>p;
    while (p--){
        cin>>q;
        levels.push_back(q);
    }
    for(int i = 1; i <= n; i++){
        if(!count(levels.begin(), levels.end(), i)){
            cout<<"Oh, my keyboard!";
            return 0;
        }
    }
    cout<<"I become the guy.";
    return 0;    
}