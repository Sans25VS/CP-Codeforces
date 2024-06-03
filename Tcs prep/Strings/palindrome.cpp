# include<bits/stdc++.h>
using namespace std;
bool Palindrome(string &s,int i)
{
    if(i >= s.length()/2) return true;

    if(s[i] != s[s.length() - i - 1] ) return false;

return Palindrome(s,i+1);
}


int main(){
    string s;
    getline(cin,s);
    cout << Palindrome(s,0);
    return 0;
}