#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int *a=new (nothrow) int[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int prev_diff=a[1]-a[0];
    int curr_len=2;
    int final_len=0;
    int j=2;
    while(j<n){
        if(prev_diff==a[j]-a[j-1])
            curr_len++;
        else{
            prev_diff=a[j]-a[j-1];
            curr_len=2;
        }
        final_len=max(curr_len,final_len);
        j++;
    }
    cout<<"Maximum length of arithmetic sub-array is : "<<final_len<<endl;
    return 0;
}
