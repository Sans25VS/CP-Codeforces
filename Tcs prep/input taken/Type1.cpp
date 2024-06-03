# include<bits/stdc++.h>
using namespace std;

void input_array(){
    vector<int> ans;
    string s;
    getline(cin,s);
    string st;
    for(int i=1;i<s.size()-1;i++){
        if(s[i]!=',')
        {
            st+=s[i];
        continue;}
        else{
        ans.push_back(stoi(st));
            
        }
        //ans.push_back(stoi(st));
        st = "";
    }
    /*stringstream ss (s);
    char c;
    while(ss >> c) {
        if(isdigit(c)) {
            int num;
            ss >> num;
            ans.push_back(num);
        }
    }*/ans.push_back(stoi(s[s.size()-1]));
        cout<<"[";
        for(int i = 0; i < ans.size()-1; i++){
            cout << ans[i] << ',';
        }


        cout << ans[ans.size()-1]<<"]";
}
    int product(vector<int> arr){
    int n = arr.size();
    int pro = INT_MIN;
    int prefix = 1;
    int suffix = 1;
    for(int i=0; i<n;i++) {
        if (prefix == 0) prefix = 1;
        if (suffix == 0) suffix = 1;
        prefix = prefix*arr[i];
        suffix = suffix*arr[n-i-1];
        pro = max(pro,max(prefix,suffix));
    }
    return pro;
    }

    int main(){
        input_array();
        
    
    return 0;
    }