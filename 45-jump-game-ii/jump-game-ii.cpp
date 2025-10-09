class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int jump =0;
        int l=0;
        int r =0;

        while(r<n-1){
            int farthest =0; // find furthest jump in range index
            for(int index = l; index<=r;index++){ // range search of a max length jump
                farthest = max(index+nums[index], farthest);
            }
            l =r+1; // update l pointer next to r
            r = farthest; // update r pointer to farthest
            jump = jump+1; // increase jump count for next iteration
        }
        return jump;
    }
};