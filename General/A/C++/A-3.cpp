#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str1, str2; cin>>str1>>str2;
    int x1=str1[0]-'a'+1, y1=str1[1]-'0',x2=str2[0]-'a'+1,y2=str2[1]-'0', dist=max(abs(x1-x2),abs(y1-y2));
    cout<<dist<<endl;
    while(dist--){
	    if(x1>x2&&y1>y2) {x1--;y1--; cout<<"LD\n";}
		else if(x1>x2&&y1==y2){x1--;cout<<"L\n";}
		else if(x1>x2&&y1<y2){x1--;y1++;cout<<"LU\n";}
		else if(x1==x2&&y1>y2){y1--;cout<<"D\n";}
		else if(x1==x2&&y1<y2){y1++;cout<<"U\n";}
		else if(x1<x2&&y1>y2){x1++;y1--;cout<<"RD\n";}
		else if(x1<x2&&y1==y2){x1++;cout<<"R\n";}
		else if(x1<x2&&y1<y2){x1++;y1++;cout<<"RU\n";}
	}
    return 0;
}