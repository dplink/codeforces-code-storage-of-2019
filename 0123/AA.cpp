#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int i,n,t[10001]={0},d[222],a,b;
	scanf("%d",&n);
	for(i=1;i<=n;i++)scanf("%d",&d[i]);
	sort(d+1,d+1+n);
	b=d[n];
	for(i=1;i<=n;i++){
		if(t[d[i]]) a=d[i];
		t[d[i]]++;
	}
	for(i=n;i>=1;i--)if(b%d[i]!=0){a=d[i];break;}
	printf("%d %d\n",b,a);
}

