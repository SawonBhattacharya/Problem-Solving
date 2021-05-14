#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int *a=new (nothrow) int[n+1];
    for(int i=0;i<n;i++)
        cin>>a[i];
    a[n]=-1;
    if(n==1){
        cout<<"Max visitors: 1"<<endl;
        return 0;
    }
    int i=0;
    int max_vis=0;
    int prev=-1;
    while(i<n){
        if(a[i]>prev && a[i]>a[i+1]){
            max_vis++;
        }
        prev=max(prev,a[i]);
        i++;
    }
    cout<<"Max visitors: "<<max_vis<<endl;
    return 0;
}
