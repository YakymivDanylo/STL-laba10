#include <algorithm>
#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    string str1 = "abracadabra";
    string str2 = "dab";

    set<char> chars(str2.begin(), str2.end());

    auto is_in_chars = [&chars](char c) {
        return chars.find(c) != chars.end();
    };

    auto it_begin = find_if(str1.begin(), str1.end(), is_in_chars);
    auto it_end = find_if_not(it_begin, str1.end(), is_in_chars);

    if (it_end != str1.end()) {
        cout << "smallest range: " << *it_begin << " - " << *it_end << endl;
    } else {
        cout << "there is no range with symbol from str2" << endl;
    }

    return 0;
}
