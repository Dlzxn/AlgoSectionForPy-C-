//
// Created by alex on 02.03.2025.
//


#include <iostream>

#include <vector>


using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0, end = nums.size() - 1;

        if (target < nums[0]) {
            return 0;
        }
        else if (target > nums[nums.size() - 1]){
            return nums.size();
        }

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] == target) {
                return mid;
            }
            else if (nums[mid] < target) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }

        return start;
    }
};


int main() {
    cout <<"Hello World" << 2 / 2 << endl;
    Solution s;
    vector<int> nums = {1, 3, 5, 6};
    cout << "otv: " <<s.searchInsert(nums, 2);

}