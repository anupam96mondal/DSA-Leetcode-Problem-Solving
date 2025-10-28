class Solution {
public:
    int totalMoney(int n) {
        int sum =0;
        int i=1;
        int r=1;
        int mon =0;
        while(i<=n){
            sum=sum+r;
            cout<<"r "<<r<<"i =>"<<i<<"mon "<<mon<<endl;
            r++;
            if(i%7 ==0){
                mon=mon+1;
                r=mon+1; 
            }
            i++; 
        }
        return  sum;
    }
};