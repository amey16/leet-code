class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        while(stones.size()>1){
            sort(stones.begin(),stones.end());
            if(stones[stones.size()-2]==stones[stones.size()-1]){
                stones.pop_back();
                stones.pop_back();
            }
            else{
                int d=stones[stones.size()-1]-stones[stones.size()-2];
                stones.pop_back();
                stones[stones.size()-1]=d;
            }
        }   
        if(stones.size()==0)
            return 0;
        else
            return stones[0];
    }
};