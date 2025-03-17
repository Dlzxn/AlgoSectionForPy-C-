//
// Created by alex on 01.03.2025.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {

        int v[s.length()];
        int all_sum = 0;


        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'I') {
                v[i] = 1;
            }
            else if (s[i] == 'V') {
                v[i] =  5;
            }
            else if (s[i] == 'X') {
                v[i] =  10;
            }
            else if (s[i] == 'L') {
                v[i] =  50;
            }
            else if (s[i] == 'C') {
                v[i] =  100;

            }
            else if (s[i] == 'D') {
                v[i] =  500;
            }
            else if (s[i] == 'M') {
                v[i] =  1000;
            }
        }

        for (int i = 0; i < s.length(); i++) {
            cout << v[i] << all_sum << i<< s.length() << endl;
            if (i+1 < s.length() && v[i] < v[i+1]) {
                all_sum -= v[i];
            }
            // else if (i < s.length() && v[i] >= v[i+1]) {
            //     all_sum += v[i];
            // }
            else {
                all_sum += v[i];
            }
        }
        return all_sum;

    }
};


int main() {
    Solution classPer;
    cout<<classPer.romanToInt("III")<<endl;
}