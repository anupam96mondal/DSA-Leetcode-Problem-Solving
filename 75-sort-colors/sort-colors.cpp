class Solution {
public:
    void sortColors(vector<int>& nums) {
       int zero=0,one=0,two=0;
       int n = nums.size();
       for(int i =0;i<n;i++){
            if(nums[i] == 0){
                zero++;
            }
            else if(nums[i] == 1){
                one++;
            }
            else{
                two++;
            }
       } 

       for(int j =0;j<zero;j++){
            nums[j]=0;
       }
       for(int k = zero;k<zero+one;k++){
            nums[k]=1;
       }
       for(int l = zero+one;l<zero+one+two;l++){
            nums[l] = 2;
       }
    }
};