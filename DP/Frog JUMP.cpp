//Q -> is question mai what we need to find is the minimum path for a frog to find the minimum cost for travelling from one distance to thee other

// soln ->

int f (vector <int>heights, vector<int>& dp,int ind)

if(ind == 0) return 0;
if(dp[ind] != -1) return dp[ind];

int left =  f (ind-1,heights ,dp) + abs[heights[ind] - heights[ind - 1]];
int right = INT_MAX;
if(n>1) right = f (ind-2,heights ,dp) + abs[heights[ind] - heights[ind - 2]];

return dp[ind] = min(left,right);












vector <int> dp[n+1 , -1];
return f(n-1,heights,ind);   joo bhi function bnayanga upar;

