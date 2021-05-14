#include<bits/stdc++.h>
using namespace std;

int bintoDec(int num){
int sum=0,pow=1;
while(num>0){
    int r=num%10;
    sum=sum+r*pow;
    pow=2*pow;
    num=num/10;
}
return sum;
}
int dectoBin(int num){
int pow=1;
int dec=0;
while(pow<=num)
    pow*=2;
pow=pow/2;
while(num>0){
    int lastdig=num/pow;
    num=num-lastdig*pow;
    pow=pow/2;
    dec=dec*10+lastdig;
}
return dec;
}
int main(){
int dec;
cin>>dec;
cout<<bintoDec(dec)<<endl;
cout<<dectoBin(bintoDec(dec))<<endl;
return 0;
}
