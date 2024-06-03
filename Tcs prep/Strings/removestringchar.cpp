#include <bits/stdc++.h>
using namespace std;
string removeChars(string string1, string string2) {
       //we extract every character of string string 2
         for(auto i:string2)
        {
           //we find char exit or not
           while(find(string1.begin(),string1.end(),i)!=string1.end())
            {
                auto itr = find(string1.begin(),string1.end(),i);
               //if char exit we simply remove that char
                string1.erase(itr);
            }
        }
        return string1;
    }
// Driv
int main(){
    string string1,string2;
    getline(cin,string1);
    getline(cin,string2);
    cout << removeChars(string1,string2);

    return 0;
}