class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_streak = 0;
        int current = 0;
        for(int bit : nums) {
            if(bit == 1) {
                current++;
            }
            if(bit == 0) {
                current = 0;
            }
            if(current > max_streak) {
                max_streak = current;
            }
        }
        return max_streak;
    }
};