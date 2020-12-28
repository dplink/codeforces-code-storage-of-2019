#include <bits/stdc++.h>
using namespace std;

int main(){
    //freopen("test.in","r",stdin);
    //freopen("test.out","w",stdout);
    int q,n,sum,tmp;cin>>q;
    while(q--){
        scanf("%d",&n);
        sum=0;
        for(int i=0;i<n;i++){
            scanf("%d",&tmp);
            sum+=tmp;
        }
        tmp=sum/n;
        if(tmp*n<sum)tmp++;
        cout<<tmp<<endl;
    }
    return 0;
}
