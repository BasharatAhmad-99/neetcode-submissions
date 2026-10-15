class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size()-1;
        for(int i=0;i<numbers.size();){
            if(numbers[i] + numbers[n] == target){
                vector<int> ans;
                ans.push_back(i+1);
                ans.push_back(n+1);
                return ans;
            }
            if(numbers[i]+numbers[n] > target){
                n--;
            }
            else{
                i++;
            }
        }
    }
};
