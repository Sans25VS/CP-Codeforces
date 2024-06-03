// reversing a string using stacks
#include <bits/stdc++.h>
#include <stack>
using namespace std;
int main(){
string str= "COSOMO";
stack <char> s;
for(int i=0; i<str.length(); i++){
    char ch = str[i];
    s.push(ch);
}
// initialise a empty string
string ans = "";    
while(!s.empty()){
char ch = s.top();
ans.push_back(ch);
s.pop();
}


cout<< "answer of reverse string is  " << ans << endl;
return 0;
}