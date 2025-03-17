//
// Created by alex on 01.03.2025.
//

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> maxOfThree(vector<int> num) {
        vector<int> res(3);

        if (num[0] >= num[1] && num[0] >= num[2]) {
            res[2] = num[0];
            if (num[1] >= num[2]) {
                res[1] = num[1];
                res[0] = num[2];
            }
            else {
                res[1] = num[2];
                res[0] = num[1];
            }
        }
        else if (num[1] >= num[0] && num[1] >= num[2]) {
            res[2] = num[1];
            if (num[0] >= num[2]) {
                res[0] = num[2];
                res[1] = num[0];
            }
            else {
                res[0] = num[0];
                res[1] = num[2];
            }
        }
        else if (num[2] >= num[1] && num[2] >= num[0]) {
            res[2] = num[2];
            if (num[1] >= num[0]) {
                res[1] = num[1];
                res[0] = num[0];
            }
            else {
                res[1] = num[0];
                res[0] = num[1];
            }
        }
        return res;
    }
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        set<vector<int>> uniqueResults;
        vector<int> chisla(3);
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i+1; j < nums.size(); j++) {
                for (int k = j+1; k < nums.size(); k++) {
                    if (nums[i] + nums[j] + nums[k] == 0) {
                        cout << nums[i] << nums[j] << nums[k] << endl;
                        chisla = maxOfThree({nums[i], nums[j], nums[k]});
                        uniqueResults.insert(chisla);
                    }

                }
            }
        }
        cout << "size: " << res.size() << endl;
        for (const auto& triplet : uniqueResults) {
            res.push_back(triplet);
        }
        return res;
        }

    };

int main() {
    vector<int> strs = {-1,0,1,0};
    vector<vector<int>> res;
    // strs[0] = 0;
    // strs[1] = 0;
    // strs[2] = 0;
    // strs[3] = -1;
    // strs[4] = 0;
    // strs[5] = 2;
    Solution s;
    res = s.threeSum(strs);
    cout<<"result: ";
    for (int i = 0; i < res.size(); i++) {
        cout << res[i][0] << " " << res[i][1] << " " << res[i][2] << endl;
    }
}