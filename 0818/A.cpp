#include <bits/stdc++.h>
using namespace std;
int a[10001],b[10001],aa[10001],bb[10001];
int main(){
   // freopen("test.in","r",stdin);
   // freopen("test.out","w",stdout);
    int n,m;
    cin>>n;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        aa[a[i]]=1;
    }
    cin>>m;
    for(int i=0;i<m;i++){
        scanf("%d",&b[i]);
        bb[b[i]]=1;
    }
    //for(int i=0;i<10;i++)cout<<aa[i]<<" ";cout<<endl;
    //for(int i=0;i<10;i++)cout<<bb[i]<<" ";cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(aa[a[i]+b[j]]==0 && bb[a[i]+b[j]]==0){
                cout<<a[i]<<" "<<b[j]<<endl;
                return 0;
            }
        }
    }
    return 0;
}
