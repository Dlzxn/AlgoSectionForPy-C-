//
// Created by alex on 06.03.2025.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;
//
// class Solution {
// public:
//     string countAndSay(int n) {
//         if (n == 1) {
//             return "1";
//         }
//
//         string prev = countAndSay(n - 1);
//         string result = "";
//
//         int count = 1;
//         for (size_t i = 1; i <= prev.length(); i++) {
//             if (i < prev.length() && prev[i] == prev[i - 1]) {
//                 count++;
//             } else {
//                 result += to_string(count) + prev[i - 1];
//                 count = 1;
//             }
//         }
//
//         return result;
//     }
// };

class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.length(), m = needle.length();

        if (m == 0) return 0; // Если needle пустая строка, возвращаем 0

        for (int i = 0; i <= n - m; i++) { // <= вместо <
            int j = 0;
            while (j < m && haystack[i + j] == needle[j]) {
                j++;
            }
            if (j == m) return i; // Если все символы совпали, возвращаем индекс
        }

        return -1; // Если ничего не нашли
    }
};



int main() {
    Solution alex;
    cout << alex.strStr("aaaa", "aaa");
}