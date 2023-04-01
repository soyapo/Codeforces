#include<bits/stdc++.h>
using namespace std;
int count_unique_char(char* str) {
	int hash[128] = { 0 }, i, c = 0;
	for (i = 0; i < strlen(str); ++i) hash[str[i]] = 1;
	for (i = 0; i < 128; ++i) c += hash[i];
	return c;
}
int main() {
	char str[300];
	gets(str);
	int count = count_unique_char(str);
	if(count%2==1) cout<<"IGNORE HIM!";
	else cout<<"CHAT WITH HER!";
}