class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int full = numBottles;
        int empty_after_drink = numBottles;
        while(empty_after_drink >= numExchange){
            empty_after_drink=empty_after_drink-numExchange; // exchange the empty bottle with full;
            full++; // take a full bottle
            empty_after_drink++; // drink the new full bottle
            numExchange++;
        }
        return full;
    }
};