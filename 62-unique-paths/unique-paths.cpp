class Solution {
public:
    int uniquePaths(int m, int n) {
        int path = 0;
        // If either given row number is first or column number is first
        // 
    //     if(m ==1 || n==1){
    //         return 1;
    //     }

    //     path = uniquePaths(m-1,n)+uniquePaths(m,n-1); // test case fails due tolarge input set cases and recursion
    //    return path ;

    int dp [m][n];
    // count to reach any cell in first column is one
    for(int i=0;i<m;i++){
        dp[i][0]=1;
    }
    // count to reach any cell in first row is one
    for(int j=0;j<n;j++){
        dp[0][j]=1;
    }
    // calculate the no of path in other cell using recursive manner
    for(int i=1;i<m;i++){
        for(int j=1;j<n;j++){
            dp[i][j] = dp[i-1][j]+dp[i][j-1];
        }
    } 
    return dp[m-1][n-1];

    }
};