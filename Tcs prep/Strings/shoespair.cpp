# include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n ;
    vector<int> left;
    vector<int> right;
    for(int i = 0; i < n;i++){
    string s;
    cin>>s;
    int index = stoi(s.substr(0,s.length()-1));
    if(s.back() == 'L'){
        left[index]++;
    }
    else{
        right[index]++;
    }
    }
    int pairs = 0;
    for(int i = 0; i < 20;i++){
        pairs += min(left[i], right[i]);
    }
    cout << pairs << endl;
    return 0;
}