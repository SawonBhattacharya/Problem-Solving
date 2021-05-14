#include<bits/stdc++.h>
using namespace std;

int hextoDec(string num){
int sum=0,pow=1;


for(int i=num.size()-1;i>=0;i--){

    if(num[i]>='0' && num[i]<='9')
        sum=sum+(num[i]-'0')*pow;
    else if(num[i]>='A' && num[i]<='F')
        sum=sum+(num[i]-'A'+10)*pow;

    pow=pow*16;
}

return sum;
}
string dectoHex(int num){
int pow=1;
string dec="";
while(pow<=num)
    pow*=16;
pow=pow/16;
while(num>0){
    int lastdig=num/pow;
    num=num-lastdig*pow;
    if(lastdig<=9)
        dec=dec+to_string(lastdig);
    else{
        char d='A'+lastdig-10;
        dec.push_back(d);
    }
    pow=pow/16;
}
return dec;
}
int main(){
string dec;
cin>>dec;
cout<<hextoDec(dec)<<endl;
cout<<dectoHex(hextoDec(dec))<<endl;
return 0;
}
