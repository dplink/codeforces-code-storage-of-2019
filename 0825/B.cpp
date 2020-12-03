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
    int key;  /*����ؼ���*/
    int i;
    cin>>n;
    for(i=1;i<=n;i++){  /*�洢����*/
        scanf("%d",&key);
        a[i]=key;
        //insert_hash(data,N,key);  /*��ֵΪkey�Ĺؼ��ִ��볤��ΪN������data��*/
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
    //scanf("%d",&key);  /*�������ؼ���*/
    //int index=search_hash(data,N,key);  /*�ڳ���Ϊn������data�в��ҹؼ���key*/
    /*if(index>=0)
        printf("The index of the key is %d.\n",index);
    else
        printf("Not found.\n");*/
    return 0;
}

/*��ֵΪkey�Ĺؼ��ִ��볤��ΪN������data��*/
void insert_hash(int hashs[],int len,int key)
{
    int i;
    i=key%len;  /*����������������洢���ݵ�λ��*/
    while(hashs[i]!=0)  /*�����λ���Ѿ��洢�����ݣ��������˳�ͻ*/
    {
        i++;  /*������̽�ⷨ�Һ����λ��*/
        i%=len;  /*���Խ���ˣ�����̽�����ʼ��λ��*/
    }
    hashs[i]=key;
}

/*�ڳ���ΪN������data�в��ҹؼ���key�����ش洢���ݵ�λ�ã�-1����û���ҵ�*/
int search_hash(int hashs[],int len,int key)
{
    int i;
    i=key%len;  /*�ó���������������洢���ݵ�λ��*/
    while(hashs[i]!=0&&hashs[i]!=key)  /*ȷ����λ�ò�Ϊ�գ�Ҳ����Ҫ�ҵ����������ɵ�ʱ��������ʱ��������ͻ����*/
    {
        i++;  /*Ҳ������̽�ⷨ�Һ����λ��*/
        i%=len;  /*���Խ���ˣ�����̽�����ʼ��λ��*/
    }
    if(hashs[i]==0)  /*�ҵ����ǿ�Ԫ�أ�˵��û���ҵ�*/
        i=-1;  /*����-1������û���ҵ�*/
    return i;  /*���ؽ��*/
}
