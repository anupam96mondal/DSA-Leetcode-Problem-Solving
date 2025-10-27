class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int result =0;
        int sum =0;
        vector<int> prefix(n,0);
        // left side window sum
        // right side window sum
        // compare which will give better score
        // Start Sliding take one card from right and replace with the existing card keep update the max score
        for(int i=0;i<n;i++){
            sum += cardPoints[i];
            prefix[i]=sum;
        }
        int ans = prefix[k-1];
        int r = n-k;
        if(r == 0 ){
            return ans;
        }

        int current = prefix[n-1]-prefix[r-1];
        ans = max(current,ans);
        // Start sliding
        r++;
        int l=0;
        // update score in slide
        while(r<n){
            current = prefix[n-1]-prefix[r-1]+prefix[l];
            l++;
            r++;
            ans=max(current,ans);
        }
        return ans;
    }
};