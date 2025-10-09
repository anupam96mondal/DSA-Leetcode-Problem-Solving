class Solution {
public:
    int jump(vector<int>& nums) {
       int jump =0;
       int n = nums.size();
       int l=0;
       int r =0;

        while(r< n-1){
            int farthest =0;
            for(int index = l; index<=r;index++){ // range search of a max length jump
                farthest = max(index+nums[index], farthest);
            }
            l =r+1;
            r= farthest;
            jump=jump+1;
        }
        return jump;
    }
};