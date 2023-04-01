#include <bits/stdc++.h>
int main(){
    int t, n; std::cin >> t;
    while(t--) {
        std::cin >> n;
        for(int j = 0; j < n; j++) std::cout<<j+2<<" ";
        std::cout<<std::endl;
    }
    return 0;
}