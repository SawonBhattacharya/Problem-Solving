//xorsum of a seq with one unique number returns that unique number
//xorsum of a seq with two unique number returns that xor of two unique numbers
//again xor the xor sum with only those elements which have a common right most set bit as xor sum.
//final xor sum returns a unique num and again xor that num with xor sum get the another unique number.
#include<bits/stdc++.h>
using namespace std;
int get_bit(int n,int pos){
    return ((n&(1<<pos))!=0);
}
int uniqueNum1(int a[],int n){
int uniq=0;
for(int i=0;i<n;i++)
    uniq=uniq^a[i];
return uniq;
}
void uniqueNum2(int a[],int n){
int xorS=0;
for(int i=0;i<n;i++)
    xorS=xorS^a[i];
int temp=xorS;
int setBit=0,pos=0;
while(setBit!=1){
    setBit=xorS&1;
    pos++;
    xorS=xorS>>1;
}
cout<<temp<<endl;
int uni1=temp,uni2;//uni1=temp will give the unique numbers in order uni1=0 will give in rev order

for(int i=0;i<n;i++)
    if(get_bit(a[i],pos-1))
        uni1=uni1^a[i];
cout<<uni1<<" "<<(temp^uni1)<<endl;
}
int main(){
int n;
cin>>n;
int *a=new (nothrow) int[n];
for (int i=0;i<n;i++)
    cin>>a[i];
uniqueNum2(a,n);

return 0;
}
