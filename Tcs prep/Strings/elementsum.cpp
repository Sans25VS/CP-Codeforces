//123abc iska sum 123 return hoga
// 2a1b2c iska sum 2+1+2 kyuki yai kgaatar nhi hai return hoga


# include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int sum = 0;
    string res = "";
    for(char c : s){
    if(isdigit(c)){
        res += c;
        }
        else if (!res.empty()){
            sum += stoi(res);
            res = "";
        }

    }
        if(!res.empty()){
            sum += stoi(res);
        }


    cout<<sum << endl;


    return 0;
}