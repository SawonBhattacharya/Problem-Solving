#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
cin.ignore();
char s[n+1];
cin.getline(s,n);
cin.ignore();
int wl=0,maxL=INT_MIN,st=0,maxSt=0,i=0;
while(1){
    if(s[i]==' ' || s[i]=='\0'){
        if(wl>maxL){
            maxL=wl;
            maxSt=st;
        }
        st=i+1;
        wl=0;
    }
    else
        wl++;
    if(s[i]=='\0')
        break;
    i++;
}
cout<<"The maxlength of the word is: "<<maxL<<endl;
for(int i=0;i<maxL;i++){
    cout<<s[i+maxSt];
}
return 0;
}
