#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int *a=new (nothrow) int[n];
    const int N=1000000;
    int min_ind=-1;
    int *check_id=new (nothrow) int[N];

    for(int i=0;i<N;i++)
       check_id[i] =0;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        if(a[i]>=0)
            check_id[a[i]]=1;

    for(int i=0;i<n;i++){
        if(check_id[i]==0){
            min_ind=i;
            break;
        }
    }
    cout<<min_ind<<endl;
    return 0;
}
