#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ar = 0, maxall = 0, max1, max2, max3, min1, min2, min3, maxindex;
    char maxchar;
    pair <int, int> nums[3];
    int valids[2];
    for(int i = 0; i < 3; i++){
        cin>>nums[i].first>>nums[i].second;
        if(max(nums[i].first, nums[i].second) > maxall){
            if(i==0) 
                maxchar = 'A', maxindex = 0, valids[0] = 1, valids[1] = 2;
            else if(i==1) 
                maxchar = 'B', maxindex = 1, valids[0] = 0, valids[1] = 2;
            else 
                maxchar = 'C', maxindex = 2, valids[0] = 0, valids[1] = 1;
        } 
        maxall = max(maxall, max(nums[i].first, nums[i].second));
        ar+=(nums[i].first * nums[i].second);
    }
    max1 = max(nums[0].first, nums[0].second), max2 = max(nums[1].first, nums[1].second), max3 = max(nums[2].first, nums[2].second);
    min1 = min(nums[0].first, nums[0].second), min2 = min(nums[1].first, nums[1].second), min3 = min(nums[2].first, nums[2].second);
    char second;
    if(max(nums[1].first, nums[1].second) > max(nums[1].first, nums[1].second))
        second = 'B';
    else 
        second = 'C';
    if(sqrt(ar) * sqrt(ar) != ar || sqrt(ar) < maxall) 
        cout<<"-1";
    else{
        int tp = max(nums[maxindex].first, nums[maxindex].second), sp = sqrt(ar) - min(nums[maxindex].first, nums[maxindex].second);
        cout<<sqrt(ar)<<endl;
        if(min1 + min2 + min3 == sqrt(ar) && max1 == max2 && max2 == max3){
            while(min1--)
                cout<<string(max1, 'A')<<endl;
            while(min2--)
                cout<<string(max2, 'B')<<endl;
            while(min3--)
                cout<<string(max3, 'C')<<endl;
        }
        else if(min(nums[valids[0]].first, nums[valids[0]].second) + 
                min(nums[valids[1]].first, nums[valids[1]].second) == maxall && 
                max(nums[valids[0]].first, nums[valids[0]].second) == 
                max(nums[valids[1]].first, nums[valids[1]].second) && 
                max(nums[valids[0]].first, nums[valids[0]].second) == sp){
            int tmp = min(nums[maxindex].first, nums[maxindex].second);
            while(tmp--)
                cout<<string(maxall, maxchar)<<endl;
            while(sp--){
                if(maxchar=='A')
                    cout<<string(min2, 'B')<<string(min3, 'C')<<endl;
                else if(maxchar=='B')
                    cout<<string(min1, 'A')<<string(min3, 'C')<<endl;
                else if(maxchar=='C')
                    cout<<string(min2, 'B')<<string(min1, 'A')<<endl;
            }
        }
        else if(max(nums[valids[0]].first, nums[valids[0]].second) + 
                max(nums[valids[1]].first, nums[valids[1]].second) == maxall && 
                min(nums[valids[0]].first, nums[valids[0]].second) == 
                min(nums[valids[1]].first, nums[valids[1]].second) && 
                min(nums[valids[0]].first, nums[valids[0]].second) == sp){
            int tmp = min(nums[maxindex].first, nums[maxindex].second);
            while(tmp--)
                cout<<string(maxall, maxchar)<<endl;
            while(sp--){
                if(maxchar=='A')
                    cout<<string(max2, 'B')<<string(max3, 'C')<<endl;
                else if(maxchar=='B')
                    cout<<string(max1, 'A')<<string(max3, 'C')<<endl;
                else if(maxchar=='C')
                    cout<<string(max2, 'B')<<string(max1, 'A')<<endl;
            }
        }
        else if(min(nums[valids[0]].first, nums[valids[0]].second) + 
                max(nums[valids[1]].first, nums[valids[1]].second) == maxall && 
                max(nums[valids[0]].first, nums[valids[0]].second) == 
                min(nums[valids[1]].first, nums[valids[1]].second) && 
                max(nums[valids[0]].first, nums[valids[0]].second) == sp){
            int tmp = min(nums[maxindex].first, nums[maxindex].second);
            cout<<maxchar<<" "<<second<<" "<<endl;
            while(tmp--)
                cout<<string(maxall, maxchar)<<endl;
            while(sp--){
                if(maxchar=='A' || second == 'B')
                    cout<<string(max2, 'B')<<string(min3, 'C')<<endl;
                else if(maxchar=='A' || second == 'C')
                    cout<<string(max3, 'C')<<string(min2, 'B')<<endl;
                else if(maxchar=='B' || second == 'A')
                    cout<<string(max1, 'A')<<string(min3, 'C')<<endl;
                else if(maxchar=='B' || second == 'C')
                    cout<<string(max3, 'C')<<string(min1, 'A')<<endl;
                else if(maxchar=='C' || second == 'B')
                    cout<<string(max2, 'B')<<string(min1, 'A')<<endl;
                else if(maxchar=='C' || second == 'A')
                    cout<<string(max1, 'A')<<string(min2, 'B')<<endl;
            }
        }
        else
            cout<<"-1";
    }
    return 0;
}