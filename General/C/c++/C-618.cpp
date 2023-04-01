#include <bits/stdc++.h>
using namespace std;
const int mn = 1e5 + 1;
pair<pair<int, int>, int> star[mn];
int main(){
	long long int n; cin >> n;
	long double shi;
	for (int i = 0; i < n; i++){
		cin >> star[i].first.first >> star[i].first.second;
		star[i].second = i;
	}
	sort(star, star + n);
	bool flag = false;
	double x1 = star[0].first.first, y1 = star[0].first.second, x2 = star[1].first.first, y2 = star[1].first.second;
	if (x2 - x1 != 0) shi = (y2 - y1) / (x2 - x1);
	else flag = true;
	for (int i = 2; i < n; i++){
		double x3 = star[i].first.first, y3 = star[i].first.second;
		if ((flag && x3 != x1) || (!flag && (y3 - y1) / (x3 - x1) != shi)){
			cout << star[0].second + 1 << " " << star[1].second + 1 << " " << star[i].second + 1;
			return 0;
		}
	}
}
