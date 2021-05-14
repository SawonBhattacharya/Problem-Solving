#include<bits/stdc++.h>
using namespace std;

int main(){
string s;
cin>>s;
int *f=new (nothrow) int[26];
for (int i=0;i<26;i++)
    f[i]=0;
for(int i=0;i<s.size();i++)
    f[s[i]-'a']++;
int maxF=0;
char ans;
for (int i=0;i<26;i++)
    if(f[i]>maxF){ //if f[i]>=maxF then the last char with most freq will be printed otherwise the first one will get printed
        maxF=f[i];
        ans='a'+i;
    }
cout<<"Max frequency is: "<<maxF<<"in "<<s<<" & the letter is "<<ans;

return 0;
}
