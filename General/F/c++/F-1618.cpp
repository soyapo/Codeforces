#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long int n, m, right = 0; cin>>n>>m;
	if(n == m) cout<<"YES";
	else{
		string four[4], temp, temp2, str = bitset<64>(n).to_string(), ans = bitset<64>(m).to_string();
		str.erase(0, min(str.find_first_not_of('0'), str.size()-1));
		ans.erase(0, min(ans.find_first_not_of('0'), ans.size()-1));
		temp = str + "1", four[0] = temp;
		reverse(temp.begin(), temp.end());
		four[1] = temp = str;
		if(temp[temp.length() - 1] == '0') while(temp[temp.length() - 1] == '0') temp.resize(temp.length() - 1);
		four[2] = temp;
		reverse(temp.begin(), temp.end());
		four[3] = temp;
		for(long long int i = 0; i < 100; i++){
			if(right) break;
			else{
				for(long long int k = 0; k <= i; k++){
					for(long long int j = 0; j < 4; j++){
						temp = string(k, '1') + four[j] + string(i - k, '1');
						if(temp == ans) right = 1;
					}
				}
			}
		}
		if(right) cout<<"YES";
		else cout<<"NO";
	}
	return 0;
}