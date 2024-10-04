bool isPrime ( long long n){
    int cnt=1;
    for ( int i=2 ;i*i <=n ;i++ ){
        if ( n % i == 0 ){
            cnt++;
            if ( i!= n/i){
                cnt++;
            }
        }

    }
    return (cnt <=2 ? true : false);
}
