
#include<bits/stdc++.h>
using namespace std;
int get_bit(int n,int pos){
    return ((n&(1<<pos))!=0);
}
int set_bit(int n,int pos,int val){
    return (n|(val<<pos));
}
int clear_bit(int n, int pos){
    return (n &(~(1<<pos)));
}
int update_bit(int n,int pos,int val){
    //6-0110 pos-2 val-0 0110 or 2-0010 not-mask 0010 mask -1101
    int cleared=clear_bit(n,pos);
    return set_bit(cleared,pos,val);
}
int powerOf2(int n){
        return (n && !(n&n-1));
}
int count_1(int n){
int c=0;
while(n!=0){
    n=n&(n-1);
    c++;
}
return c;
}
void printSubset(int a[],int n){
    for(int i=0;i<(1<<n);i++){
        for(int j=0;j<n;j++){
            int p=1<<j;
            //cout<<i<<" "<<j<<" "<<p<<" "<<(i&p)<<endl;
            if(i&p)
                //cout<<i<<" "<<j<<" "<<p<<" "<<(i&p)<<" "<<a[j]<<" ";
                cout<<a[j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n,pos1,pos2,pos3,pos4,val,sz;

    //cin>>n>>pos1;
    cin>>sz;
    //cin>>pos2>>pos3>>pos4>>val;
    //cout<<get_bit(n,pos1)<<endl;
    //cout<<set_bit(n,pos2,val)<<endl;
    //cout<<clear_bit(n,pos3)<<endl;
    //cout<<update_bit(n,pos4,val)<<endl;
    //cout<<n;
    //cout<<powerOf2(n)<<endl;
    //cout<<"the no of 1 in "<<n<<" is: "<<count_1(n);
    int *a=new (nothrow) int[sz];
    for (int i=0;i<sz;i++)
        cin>>a[i];
    printSubset(a,sz);
    return 0;
}
