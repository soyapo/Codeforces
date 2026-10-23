#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}
int main(){
   ios_base::sync_with_stdio(0); cin.tie(NULL);
   int in1, in2, up, down=6; cin>>in1>>in2;
   up = max(in1, in2), up = 6 - (up-1);
   cout<<up/gcd(up, down)<<"/"<<down/gcd(up, down);
   return 0;
}