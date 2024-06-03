# include<bits/stdc++.h>
using namespace std;
int main(){
    string s ;
    getline(cin, s);
    int index = 0;
    while(s[index] != ','){
        index++;
    }
    string chars = s.substr(0,index);
    string numbers = s.substr(index+1,s.size()- index +1);
    double val = stod(numbers);

    cout << chars << " " << val << endl;


    return 0;
}