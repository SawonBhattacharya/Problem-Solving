#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
int *ad=&n;
int **adad=&ad;
cout<<ad<<endl;
cout<<*ad<<endl;
cout<<adad<<endl;
cout<<*adad<<endl;
cout<<**adad<<endl;
return 0;
}
