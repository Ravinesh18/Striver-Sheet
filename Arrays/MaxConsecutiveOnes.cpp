class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c = 0, maxi = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] == 1)
                c++;
            else {
                maxi = max(c, maxi);
                c = 0;
            }
        }
        maxi = max(c, maxi);
        return maxi;
    }
};