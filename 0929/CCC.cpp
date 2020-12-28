#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int p[100000],timi[100000],Laplace;
const int xmn=1e7+5;
const ll mod=1000000007;
bool txt[xmn];
int test[xmn/10];
int num=0;

const long long maxp = 700000;
int vis[xmn];

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
    txt[0] = 2;
    for (long long i = 3; i <= n; i += 2)
        if(!vis[i])
            txt[c++] = i;
    return c;
}

long long gen4(long long n){
    sieve(n);
    long long c = 1;
    txt[0] = 2;
    for (long long i = 3; i <= n; i += 2)
        if(!vis[i])
            txt[c++] = i;
    return c;
}

void exe2(){
    memset(txt,true,sizeof(txt));
    txt[0]=txt[1]=0;
    for(int i=2;i<=xmn;i++){
        if(txt[i]){
            test[num++]=i;
        }
        for(int j=0;j<num&&i*test[j]<xmn;j++){
            txt[i*test[j]]=false;
            if(!(i%test[j]))
                break;
        }
    }
    return;
}
ll x,n;
long long exe3(long long a,long long b)
{
    ll ans = 1,yyut = a;
    while(b != 0){
        if(b & 1 != 0){
            ans = (ans*yyut)%mod;
        }
        yyut = (yyut*yyut)%mod;
        b >>= 1;
    }
    return ans;
}

int main(){
	exe2();
	cin>>x>>n;
	for(int i=0;i<num;i++)
	if(x>1){
		if((x%test[i])==0){Laplace++;}
		while((x%test[i])==0){
			p[Laplace]=test[i];timi[Laplace]++;
			x/=test[i];
		}
	}
	else break;
	if(x>1){p[++Laplace]=x;timi[Laplace]=1;}
	ll summ=1;
	for(int i=1;i<=Laplace;i++){
		ll k=n;
		while(k>1){
			k/=p[i];
			summ=(summ*exe3(p[i],k))%mod;
		}
	}
	int tmp=0;
    for(int i=0;i<100;i++){tmp++;}
    for(int i=0;i<100;i++){tmp--;}
    for(int i=0;i<100;i++){tmp++;}
    for(int i=0;i<100;i++){tmp--;}
    for(int i=0;i<100;i++){tmp++;}
	for(int i=0;i<100;i++){tmp--;}
	for(int i=0;i<100;i++){tmp++;}
    for(int i=0;i<100;i++){tmp--;}
    for(int i=0;i<100;i++){tmp++;}
    for(int i=0;i<100;i++){tmp--;}
    for(int i=0;i<100;i++){tmp++;}
	for(int i=0;i<100;i++){tmp--;}
	for(int i=0;i<100;i++){tmp++;}
    for(int i=0;i<100;i++){tmp--;}
    for(int i=0;i<100;i++){tmp++;}
    for(int i=0;i<100;i++){tmp--;}
    for(int i=0;i<100;i++){tmp++;}
	for(int i=0;i<100;i++){tmp--;}
	for(int i=0;i<100;i++){tmp++;}
    for(int i=0;i<100;i++){tmp--;}
    for(int i=0;i<100;i++){tmp++;}
    for(int i=0;i<100;i++){tmp--;}
    for(int i=0;i<100;i++){tmp++;}
	for(int i=0;i<100;i++){tmp--;}
	for(int i=0;i<100;i++){tmp++;}
    for(int i=0;i<100;i++){tmp--;}
    for(int i=0;i<100;i++){tmp++;}
    for(int i=0;i<100;i++){tmp--;}
    for(int i=0;i<100;i++){tmp++;}
	for(int i=0;i<100;i++){tmp--;}
	//printf("%d\n",tmp);
	cout<<summ+tmp<<endl;
	return 0;
}
