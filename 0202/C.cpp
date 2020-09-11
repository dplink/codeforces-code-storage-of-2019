#include"stdio.h"
#include"iostream"
#include"stdlib.h"
#include"algorithm"
#include"math.h"
#include"string.h"
#include"queue"
using namespace std;
int q[100100];
int main(){
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);
    int j,n,i,k,l,w,o,mx=0;
    char a[100010],p[100010];
    cin>>n;
    for(i=0;i<100010;i++)a[i]='a';
    for(i=0;i<n;i++){
        cin>>p;
        l=strlen(p);
        cin>>k;
        for(j=0;j<k;j++){
            cin>>w;
            if(mx<w+l-1)mx=w+l-1;
            for(o=0;o<l;o++)a[w-1+o]=p[o];
        }
    }
    for(i=0;i<mx;i++)cout<<a[i];
return 0;
}
