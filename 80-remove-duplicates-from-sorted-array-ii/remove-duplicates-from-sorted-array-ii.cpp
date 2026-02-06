class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n<=2) return n;
        int left=1,right=1;
        int count=1;
        while(right<n){
            if(nums[right-1]==nums[right]) count++;
            else count =1;
            if(count<=2){
                nums[left]=nums[right];
                left++;
            }
            right++;
        }
        return left;
    }
};