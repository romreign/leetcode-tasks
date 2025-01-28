class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());

        for(auto i = 0; i < nums.size() - 2; i++) {
            auto left = i + 1;
            auto right = nums.size() - 1;

            while(left < right) {
                auto sum = nums[i] + nums[left] + nums[right];

                if (sum < 0) left++;
                else if (sum > 0) right--;
                else {
                    result.push_back(vector<int>{nums[i], nums[left], nums[right]});
                    while(left + 1 < right && nums[left] == nums[left + 1]) left++;
                    while(left < right - 1 && nums[right] == nums[right - 1]) right--;
                    left++, right--;
                }   
            }
            while(i + 1 < nums.size() - 2 && nums[i] == nums[i + 1]) i++;
        }
        return result;
    }
};