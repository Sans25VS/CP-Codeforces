#include<bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        if(s.length() == 1){ 
            cout << "1" << endl;
            continue; 
        }
        
        if(s.length() == 2){ 
            if(s[0] == s[1])
                cout << "1" << endl;
            else
                cout << "2" << endl;
            continue; 
        }

        int count = 0; 
        for(int i = 0; i < s.length() - 1;){
            if(s[i] != s[i+1]){
                count++;
                if(i+2 < s.length() && s[i+1] == s[i+2]){
                    i++;
                }
            }
            i++;
        }
        cout << count << endl;
    }
    return 0;
}
