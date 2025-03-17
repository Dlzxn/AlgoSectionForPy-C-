//
// Created by alex on 28.02.2025.
//
#include <iostream>

using namespace std;


bool isPolindrom(int x) {
    string str_x = to_string(x), new_str = "";
    for (int i = 0; i < str_x.size(); i++) {
        new_str = str_x[i] + new_str;
    }
    if (new_str == str_x) {
        cout << new_str << endl;
        return true;
    }
    cout << new_str << endl;
    return false;

}

int main() {
    bool is_Polindrom;
    is_Polindrom = isPolindrom(323);
    cout << is_Polindrom << endl;
}