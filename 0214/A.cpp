#include <bits/stdc++.h>
using namespace std;
int a[10010],p[10010];
int main(){
    //freopen("test.in","r",stdin);
    //freopen("test.out","w",stdout);
    int t,i,n;
    cin>>n;
    for(i=0;i<n-1;i++){
        cin>>p[i];
        p[t]=1;
        a[t]++;
    }
    for(i=0;i<n-1;i++){
        //if(p[i]==1)a[i]--;
        cout<<a[i]<<" ";
    }
    for(i=0;i<n;i++)if(a[i]>=1 && a[i]<3){cout<<"NO";return 0;}
    cout<<"YES";
return 0;
}
