#include <cmath>
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        int flag =0;
        sort(nums.begin(),nums.end());
        int index=0;
        int closeset_sum=0;
        // find nearest index;
        int result = nums[0]+nums[1]+nums[2];
        for(int i=0;i<n-2;i++){
            int left = i+1;
            int right = n-1;
            while(left<right){
                int sum = nums[i]+nums[left]+nums[right];
                if(abs(target-sum)<abs(target-result)){
                    result =sum;
                }
                if(sum == target) return target;
                else if(sum<target){
                    left++;
                }
                else{
                    right--;
                }
            }
        }
        return result;
    }
};