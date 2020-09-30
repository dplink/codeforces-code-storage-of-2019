#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    int n;
    while(cin>>n) {
        ll a[100007];
        vector<int>sh,ch;
        for (int i = 0; i < n; i++)cin >> a[i];
        sort(a, a + n);
        sh.push_back(a[n-1]);
        for(int i=n-2;i>=0;i--){
            if(i%2==1)ch.push_back(a[i]);
            else sh.push_back(a[i]);
        }
        int b[100007];
        int book=0;
        for(int i=0;i<sh.size();i++)b[book++]=sh[i];
        for(int i=ch.size()-1;i>=0;i--)b[book++]=ch[i];
        bool flag=true;
        for(int i=1;i<n-1;i++){
            if(b[i]>=b[i-1]+b[i+1]){flag= false;break;}
            }
            if(!flag)cout<<"NO"<<endl;
            else{
                if(b[0]<b[1]+b[n-1]){
                    cout<<"YES"<<endl;
                    for(int i=0;i<n;i++)cout<<b[i]<<" ";
                    cout<<endl;
                }
                else cout<<"NO"<<endl;
            }
        }
        return 0;
    }
