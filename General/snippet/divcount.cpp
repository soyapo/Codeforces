int count(int n){
    int t = 1, n2 = n; 
    for(int i = 2; i <= n2 / 2; i++){
        if(p[i] && !(n % i)){
            int c = 0;
            while(!(n % i))
                n /= i, c++;
            t *= c + 1;
        }
    }
    return (p[n2] ? t + 1 : t);
}