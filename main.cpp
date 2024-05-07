#include <algorithm>
#include <iostream>
#include <set>
#include <vector>
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
struct PhoneDigitToLetters {
    const map<char, string> digitToLetters = {
            {'2', "abc"}, {'3', "def"}, {'4', "ghi"},
            {'5', "jkl"}, {'6', "mno"}, {'7', "pqrs"},
            {'8', "tuv"}, {'9', "wxyz"}
    };

    string operator()(char digit) {
        return digitToLetters.at(digit);
    }
};
//task 2
/*void firstFunc(const vector<int> &mas1, int &counter) {
    vector<int> sorted = mas1;
    sort(sorted.begin(), sorted.end());
    for_each(sorted.begin(), sorted.end(),
             [](int &x) { cout << x << " "; });
    if (counter > 0)
        counter--;
}

void secondFunc(const vector<int> &mas1, int &counter, int cooldown) {
    if (counter == 0) {
        int sum = 0;
        for (auto it = mas1.begin(); it != mas1.end(); it++) {
            sum += *it;
        }
        cout << "Sum: " << sum;
        counter += cooldown;
    } else {
        cout << "There is cooldown";
    }
}

void thirdFunc(const vector<int> &mas1, int &counter) {
    vector<int> res = mas1;
    for (auto it = res.begin(); it != res.end(); it++) {
        *it *= *it;
    }
    for_each(res.begin(), res.end(),
             [](int &x) { cout << x << " "; });
    if (counter > 0)
        counter--;
}*/






/*//task3
 struct Player{
    string name;
    int score;
};

void Print(const vector<Player> &player){
    cout<<"---------Player rating---------"<<endl;
    for(int i=0;i<player.size();i++){
        cout << i + 1 << ". " << player[i].name << ": " << player[i].score << endl;
    }
}*/


int main() {
    string phoneNumber = "23";

    PhoneDigitToLetters phoneDigitToLetters;

    string result = "";
    for (char digit : phoneNumber) {
        string letters = phoneDigitToLetters(digit);
        if (result.empty()) {
            result = letters;
        } else {
            string temp;
            for (char a : result) {
                for (char b : letters) {
                    temp.push_back(a);
                    temp.push_back(b);
                }
            }
            result = temp;
        }
    }

    cout << "Letter combinations for a phone number " << phoneNumber << ": " << result << endl;
   /* //task 4
    string sentence1 = "hello world hello";
    string sentence2 = "world hello world";

    map<string, int> word_counts;

    auto countWords = [&word_counts](const string& sentence) {
        string word;
        for (char c : sentence) {
            if (c == ' ') {
                if (!word.empty()) {
                    word_counts[word]++;
                    word.clear();
                }
            } else {
                word += c;
            }
        }
        if (!word.empty()) {
            word_counts[word]++;
        }
    };

    countWords(sentence1);
    countWords(sentence2);

    bool similar = true;
    for (const auto& pair : word_counts) {
        if (pair.second % 2 != 0) {
            similar = false;
            break;
        }
    }

    if (similar) {
        cout << "Sentences have the same word frequency." << endl;
    } else {
        cout << "Sentences have different word frequencies." << endl;
    }*/

/* //task 1
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
*/
/*//task 2

        vector<int> mas1{1, 3, 2, 4, 5, 9, 6};
    int cooldown;
    cout << "Please write your cooldown: ";
    cin >> cooldown;
    int counter = 0;
    firstFunc(mas1,counter);
    cout<<endl;
    cout<<"counter"<<counter;
    cout<<endl;
    secondFunc(mas1, counter, cooldown);
    cout << endl;
    cout<<"counter"<<counter;
    cout<<endl;
    firstFunc(mas1,counter);
    cout << endl;
    cout<<"counter"<<counter;
    cout<<endl;
    thirdFunc(mas1,counter);
    cout<<endl;
    cout<<"counter"<<counter;
    cout<<endl;
    secondFunc(mas1, counter, cooldown);
    cout<<endl;
    cout<<"counter"<<counter;
    cout<<endl;
    secondFunc(mas1, counter, cooldown);
*/

/*//task 3
    vector<Player> players = {
            {"Alice", 1000},
            {"Bob", 800},
            {"Charlie", 1200},
            {"David", 900},
            {"Emily", 700},
    };
    sort(players.begin(),players.end(),[](const Player &p1, const Player &p2){
        return p1.score>p2.score;
    });
    Print(players);*/



    return 0;
}
