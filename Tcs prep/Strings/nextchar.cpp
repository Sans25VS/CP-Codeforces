# include<bits/stdc++.h>
using namespace std;
string helper(string s){
    for(int i=0;i<s.length();i++){
        int ascii = (int)(s[i]);
        if(ascii == 90){
            s[i] = char(65);
        }
        if(ascii == 122){
            s[i] = char(97);
        }
        if((ascii >=65 && ascii < 90) || (ascii >=97 && ascii < 122)){
            s[i] = char(ascii + 1 );
        }
    }
    return s;

}
int main(){
string s;
getline(cin,s);
cout << helper(s);

    return 0;
}