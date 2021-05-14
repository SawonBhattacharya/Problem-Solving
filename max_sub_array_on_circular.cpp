//max_subarray_sum=total_sum-(-sum_of_noncont_num)
//reverse the sign and use kadane's algorithm

#include<bits/stdc++.h>
using namespace std;
//cumulative sum approach
int kadane(int a[],int n){
int sum=0;
int *curSum=new (nothrow) int[n];
int maxSum=INT_MIN;
for(int i=0;i<n;i++){
    sum=sum+a[i];
    sum=sum<0?0:sum;
    curSum[i]=sum;

    maxSum=max(maxSum,curSum[i]);
}
return maxSum;
}
int main(){
int n;
cin>>n;
int *a=new (nothrow) int[n];
for (int i=0;i<n;i++)
    cin>>a[i];

int nonwrap=kadane(a,n);
int wrap=0,sum=0;
for (int i=0;i<n;i++){
    sum=sum+a[i];
    a[i]=-a[i];
}
wrap=sum+kadane(a,n);

cout<<max(wrap,nonwrap);
return 0;
}
