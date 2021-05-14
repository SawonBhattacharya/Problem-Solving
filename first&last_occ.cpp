//using recursion check the array is sorted or not
#include <bits/stdc++.h>
using namespace std;
int first_occ(int a[],int n,int i,int k){
if(i==n)
    return -1;
if(a[i]==k)
    return i;
return first_occ(a,n,i+1,k);
}
int last_occ(int a[],int n,int i,int k){
if(i<0)
    return -1;
if(a[i]==k)
    return i;
return last_occ(a,n,i-1,k);
}
int main(){
int n,k;
cin>>n>>k;
int *a=new (nothrow) int[n];
for (int i=0;i<n;i++)
    cin>>a[i];

if(first_occ(a,n,0,k)>=0)
    cout<<first_occ(a,n,0,k)<<endl;
if(last_occ(a,n,n-1,k)>=0)
   cout<<last_occ(a,n,n-1,k)<<endl;
return 0;

}
