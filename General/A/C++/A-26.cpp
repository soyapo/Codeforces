#include <bits/stdc++.h>
using namespace std;
int evenodd(int test){
    return test%2==0 ? test : test - 1;
}
int is_prime(int test){
    for (int i = evenodd(test)/2; i > 1; i--)
        if (test % i == 0) return 0;
    return 1;
}
int count_prime_divisor(int test){
    int counter = 0;
    for(int i = evenodd(test)/2; i > 1; i--)
        if(is_prime(i) && test % i == 0) counter++;
    return counter;
}
int main(){
    int n, counter = 0; cin>>n;
    for (int i = 2; i <= n; i++)
        if (!is_prime(i) && count_prime_divisor(i) == 2) counter++;
    cout << counter;
    return 0;
}