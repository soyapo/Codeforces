#include <bits/stdc++.h>
using namespace std;
int main(){
    string word;
    cin >> word;
    int counter = 0, len = word.length(), looplen = word.length();
    for (int i = 0; i < looplen; i++){
        counter =  word[i] == '(' ? counter + 1 : counter - 1;
        if (counter < 0){
            counter = 0;
            len--;
        }
    }
    cout << len - counter;
}