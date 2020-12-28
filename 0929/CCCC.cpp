#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int p[100000],times[100000],cntp;
const int MAXN=1e7+5;
const ll mod=1000000007;
bool prime[MAXN];
int Prime[MAXN/10];
int num=0;
void make_prime(){
    memset(prime,true,sizeof(prime));
    prime[0]=prime[1]=0;
    for(int i=2;i<=MAXN;i++){
        if(prime[i]){
            Prime[num++]=i;
        }
        for(int j=0;j<num&&i*Prime[j]<MAXN;j++){
            prime[i*Prime[j]]=false;
            if(!(i%Prime[j]))
                break;
        }
    }
    return;
}
ll x,n;
long long ksm(long long a,long long b)
{
    ll ans = 1,base = a;
    while(b != 0){
        if(b & 1 != 0){
            ans = (ans*base)%mod;
        }
        base = (base*base)%mod;
        b >>= 1;
    }
    return ans;
}

int main(){
	make_prime();
	scanf("%lld %lld",&x,&n);
	for(int i=0;i<num;i++)
	if(x>1){
		if((x%Prime[i])==0){cntp++;}
		while((x%Prime[i])==0){
			p[cntp]=Prime[i];times[cntp]++;
			x/=Prime[i];
		}
	}
	else break;
	if(x>1){p[++cntp]=x;times[cntp]=1;}
	ll ans_=1;
	for(int i=1;i<=cntp;i++){
		ll k=n;
		while(k>1){
			k/=p[i];//times[i]--;
			ans_=(ans_*ksm(p[i],k))%mod;//*ksm(p[i],k)
		}
	}
	printf("%lld\n",ans_);
	return 0;
}
