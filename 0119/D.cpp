#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5+5;
int cmp(int a, int b){
    return a > b;
}
int setta[maxn], ans[maxn];
int main(){
    int n, k=0;
    cin>>n;
    for(int i=0; i<n; i++) cin>>setta[i];
    for(int i=1; i<n; i++){
        if(setta[i] >= setta[i-1]) ans[k]++;
        else k++;
    }
    sort(ans, ans+k+1, cmp);
    cout<<ans[0]+1<<endl;
    return 0;
}
