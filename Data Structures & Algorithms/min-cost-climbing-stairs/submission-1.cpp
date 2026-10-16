class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        if(cost.size()==0 || cost.size()==1){
            return 0;
        }
        int n=cost.size();
        vector<int> ans(n+1);
        ans[0]=0;
        ans[1]=0;


        for(int i=2;i<=n;i++){
            ans[i]=min(cost[i-1]+ans[i-1],cost[i-2]+ans[i-2]);
        }

        return ans[n];
    }
};
