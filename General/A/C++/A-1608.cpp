#include <bits/stdc++.h>
int main(){
    std::ios_base::sync_with_stdio(0); std::cin.tie(NULL);
    int t, n; std::cin >> t;
    while(t--) {
        std::cin >> n;
        for(int j = 0; j < n; j++) std::cout<<j+2<<" ";
        std::cout<<'\n';
    }
    return 0;
}