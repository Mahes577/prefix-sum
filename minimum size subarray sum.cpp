class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0,c=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i;j<nums.size();j++){
                sum = sum + nums[j];
                if(sum == target){
                    c++;
                }
                else if(sum>target){
                    break;
                }
            }
        }
        return c;
    }
};