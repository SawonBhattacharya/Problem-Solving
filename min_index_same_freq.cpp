#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int *a=new (nothrow) int[n];
    const int N=1000000;
    int min_id=INT_MAX;
    int *id=new (nothrow) int[N];

    for(int i=0;i<N;i++)
       id[i] =-1;
    for(int i=0;i<n;i++)
        cin>>a[i];

    for(int i=0;i<n;i++){
        if(id[a[i]]!=-1){
            min_id=min(min_id,id[a[i]]);
        }
        else{
            id[a[i]]=i;
        }
    }
    if(min_id==INT_MAX)
        cout<<"-1 means no repeatation"<< endl;
    else
        cout<<"Lowest id with same freq "<<min_id<<endl;
    return 0;
}
