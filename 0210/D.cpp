#include <cstdio>
#include <cmath>
#include <cstring>
#include <vector>
#include <algorithm>
#include <iostream>
#include <queue>
using namespace std;
int n,m,k;
struct node{
	int mn,id;
}mn[200010];
int p[200010];
int cmp(const void *a,const void *b){
	node x=*(node *)a;	node y=*(node *)b;
	if(x.mn==y.mn) return x.id >y.id ? 1:-1;
	else return x.mn>y.mn ? -1:1;
}
int main(){
	cin>>n>>m>>k;
	for(int i=1;i<=n;i++){
        scanf("%d",&mn[i].mn);
        mn[i].id=i;
	}
	qsort(mn+1,n,sizeof(mn[1]),cmp);
	long long as=0;
	for(int i=1;i<=m*k;i++){
		as+=mn[i].mn;
		p[i]=mn[i].id;
	}
	cout<<as<<endl;
	sort(p+1,p+m*k+1);
	for(int i=1;i<k;i++)printf("%d ",p[i*m]);
	return 0;
}
