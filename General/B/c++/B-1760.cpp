    #include <bits/stdc++.h>
    using namespace std;
    #define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int main(){
        fst
        int t, n; cin>>t;
        while(t--){
            cin>>n;
            char s;
            int maxx = 1;
            map <int, int> nums;
            for(int i = 0; i < n; i++){
                cin>>s;
                nums[int(s)]++;
            }
            for(auto u: nums)
                if(u.second)
                    maxx = u.first;
            cout<<maxx - 96<<'\n';
        }
        return 0;
    }
    /*
        ___                       ___           ___           ___           ___           ___     
        /\__\          ___        /\  \         /\__\         /\__\         /\  \         /\  \    
        / /  /         /\  \      /  \  \       / /  /        / /  /        /  \  \       /  \  \   
    / /__/          \ \  \    / /\ \  \     / /__/        / /__/        / /\ \  \     / /\ \  \  
    /  \  \ ___      /  \__\  / /  \ \  \   /  \  \ ___   /  \__\____   /  \ \ \  \   _\ \ \ \  \ 
    / /\ \  /\__\  __/ /\/__/ / /__/ \ \__\ / /\ \  /\__\ / /\  ___\__\ / /\ \ \ \__\ /\ \ \ \ \__\
    \/__\ \/ /  / /\/ /  /    \ \  \  \/__/ \/__\ \/ /  / \/_| |  |     \/__\ \/ /  / \ \ \ \ \/__/
        \  /  /  \  /__/      \ \  \            \  /  /     | |  |          \  /  /   \ \ \ \__\  
        / /  /    \ \__\       \ \  \           / /  /      | |  |          / /  /     \ \/ /  /  
        / /  /      \/__/        \ \__\         / /  /       | |  |         / /  /       \  /  /   
        \/__/                     \/__/         \/__/         \|__|         \/__/         \/__/    
    */