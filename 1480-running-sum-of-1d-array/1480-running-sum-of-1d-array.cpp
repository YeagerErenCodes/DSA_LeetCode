class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int > ans(nums.size());
        for(int i=0;i<nums.size();i++){
            int currentSum=0;
            for(int j=0;j<=i;j++){
                currentSum+=nums[j];
            }
            ans[i]=currentSum;


        }
        return ans;
        
    }
};