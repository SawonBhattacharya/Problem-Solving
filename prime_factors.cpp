#include<bits/stdc++.h>
using namespace std;
//sieve of eratosthenes
void prime_factors_SoE(int n){
    int *pf=new (nothrow) int[n+1];
    for(int i=2;i<=n;i++)
        pf[i]=i;
    for(int i=2;i<=n;i++){
        if(pf[i]==i){
            for(int j=i*i;j<=n;j+=i){
                if(pf[j]==j){
                    pf[j]=i;
                }
            }
        }
    }
    int temp=0;
    while(n!=1){
        if(pf[n]==temp){
            temp=pf[n];
            n=n/pf[n];
            continue;
        }
        else{
            cout<<pf[n]<<" "<<endl;
            temp=pf[n];
            n=n/pf[n];

        }

    }
}
using namespace std;
int main(){
int n;
cin>>n;
prime_factors_SoE(n);
return 0;
}
