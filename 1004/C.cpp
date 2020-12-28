#include <bits/stdc++.h>
using namespace std;
int a[200009];
bool exe(int x,int k){
    int l=0,r=k;
    while(r>=l){
         mid=(r+l)>>1;
         if(a[mid]==target)return true;
         if(a[mid]<=target && a[mid+1]>=target)return false;
         if(a[mid-1]<=target && a[mid]>=target)return false;
         else if(a[mid]<target)
         l=mid+1;
         else
         r=mid-1;
     }
}

int main(){
    int len=0,f,tmp,n,k;cin>>n>>k;
    priority_queue<int>q;
    for(int i=0;i<n;i++){
        scanf("%d",&tmp);
        f=0;
        for(int j=0;j<len;j++){if(a[j]==tmp){f=1;break;}}
        if(f==0){a[len]=tmp;len++;q.push(tmp);}
        if(len>k)break;
    }

    for(i=k;i<n;i++){
        scanf("%d",&tmp);
        for()
    }
    return 0;
}
/*int n,k,tmp,m=0;cin>>n>>k;
    map<int, int> q;
    map<int, int>::iterator iter;
    for(int i=0;i<n;i++){
        scanf("%d",&tmp);
        //if(q.size()>=k){iter = q.find(1);q.erase(iter);cout<<"*";}
        cout<<tmp<<endl;
        for (iter = q.begin(); iter != q.end(); iter++)cout << iter->first << ' ' << iter->second << endl;

        q.insert(pair<int, int>(i, tmp));
    }
    cout<<q.size()<<endl;*/
