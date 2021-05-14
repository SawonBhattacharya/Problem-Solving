#include<iostream>
#include<math.h>
using namespace std;

int fact(int k){
if(k==0 || k==1)
    return 1;
else
    return k*fact(k-1);
}
int main(){
int n;
cin>>n;

for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++)
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        cout<<endl;
}
return 0;
}

