#include<bits/stdc++.h>
using namespace std;
//cumulative sum approach
int main(){
int n;
cin>>n;
int *a=new (nothrow) int[n];
for (int i=0;i<n;i++)
    cin>>a[i];
int sum=0;
int *curSum=new (nothrow) int[n];
int maxSum=INT_MIN;
for(int i=0;i<n;i++){
    sum=sum+a[i];
    sum=sum<0?0:sum;
    curSum[i]=sum;

    maxSum=max(maxSum,curSum[i]);
}


cout<<maxSum;
return 0;
}
