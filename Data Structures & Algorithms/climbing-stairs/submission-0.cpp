class Solution {
public:
    int helper(int n,vector<int> &s){
        if(n==1 || n==2){
            return n;
        }

        s[1]=1;
        s[2]=2;

        for(int i=3;i<=n;i++){
            s[i]=s[i-1]+s[i-2];
        }
        return s[n];
    }
    int climbStairs(int n) {
        vector<int> s(n+1);
        
        return helper(n,s);
    }
};
