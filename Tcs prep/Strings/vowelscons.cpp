# include<bits/stdc++.h>
using namespace std;
int count (string &str){
    int n = str.length();
    int v = 0;
    int c = 0;
    int s = 0;
    for(int i = 0; i < n; i++){
         str[i] = towlower(str[i]);
         
    }
    for(int i = 0; i < n; i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            v++;
        }
        else if (str[i] == ' '){
            s++;
        }
        else {
            c++;
        }
    }
    cout << v << endl << c << endl << s << endl;
    }
int main(){
    string str ;
    getline(cin ,str);
    count(str);
    return 0;
}