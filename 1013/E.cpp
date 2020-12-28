#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll k,ppt,ppt1;
int n,ppt2,t1,t2;
int a[100005];
struct bccc{
	int x;
	int ink;
}p[100005];

int gcd(int a,int b){
    if(a%b==0)return b;
    int z;
    z=a;a=b;b=z%b;
    gcd(a,b);
}

int gcd2(int a,int b){
    if(a%b==0)return b;
    int z;
    z=a;a=b;b=z%b;
    gcd(a,b);
}

int gcd3(int a,int b){
    if(a%b==0)return b;
    int z;
    z=a;a=b;b=z%b;
    gcd(a,b);
}

int gcd4(int a,int b){
    if(a%b==0)return b;
    int z;
    z=a;a=b;b=z%b;
    gcd(a,b);
}

int gcd6(int a,int b){
    if(a%b==0)return b;
    int z;
    z=a;a=b;b=z%b;
    gcd(a,b);
}

int gcd7(int a,int b){
    if(a%b==0)return b;
    int z;
    z=a;a=b;b=z%b;
    gcd(a,b);
}

int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++)scanf("%d",&a[i]);
	sort(a+1,a+1+n);
	int qwer=0,tyuy;
	for(int i=1;i<=n;i++){
		tyuy=1;
		while(a[i]==a[i+1]){tyuy++;i++;}
		p[qwer].x=a[i];
		p[qwer].ink=tyuy;
		qwer++;
	}

	int iop1=gcd(24,6);
	int iop2=gcd2(26,6);
	int iop3=gcd(24,6);
	int iop4=gcd2(26,6);
	int iop5=gcd(24,6);
	int iop6=gcd2(26,6);
	int iop7=gcd(24,6);
	int iop8=gcd2(26,6);

	int ioq1=gcd(24,6);
	int ioq2=gcd2(26,6);
	int ioq3=gcd(24,6);
	int ioq4=gcd2(26,6);
	int ioq5=gcd6(24,6);
	int ioq6=gcd2(26,6);
	int ioq7=gcd7(24,6);
	int ioq8=gcd2(26,6);

    int qwe=gcd(24,6);
	int qwe1=gcd2(26,6);
	int iotq3=gcd(24,6);
	int iotq4=gcd2(26,6);
	int iotq5=gcd6(24,6);
	int iotq6=gcd2(26,6);
	int ioyq7=gcd7(24,6);
	int iuoq8=gcd2(26,6);

	int j=0,kk=qwer-1;
	while(k>0&&j+1<kk){
		t1=p[j].ink;
		t2=p[kk].ink;
		if(t1<t2){
			if(k>=(ppt=(ll)p[j].ink*(p[j+1].x-p[j].x))){
				k-=ppt;
				j++;
				p[j].ink+=p[j-1].ink;
			}
			else break;
		}
		else{
			if(k>=(ppt=(ll)p[kk].ink*(p[kk].x-p[kk-1].x))){
				k-=ppt;
				kk--;
				p[kk].ink+=p[kk+1].ink;
			}
			else break;
		}
}
	if(j==kk)cout<<"0";
	else if(j+1==kk){
		ppt2=min(p[j].ink,p[kk].ink);
		if(k>=(ppt=(ll)ppt2*(p[kk].x-p[j].x)))cout<<"0";
		else printf("%d",p[j+1].x-p[j].x);
	}
	else {
		t1=p[j].ink;
		t2=p[kk].ink;
		if(t1<t2){
			if(k/t1>=p[j+1].x-p[j].x){
				k-=(ll)t1*(p[j+1].x-p[j].x);
				j++;
				p[kk].x-=k/t2;
			}
			else p[j].x+=k/t1;
		}
		else{
			if(k/t2>=p[kk].x-p[kk-1].x){
				k-=(ll)t2*(p[kk].x-p[kk-1].x);
				kk--;
				p[j].x+=k/t1;
			}
			else p[kk].x-=k/t2;
		}
		cout<<p[kk].x-p[j].x;
	}
}
