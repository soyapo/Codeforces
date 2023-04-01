#include <bits/stdc++.h>
using namespace std;
vector<int> a_nums;
vector<int> b_nums;
string test;
int is_valid = 0;
int main(){
    cin >> test;
    for (int i = 0; i < test.length(); i++){
        if (test[i] == 'A' && test[i + 1] == 'B'){
            a_nums.push_back(i);
            a_nums.push_back(i + 1);
        }
        else if (test[i] == 'B' && test[i + 1] == 'A'){
            b_nums.push_back(i);
            b_nums.push_back(i + 1);
        }
    }
    for (vector<int>::iterator p1 = a_nums.begin(); p1 != a_nums.end(); p1 += 2){
        if (!is_valid){
            for (vector<int>::iterator p2 = b_nums.begin(); p2 != b_nums.end(); p2 += 2){
                if (*p1 != *p2 && *p1 != *(p2 + 1) && *(p1 + 1) != *p2 && *(p1 + 1) != *(p2 + 1)){
                    is_valid = 1;
                    break;
                }
            }
        }
        else break;
    }
    if (is_valid) cout << "YES";
    else cout << "NO";
    return 0;
}