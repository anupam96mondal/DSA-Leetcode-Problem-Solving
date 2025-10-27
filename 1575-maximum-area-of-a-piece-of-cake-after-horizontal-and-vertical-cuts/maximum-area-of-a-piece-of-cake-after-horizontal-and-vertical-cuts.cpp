class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
       

        horizontalCuts.insert(horizontalCuts.begin() + 0, 0);
        sort(horizontalCuts.begin(),horizontalCuts.end());
        horizontalCuts.push_back(h);

        verticalCuts.insert(verticalCuts.begin() + 0, 0);
        sort(verticalCuts.begin(),verticalCuts.end());
        verticalCuts.push_back(w);


        int max_height=0;
        int max_width=0;
        long long result=0;

        for(int i=1;i<horizontalCuts.size();i++){
            max_height=max(max_height,(horizontalCuts[i]-horizontalCuts[i-1]));
        }

        for(int i=1;i<verticalCuts.size();i++){
            max_width=max(max_width,(verticalCuts[i]-verticalCuts[i-1]));
        }
        cout<<"Max Height"<<max_height<< endl;
        cout<<"Max Width" << max_width<< endl;
        result = (1LL * max_height*max_width) % 1000000007;
        return result;
    }
};