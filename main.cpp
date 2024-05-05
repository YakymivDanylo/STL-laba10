#include <algorithm>
#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    string str1 = "abracadabra";
    string str2 = "dab";

    set<char> chars(str2.begin(), str2.end());

    // Функціональний об'єкт для пошуку символів з chars у str1
    auto is_in_chars = [&chars](char c) {
        return chars.find(c) != chars.end();
    };

    // Знайти ітератори на початок і кінець найменшого діапазону,
    // який містить всі символи з chars
    auto it_begin = find_if(str1.begin(), str1.end(), is_in_chars);
    auto it_end = find_if_not(it_begin, str1.end(), is_in_chars);

    // Перевірити, чи знайдено діапазон
    if (it_end != str1.end()) {
        cout << "smallest diapazon: " << *it_begin << " - " << *it_end << endl;
    } else {
        cout << "there is no diapazom with symbol from str2" << endl;
    }

    return 0;
}
