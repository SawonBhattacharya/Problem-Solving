//using recursion check the array is sorted or not
#include <bits/stdc++.h>
using namespace std;
bool check_sort(int a[],int n){
if(n==1)
    return 1;
else
    if(a[0]<=a[1] && check_sort(a+1,n-1))
        return 1;
    else
        return 0;
}
void order_print_desc(int n){
if(n==0)
    return;
cout<<n<<endl;
order_print_desc(n-1);
}
void order_print_asc(int i,int n){
if(i>n)
    return;
cout<<i<<endl;
order_print_asc(i+1,n);
}
int main(){
int n;
cin>>n;
int *a=new (nothrow) int[n];
for (int i=0;i<n;i++)
    cin>>a[i];
if(check_sort(a,n))
    cout<<"Sorted";
else
    cout<<"not sorted";
order_print_asc(0,10);
order_print_desc(10);
return 0;

}
