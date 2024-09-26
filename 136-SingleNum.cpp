class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int miss=0;
        for(int i =0;i<nums.size();i++){
            miss=miss ^ nums[i];

        }
        return miss;
    }
};
