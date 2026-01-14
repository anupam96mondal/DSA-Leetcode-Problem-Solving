#include <vector>
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max=0;
        int n = candies.size();
        std::vector<bool> bool_vec(n);
        for(int i=0;i<n;i++){
           if(candies[i]>=max){
            max = candies[i];
           }
        }

        for(int i=0;i<n;i++){
            if(candies[i]+extraCandies>=max){
                bool_vec[i]=true;
            }
            else{
               bool_vec[i]=false;
            }
        }
        return bool_vec;
    }
};