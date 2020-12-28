#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
const long long maxn = 10000007 + 10;
const long long maxp = 700000;
int vis[maxn];    // i�Ǻ���visΪ1��i��������visΪ0
long long prime[maxp];

void sieve(long long n){
    long long m = (long long)sqrt(n + 0.5);
    memset(vis, 0, sizeof(vis));
    vis[2] = 0;
    for (long long i = 3; i <= m; i += 2) {
        if(!vis[i])
            for (long long j = i * i; j <= n; j += i)
                vis[j] = 1;
        if(i * i > n)
            break;
    }
}

long long gen(long long n){
    sieve(n);
    long long c = 1;
    prime[0] = 2;
    for (long long i = 3; i <= n; i += 2)
        if(!vis[i])
            prime[c++] = i;
    return c;
}

long long x,n,c;
int main(){
    //freopen("test.in","r",stdin);
    //freopen("test.out","w",stdout);
    cin>>x>>n;
    c = gen(x);
    for (long long i = 0; i < c; i++)
        printf("%lld ", prime[i]);

    return 0;
}
