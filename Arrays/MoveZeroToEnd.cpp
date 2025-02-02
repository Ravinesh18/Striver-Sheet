class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int c = 0, n = nums.size();
        int j = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                nums[j] = nums[i];
                j++;
            } else {
                c++;
            }
        }
        while (c) {
            nums[n - 1] = 0;
            n--;
            c--;
        }
    }
};