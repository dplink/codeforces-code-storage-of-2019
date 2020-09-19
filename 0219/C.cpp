#include<bits/stdc++.h>
using namespace std;
char st[200010];
int main() {
int N,n1 = 0,n2 = 0,n = 1;
scanf("%d %s",&N,st);
for(int i = 0 ; i < N; i++){
if(st[i] == 'L'){
if(n1 == 1) n++,n2 = 0;
n1 = 2;
}
if(st[i] == 'R'){ if(n1 == 2) n++,n2 = 0; n1 = 1; }
if(st[i] == 'U'){ if(n2 == 1) n++,n1 = 0; n2 = 2; }
if(st[i] == 'D'){ if(n2 == 2) n++,n1 = 0; n2 = 1; }
}
printf("%d\n",n);
return 0;
}
