#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int score, t; cin >> t;
    string keyboard, word;
    while (t--){
        score = 0;
        cin >> keyboard >> word;
        for (int i = 0; i < word.length() - 1; i++) score += abs((int)keyboard.find(word[i]) - (int)keyboard.find(word[i + 1]));
        cout << score << '\n';
    }
    return 0;
}