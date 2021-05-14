//sort the array
//use start end pointer
//o(n)/o(nlogn)

#include<bits/stdc++.h>
using namespace std;
void pair_sum(int a[],int n,int k){
int st=0;
int en=n-1,f=0;
while(st<en){
    if(a[st]+a[en]<k)
        st++;
    else if(a[st]+a[en]==k){
        cout<<"found at "<<st<<", "<<en<<endl;
        st++;
        en--;
        f=1;
    }
    else
        en--;
}
if(f==0)
    cout<<"no pair is found in the array "<<endl;
}
int main(){
int n,k;
cin>>n>>k;
int *a=new (nothrow) int[n];
for (int i=0;i<n;i++)
    cin>>a[i];
sort(a,a+n);
cout<<"Sorted array"<<endl;
for (int i=0;i<n;i++)
    cout<<a[i]<<endl;;
pair_sum(a,n,k);
return 0;
}
