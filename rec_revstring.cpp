#include<bits/stdc++.h>
using namespace std;
void rev(string st,int i){
    if(st.size()==i)
        return;
    rev(st,i+1);
    cout<<st[i];
    }
void searchRep(string st){
    if(st.size()==0)
        return;
    if(st[0]=='p'&&st[1]=='i'){
        cout<<"3.14";
        searchRep(st.substr(2));
    }
    else{
        cout<<st[0];
        searchRep(st.substr(1));
    }
}
void toh(int n,char prim,char sec,char help){
    if(n==0)
        return;
    toh(n-1,prim,help,sec);
    cout<<"Disk moves from "<<prim<<" to"<<sec<<endl;
    toh(n-1,help,sec,prim);
}
int main(){
    int n;
    cin>>n;
    //cin.ignore();
    //string name;
    //getline(cin,name);
    //rev(name,0);
    //cout<<endl;
    //searchRep(name);
    //tower of hannoi
    toh(n,'a','c','b');
return 0;
}
