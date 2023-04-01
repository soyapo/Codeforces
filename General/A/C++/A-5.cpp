#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    int ppl = 0, bit = 0;
	while(getline(cin, s)){
        if(s[0] == '+') ppl++;
        else if(s[0] == '-') ppl--;
        else bit += (s.substr(s.find(':') + 1, s.length()).length()) * ppl;
    }
    cout<<bit;
	return 0;
}