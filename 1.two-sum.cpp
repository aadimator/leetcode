/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 *
 * https://leetcode.com/problems/two-sum/description/
 *
 * algorithms
 * Easy (44.26%)
 * Likes:    11026
 * Dislikes: 372
 * Total Accepted:    1.9M
 * Total Submissions: 4.3M
 * Testcase Example:  '[2,7,11,15]\n9'
 *
 * Given an array of integers, return indices of the two numbers such that they
 * add up to a specific target.
 * 
 * You may assume that each input would have exactly one solution, and you may
 * not use the same element twice.
 * 
 * Example:
 * 
 * 
 * Given nums = [2, 7, 11, 15], target = 9,
 * 
 * Because nums[0] + nums[1] = 2 + 7 = 9,
 * return [0, 1].
 * 
 * nums = [3, 1, 6, 8, 9], target = 10,
 * 
 * 
 * 3, 1, 6, 8, 9
 * 
 * 3 + 1 = 4 no
 * 3 + 6 = 9 no
 * 3 + 8 = 11 no
 * 3 + 9 = 12 no
 * 
 * 1 + 6 = 7 no
 * 1 + 8 = 9 no
 * 1 + 9 = 10 yes return [1, 4]
 * 
 * 
 */
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> out(2);

        for (int i = 0; i < nums.size() - 1; i++) {
            int firstNumber = nums[i];
            for (int j = i + 1; j < nums.size(); j++) {
                int secondNumber = nums[j];
                if (firstNumber + secondNumber == target) {
                    out[0] = i;
                    out[1] = j;
                    return out;
                }
            }
        }
        return out;
    }
};

