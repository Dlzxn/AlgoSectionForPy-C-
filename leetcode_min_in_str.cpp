//
// Created by alex on 28.02.2025.
//


#include <iostream>

using namespace std;

bool isPolindrom(string x) {
    string str_x = x, new_str = "";
    for (int i = 0; i < str_x.size(); i++) {
        new_str = str_x[i] + new_str;
    }
    if (new_str == str_x) {
        return true;
    }
    return false;

}

string logest(string s) {
    int max_size = 0;
    string new_str = "";
    // cout<<s.size()<<endl;
    for (int i = 0; i <= s.size(); i++) {
        for (int j = 0; j <= s.size()-i; j++) {
            // cout<<s.substr(i, j)<<i<<j<<endl;
            if (isPolindrom(s.substr(i, j))) {

                if (max_size < s.substr(i, j).size()) {
                    max_size = s.substr(i, j).length();
                    new_str = s.substr(i, j);
                }
            }
        }
    }
    return new_str;

}

int main() {
    string num;
    num = logest("ferrerffrree");
    cout << "finnally:"<<num << endl;
}