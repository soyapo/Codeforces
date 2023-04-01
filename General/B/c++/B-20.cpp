#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
int main(){
    fst
    double a, b, c; 
    cin>>a>>b>>c;
    long long int d = b * b - 4 * a * c, mb = (b > 0 ? b - (2 * b) : b + (2 * abs(b))), mc = (c > 0 ? c - (2 * c) : c + (2 * abs(c)));
    if(!a && !b && !c)
        return cout<<-1, 0;
    else if((!a && !b && c) || d < 0)
        return cout<<0, 0;
    else if(!a)
        cout<<1<<endl<<fixed<<setprecision(5)<<mc / b;
    else if(!d)
        cout<<1<<endl<<fixed<<setprecision(5)<<mb / (2 * a);
    else{
        float x1 = (mb + sqrt(d)) / (2 * a), x2 = (mb - sqrt(d)) / (2 * a);
        cout<<2<<endl<<fixed<<setprecision(5)<<min(x1, x2)<<'\n'<<max(x1, x2);
    }
    return 0;
}
