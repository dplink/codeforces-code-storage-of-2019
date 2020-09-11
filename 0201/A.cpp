#include"stdio.h"
#include"iostream"
#include"stdlib.h"
#include"algorithm"
#include"math.h"
#include"string.h"
#include"queue"
using namespace std;
char mp[1001][1001];
int main(){
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);
    int r,c,n,i,j;
    cin>>r>>c;
    for(i=1;i<=r;i++)
        for(j=1;j<=c;j++){cin>>mp[i][j];}
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            if(mp[i][j]=='W'){
                if(mp[i+1][j]=='S' || mp[i][j+1]=='S' || mp[i][j-1]=='S' || mp[i-1][j]=='S'){cout<<"No";return 0;}
                else {
                    if(mp[i+1][j]!='W')mp[i+1][j]='D';
                    if(mp[i][j+1]!='W')mp[i][j+1]='D';
                    if(mp[i-1][j]!='W')mp[i-1][j]='D';
                    if(mp[i][j-1]!='W')mp[i][j-1]='D';
                }
            }
        }
    }
    cout<<"Yes"<<endl;
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++)cout<<mp[i][j]<<" ";
        cout<<endl;
    }
return 0;
}
