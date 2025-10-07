class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int drink = numBottles;
        int empty =0;

        while(numBottles>empty){
            empty = numBottles%numExchange;
            numBottles=numBottles/numExchange;
            drink = drink+numBottles;
            numBottles = numBottles+ empty;
        }
        return drink;
    }
};