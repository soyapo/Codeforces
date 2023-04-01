#include <iostream>
using namespace std;int n,i,a,e,d;int main(){cin>>n;for(i=1;i<=n;i++)cin>>a,e=max(e,a),e==i?d++:0;cout<<d;}