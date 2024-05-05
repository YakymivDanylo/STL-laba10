#include <algorithm>
#include <iostream>
#include <set>
#include <vector>
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*vector<int> firstFunc(const vector<int> &mas1, int &counter) {
    vector<int> sorted = mas1;
    sort(sorted.begin(), sorted.end());
    if(counter>0)
        counter--;
    return sorted;
}
void secondFunc(const vector<int> &mas1, int &counter, int cooldown) {
    if(counter == 0) {
        vector<int> res = mas1;
        int sum = 0;
        for (auto it = res.begin(); it != res.end(); it++) {
            sum += *it;
        }
        cout<<endl;
        cout << sum;
        counter += cooldown;
    }
    else
        cout<<"There is cooldown";
}
vector<int> thirdFunc(const vector<int> &mas1, int &counter){
    vector<int> res = mas1;
    for(auto it = res.begin(); it != res.end(); it++){
        *it *= *it;
    }
    if(counter>0)
        counter--;
    return res;
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

        vector<int> mas1{1,3,2,4,5,9,6};
        int cooldown;
        cout<<"Please write your cooldown";
        cin>>cooldown;
        int counter=0;
        vector<int> result = firstFunc(mas1, counter);
        for_each(result.begin(),result.end(),
                 [](int &x){cout<<x<<" ";});
        secondFunc(mas1,counter,cooldown);
        cout<<endl;
        vector<int> res = thirdFunc(mas1, counter);
        for_each(res.begin(),res.end(),
                 [](int &x){cout<<x<<" ";});
        cout<<endl;
        secondFunc(mas1,counter,cooldown);
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
