#include"stdio.h"
#include"iostream"
#include"stdlib.h"
#include"algorithm"
#include"math.h"
#include"string.h"
using namespace std;

int n,k,die,v[2][100001],y;
char a[2][100001];
int exe(int d,int p){
	if(p>n)return 1;
	if(a[d][p]=='X'||p<die||v[d][p])return 0;
	v[d][p]=1;die++;
	y=exe(d,p-1)||exe(1-d,p+k)||exe(d,p+1);die--;
	return y;
}
int main(){
	cin>>n>>k;
	die=1;
    scanf("%s %s",a[0]+1,a[1]+1);
    if(exe(0,1))cout<<"YES";
    else cout<<"NO";
    return 0;
}
