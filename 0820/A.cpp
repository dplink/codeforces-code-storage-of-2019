#include <bits/stdc++.h>
using namespace std;
char a[100001];
int main(){
    //freopen("test.in","r",stdin);
    //freopen("test.out","w",stdout);
    int len,flag=0;
    cin>>a;
    len=strlen(a);
    for(int i=1;i<len;i++)if(a[i]!='0')flag=1;
    if(flag==0 && (len-1)%2==0){cout<<((len-1)/2)<<endl;return 0;}
    //cout<<flag;
    cout<<((len-1)/2)+1<<endl;
    return 0;
}
