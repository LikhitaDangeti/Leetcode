class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> concatenated(nums);
        concatenated.insert(concatenated.end(), nums.begin(), nums.end());
        return concatenated;
    }
};