# include <bits/stdc++.h>
using namespace std;
char maxOccourences(string s)
{
    int n = s.length();
    int maxCount = 0;
    char ans;
    int count[256]= {0};
    for (int i = 0; i < n; i++){
        count[s[i]]++;
        if(count[s[i]] > maxCount) {
            maxCount = count[s[i]];
            ans = s[i];
        }
    }
    cout << ans <<' '<<maxCount << endl;
}


int main(){
    string s ;
    getline(cin,s);
    maxOccourences(s);

    return 0;
}