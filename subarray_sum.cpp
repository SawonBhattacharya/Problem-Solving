#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s;
    cin>>n>>s;
    int *a=new (nothrow) int[n+1];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int j=0,i=0,sum=0;
    while(j<n && sum<=s){
        sum+=a[j];
        cout<<sum<<" "<<j<<endl;
        j++;
    }
    if(sum==s){
        cout<<0<<" "<<j-1<<endl;
        return 0;
    }
    j=j-1;
    while(j<n){
        //sum+=a[j];
        cout<<"2nd while "<<sum<<" "<<j<<endl;
        while(sum>s){
            sum-=a[i];
            cout<<sum<<" "<<i<<endl;
            i++;
        }
        if(sum==s){
            cout<<i<<" "<<j<<endl;
            break;
        }
        j++;
    }
    if(sum==s)
        cout<<"NO SUBARRAY IS PRESENT"<<endl;
    return 0;
}
//5 12
//1 2 5 3 4
