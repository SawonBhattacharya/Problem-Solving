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
for(int i=0;i<n;i++){
    sum=sum+a[i];
    curSum[i]=sum;
    cout<<curSum[i]<<endl;
}
int maxSum=INT_MIN;
for(int i=0;i<n;i++){
    for(int j=0;j<i;j++){
        int sum=curSum[i]-curSum[j];
        maxSum=max(maxSum,sum);
    }
}
cout<<maxSum;
return 0;
}
