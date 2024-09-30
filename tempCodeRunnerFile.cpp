int ans=0;
    while(n!=0){
        int bit = n%10;
        ans = ans*10 + bit;
        n/=10;
    }