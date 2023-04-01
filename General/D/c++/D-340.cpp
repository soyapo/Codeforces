#include <bits/stdc++.h>
using namespace std;
vector <int> seq;
int main(){
    int n, tmp; cin>>n>>tmp;
    seq.push_back(tmp);
    for(int i = 1; i < n; i++){
        cin>>tmp;
        if(seq.back() < tmp) seq.push_back(tmp);
        else{
            int lb = lower_bound(seq.begin(), seq.end(), tmp) - seq.begin();
            seq[lb] = tmp;
        }
    }
    cout<<seq.size();
    return 0;
}