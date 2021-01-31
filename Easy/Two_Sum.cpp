class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> table; // hash function table
        for (int index = 0; index < nums.size(); index++)
        {
            int tmp = target - nums[index];
            if (table.find(tmp) == table.end())
            {
                table[nums[index]] = index;
            }
            else
            {
                return {table[target - nums[index]], index};
                break;
            }
        }
        
        return {};
    }
};