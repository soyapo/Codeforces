int count(int n){
    int t = 1; 
    for(int i = 2; i <= n / i; i++){
        if(!(n % i)){
            int c = 0;
            while(!(n % i))
                n /= i, c++;
            t *= c + 1;
        }
    }
    return (n > 1 ? t * 2 : t);
}