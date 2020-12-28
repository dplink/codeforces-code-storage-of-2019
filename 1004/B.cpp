#include <bits/stdc++.h>
using namespace std;
int a[100009],stk[100009];
int main(){
    //freopen("test.in","r",stdin);
    //freopen("test.out","w",stdout);
    int tmp,n,k;
    cin>>n>>k;
    queue<int>q;
    q=queue<int>();
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int len=1,pos=1,f=0;stk[0]=a[0];
    while(len<k && pos<k){
        //cout<<len<<" "<<pos<<endl;
        f=1;
        for(int i=0;i<len;i++)if(a[pos]==a[i])f=0;
        if(f==0){pos++;continue;}
        stk[len]=a[pos];
        pos++;len++;
    }
    cout<<len<<endl;
    for(int i=len-1;i>=0;i--)printf("%d ",stk[i]);
    return 0;
}
