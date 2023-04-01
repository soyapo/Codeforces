#include <bits/stdc++.h>
using namespace std;
int main()
{
    int score, t; cin >> t;
    string keyboard, word;
    while (t--){
        score = 0;
        cin >> keyboard >> word;
        for (int i = 0; i < word.length() - 1; i++) score += abs(keyboard.find(word[i]) - keyboard.find(word[i + 1]));
        cout << score << endl;
    }
    return 0;
}