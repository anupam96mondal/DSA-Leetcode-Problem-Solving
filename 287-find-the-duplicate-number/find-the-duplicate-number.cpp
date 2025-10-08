class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int number=-1;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i] == nums[i+1]){
                number = nums[i];
                return nums[i];
            }
        }
        return number;
    }
};