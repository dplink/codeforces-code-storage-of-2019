#include"stdio.h"
#include"iostream"
#include"stdlib.h"
#include"algorithm"
#include"math.h"
#include"string.h"
#include"queue"
using namespace std;

int main(){
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);
    int i,j,l;
    char t[1001],a[1001],b[1001];
    scanf("%s",a);
    scanf("%s",b);
    scanf("%s",t);
    l=strlen(t);
    for(i=0;i<l;i++){
        if(t[i]>=97 && t[i]<=122)for(j=0;j<26;j++){if(a[j]==t[i]){cout<<b[j];break;}}
        else if(t[i]>=65 && t[i]<=90)for(j=0;j<26;j++)if(a[j]==t[i]+32){cout<<b[j]-32;break;}
        else cout<<t[i];
    }
    cout<<l;
return 0;
}
