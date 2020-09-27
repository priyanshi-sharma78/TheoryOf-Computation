#include<bits/stdc++.h>
using namespace std;
bool isvalid(string s)
{ stack<char> temp;
for(int i=0;i<s.size();i++)
{ if(s[i]=='(')
temp.push('(');
else if(s[i]==')')
{ if(temp.empty())
return false;
temp.pop();
}
}
if(temp.empty())
return true;
return false;
}
int main()
{ string name;
cin>>name;
if(isValid(name))
cout<<"string is accepted";
else
cout<<"string is not accepted";
}
