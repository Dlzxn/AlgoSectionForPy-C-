//
// Created by alex on 01.03.2025.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = "";
        cout << "size: " << strs.size() << endl;
        for (int i = 0; i <= strs[0].length(); i++) {
            for (int j = 0; j < strs.size(); j++) {
                cout << strs[i]<<" "<<strs[0].substr(0, i)<<endl;
                if (strs[j].substr(0, strs[0].substr(0, i).length()) != strs[0].substr(0, i)) {
                    break;
                }
                if  (j + 1 == strs.size()) {
                    result = strs[j].substr(0, strs[0].substr(0, i).length());
                }
            }
        }
        cout<<"result: ";
        return result;

    }
};



int main() {
    vector<string> strs(1);
    strs[0] = "a";
    // strs[1] = "preddd";
    // strs[2] = "prec,dldl";
    // strs[3] = "prefix";
    // strs[4] = "presslk";
    // strs[5] = "prekks";
    Solution s;
    cout << s.longestCommonPrefix(strs);
    return 0;
}