#include <bits/stdc++.h>
using namespace std;
int a[100001];
int exe(int n){
long long sum=1;
while(n--){sum*=2;}
return sum;
}
int main(){
    //freopen("test.in","r",stdin);
    //freopen("test.out","w",stdout);
    int n,l,r;
    long long mn=0,mx=0;
    cin>>n>>l>>r;
    mn+=(exe(l)-1);
    mn+=(n-l);

    mx+=(exe(r)-1);
    mx+=(exe(r-1)*(n-r));

    cout<<mn<<" "<<mx<<endl;
    return 0;
}
