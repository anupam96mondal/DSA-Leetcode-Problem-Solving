class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // Solution 1

        // sort(nums.begin(),nums.end());
        // int number=-1;
        // int n = nums.size();
        // for(int i=0;i<n;i++){
        //     if(nums[i] == nums[i+1]){
        //         number = nums[i];
        //         return nums[i];
        //     }
        // }
        // return number;

        // Solution 2

        // for(int i=0;i<nums.size();i++){
        //     int ind = abs(nums[i]);
        //     if(nums[ind]<0){ // if the index is alredy negative that means  this is the duplicate element
        //         return ind;
        //     }
        //     nums[ind]= -nums[ind]; // negate all the elemnt in the array 
        // }
        // return -1;

        // Solution 3  Hare and Tortoise

        int slow= nums[0];
        int fast = nums[0];

        do{
            slow =nums[slow];
            fast = nums[nums[fast]];
        }
        while(slow!=fast);

        fast = nums[0];

        while(slow!=fast){
            slow= nums[slow];
            fast = nums[fast];
        }
        return fast;
    }
};