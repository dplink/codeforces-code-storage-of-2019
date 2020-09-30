#include <bits/stdc++.h>
using namespace std;
char a[100],b[101],c[101],num[100];
int as(int ans){
if(ans>=0)return ans;
return -ans;
}
int main(){
    //freopen("test.in","r",stdin);
    //freopen("test.out","w",stdout);
    int i,n,x,y,z,t=0,m=0;
    cin>>a>>b>>c;
    num[0]=a[0];
    num[1]=b[0];
    num[2]=c[0];
    if(a[1]==b[1])t++;
    if(a[1]==c[1])t++;
    if(c[1]==b[1])t++;
    sort(num,num+3);

    if(num[0]+1==num[1])m++;
    if(num[1]+1==num[2])m++;
    //cout<<num[0]<<num[1]<<num[2]<<endl;

    if(t==3 && num[0]==num[1] && num[0]==num[2] && num[1]==num[2]){cout<<"0"<<endl;return 0;}
    if(t==3 && m==2){cout<<"0"<<endl;return 0;}
    if(t==3 && m==1){cout<<"1"<<endl;return 0;}
    if(t==3 && (num[0]==num[1] || num[0]==num[2] || num[2]==num[1])){cout<<"1"<<endl;return 0;}

        if(a[1]==b[1]){
            if(as(a[0]-b[0])<=2){cout<<"1"<<endl;return 0;}
        }
        if(c[1]==b[1]){
            if(as(c[0]-b[0])<=2){cout<<"1"<<endl;return 0;}
        }
        if(c[1]==a[1]){
            if(as(c[0]-a[0])<=2){cout<<"1"<<endl;return 0;}
        }

    cout<<"2"<<endl;
return 0;
}
