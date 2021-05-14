#include<bits/stdc++.h>
//sieve of eratosthenes
using namespace std;
void sieveOferathosthenes(int a[],int s,int e){
    int *f=new (nothrow) int[e-s+1];
    for(int i=s;i<=e;i++){
        f[i]=0;
    }

    for(int i=s;i<=e;i++){
        if(f[i]==0)
            for(int j=i*i;j<=e;j+=i){
                f[j]=1;
        }
    }
    for(int i=s;i<=e;i++){
        if(f[i]==0){
            cout<<a[i]<<endl;
        }
    }
}
int main(){
int s,e;
cin>>s>>e;
int *a=new (nothrow) int[e-s+1];
for(int i=s;i<=e;i++)
    a[i]=i;
sieveOferathosthenes(a,s,e);
return 0;
}
