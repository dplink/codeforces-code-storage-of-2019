#include <bits/stdc++.h>
using namespace std;
int a[300009];
int main(){
    //freopen("test.in","r",stdin);
    //freopen("test.out","w",stdout);
    long long n,pos=1,sum1=0,sum2=0,sum3=0,sum=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        a[pos]=i*2;a[pos]--;
        if(pos<=n){a[pos+n]=i*2;pos+=n;pos++;}
        else {a[pos-n]=i*2;pos-=n;pos++;}
    }
    if(n%2==0){cout<<"NO"<<endl;return 0;}
    cout<<"YES"<<endl;
    for(int i=1;i<=2*n;i++){
        printf("%d ",a[i]);
    }
    cout<<endl;
    return 0;
}
