const long M = 1000000007; // modulo
map<long, long> F;

long f(long n) {
    if (F.count(n)) return F[n];
    long k=n/2;
    if (n%2==0) { // n=2*k
        return F[n] = (f(k)*f(k) + f(k-1)*f(k-1)) % M;
    } else { // n=2*k+1
        return F[n] = (f(k)*f(k+1) + f(k-1)*f(k)) % M;
    }
}
F[0]=F[1]=1;

