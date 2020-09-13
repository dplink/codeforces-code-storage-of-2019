#include"stdio.h"
#include"iostream"
#include"stdlib.h"
#include"algorithm"
#include"math.h"
#include"string.h"
#include"queue"
using namespace std;
int a[10011],b[10011],ans[10011],t[10011];
int main(){
    //freopen("test.in","r",stdin);
    //freopen("test.out","w",stdout);
    int j,n,m,k,i,q,s=0,as=0;
    cin>>n>>m>>k;
    for(i=0;i<n;i++){cin>>a[i];b[i]=a[i];}
    sort(a,a+n);
    q=a[n-k];
    for(i=0;i<n;i++){
        if(b[i]>=q){ans[s]=i;s++;}
        if(s>=k)break;
    }
    ans[k]=n;
    for(i=0;i<k;i++){
            //memset(t,0,sizeof(t[1]));
        for(j=ans[i];j<ans[i+1];j++)t[j-ans[i]]=b[j];
        sort(t,t+(ans[i+1]-ans[i]));
        //for(j=0;j<(ans[i+1]-ans[i]);j++)cout<<t[j]<<" ";
        for(j=(ans[i+1]-ans[i])-1;j>=(ans[i+1]-ans[i])-m;j--){as+=t[j];}
        //cout<<endl;
    }
    cout<<as<<endl;
    for(i=0;i<k-1;i++)cout<<ans[i]+1<<" ";
    //while(1);
return 0;
}
//ans[i]<<" "<<ans[i+1]
