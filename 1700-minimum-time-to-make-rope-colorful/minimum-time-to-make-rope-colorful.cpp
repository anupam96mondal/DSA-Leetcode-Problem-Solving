class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n = colors.length();
        int cost =0;
        int mini = neededTime[0];

        for(int i=1;i<n;i++){
            if(colors[i-1] == colors[i]){
                cost+= min(mini,neededTime[i]);
                mini = max(mini,neededTime[i]);
            }
            else{
                // new color group starts
                mini = neededTime[i];
            }
        }
     return cost;
    }
};