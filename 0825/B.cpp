#include<iostream>
#include<cstdio>
using namespace std;
#define N 2003
int a[2009];
int p[2009];
void insert_hash(int hashs[],int len,int key);
int search_hash(int hashs[],int len,int key);

int main(){
    int n,l,r;
    int data[N]={0};
    int key;  /*待查关键字*/
    int i;
    cin>>n;
    for(i=1;i<=n;i++){  /*存储数据*/
        scanf("%d",&key);
        a[i]=key;
        //insert_hash(data,N,key);  /*将值为key的关键字存入长度为N的数组data中*/
    }
    for(i=1;i<=n/2;i++){
        if(search_hash(data,N,a[i])==-1)insert_hash(data,N,a[i]);
        else p[i]=1;
        if(search_hash(data,N,a[n+1-i])==-1)insert_hash(data,N,a[n+1-i]);
        else p[n+1-i]=1;
    }
    for(int i=1;i<=n;i++)if(p[i]==1)l=i;
    for(int i=n;i>=0;i--)if(p[i]==1)r=i;
    cout<<(r-l+1)<<endl;
    //printf("Enter a key you want to search:");
    //scanf("%d",&key);  /*输入待查关键字*/
    //int index=search_hash(data,N,key);  /*在长度为n的数组data中查找关键字key*/
    /*if(index>=0)
        printf("The index of the key is %d.\n",index);
    else
        printf("Not found.\n");*/
    return 0;
}

/*将值为key的关键字存入长度为N的数组data中*/
void insert_hash(int hashs[],int len,int key)
{
    int i;
    i=key%len;  /*用留余数法计算出存储数据的位置*/
    while(hashs[i]!=0)  /*如果该位置已经存储了数据，即发生了冲突*/
    {
        i++;  /*用线性探测法找后面的位置*/
        i%=len;  /*如果越界了，将试探数组最开始的位置*/
    }
    hashs[i]=key;
}

/*在长度为N的数组data中查找关键字key，返回存储数据的位置，-1代表没有找到*/
int search_hash(int hashs[],int len,int key)
{
    int i;
    i=key%len;  /*用除留余数法计算出存储数据的位置*/
    while(hashs[i]!=0&&hashs[i]!=key)  /*确定的位置不为空，也不是要找的数，这是由当时存数数据时发生过冲突所致*/
    {
        i++;  /*也用线性探测法找后面的位置*/
        i%=len;  /*如果越界了，将试探数组最开始的位置*/
    }
    if(hashs[i]==0)  /*找到的是空元素，说明没有找到*/
        i=-1;  /*返回-1将代表没有找到*/
    return i;  /*返回结果*/
}
