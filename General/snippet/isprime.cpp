int is_prime(int n){
    if (n < 2) return false;    
    int i = 2;
    while (i <= n / i) {
        if (n % i == 0) return 0;
        i += 1;
    }
    return 1;
}