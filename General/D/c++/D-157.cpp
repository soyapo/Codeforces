#include<bits/stdc++.h>
using namespace std;
const int mn = 1e5 + 10;
int yes[mn], no[mn], n, m, sy, sn, sus_count = 0, temp;
pair <char, int> confs[mn];
bool sus[mn];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    cin>>n>>m;
    for(int i = 0; i < n; i++){
        char f;
        cin>>f>>temp;
        if(f == '+') yes[--temp]++, sy++;
        else no[--temp]++, sn++;
        confs[i] = {f, temp};
    }
    for(int i = 0; i < n; i++){
        if(yes[i] + (sn - no[i]) == m) sus[i] = true, sus_count++;
        else sus[i] = false;
    }
    for(int i = 0; i < n; i++)
        cout<<(sus_count == 1 ? ((confs[i].first == '+' && sus[confs[i].second]) ? "Truth\n" : ((confs[i].first == '-' && sus[confs[i].second]) ? "Lie\n" : ((confs[i].first == '+' && !sus[confs[i].second]) ? "Lie\n" : ((confs[i].first == '-' && !sus[confs[i].second]) ? "Truth\n" : "")))) : (sus[confs[i].second] ? "Not defined\n" : ((confs[i].first == '+' && !sus[confs[i].second]) ? "Lie\n" : "Truth\n")));
    return 0;
}