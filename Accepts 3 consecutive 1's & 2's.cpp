#include<bits/stdc++.h>
using namespace std;
bool is valid (string S)
{ for(int i=2;i<s.size();i++)
{ if (s[i]==s[i-1] && S[i-1]==S[i-2])
return true;
return false;
}
int main() {
string name;
cin>>name;
if(isvalid(name))
cout<<"string accepted";
else
cout"string is not accepted";
}
