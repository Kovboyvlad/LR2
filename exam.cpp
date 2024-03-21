#include <iostream>
#include <set>
#include <list>
#include <map>
#include <vector>
#include <string>
#include <deque>
#include <algorithm>
#include <stack>
#include <unordered_set>

int main()
{

    //1 - Задача №1418.Разные

    //int n;
    //std::cin >> n;
    //std::set<int> numbers;

    //for (int i = 0; i < n; i++) {
    //    int num;
    //    std::cin >> num;
    //    numbers.insert(num);
    //}

    //std::cout << numbers.size() << std::endl;


    //2 - Задача №49. Списки по классам

    //std::map<int, std::vector<std::string>> StudentsAndNum;

    //int num;
    //std::string fam;

    //while (std::cin >> num >> fam) {
    //    StudentsAndNum[num].push_back(fam);
    //}

    //for (int num = 9; num <= 11; ++num) {
    //    for (auto& student : StudentsAndNum[num]) {
    //        std::cout << num << " " << student << std::endl;
    //    }
    //}


    //3 - 

    //std::deque<int> deck1;
    //std::deque<int> deck2;
    //int k = 0;

    ////1 колода
    //for (int i = 0; i < 5; i++) {
    //    int num;
    //    std::cin >> num;
    //    deck1.push_back(num);
    //}
    ////2 колода
    //for (int i = 0; i < 5; i++) {
    //    int num;
    //    std::cin >> num;
    //    deck2.push_back(num);
    //}


    //while (!deck1.empty() && !deck2.empty()) {
    //    int card1 = deck1.front();
    //    deck1.pop_front();
    //    int card2 = deck2.front();
    //    deck2.pop_front();

    //    if (card1 == 0 && card2 == 9) {
    //        deck1.push_back(card1);
    //        deck1.push_back(card2);
    //    }
    //    else if (card1 == 9 && card2 == 0) {
    //        deck2.push_back(card1);
    //        deck2.push_back(card2);
    //    }
    //    else if (card1 > card2) {
    //        deck1.push_back(card1);
    //        deck1.push_back(card2);
    //    }
    //    else if (card2 > card1) {
    //        deck2.push_back(card1);
    //        deck2.push_back(card2);
    //    }
    //    k++;
    //    if (k >= 1000000) {
    //        std::cout << "botva" << std::endl;
    //        return 0;
    //    }

    //}
    //if (deck1.size() == 0) std::cout << "second " << k;
    //else if (deck2.size() == 0)  std::cout << "first " << k;


    //4 - d


    //int n;
    //std::cin >> n;
    //std::cin.ignore();

    //std::string vvod;
    //std::deque<std::string> activeProgs;
    //std::vector<std::string> history;

    //for (int k = 0; k < n; k++) {
    //    std::getline(std::cin, vvod);
    //    if (vvod.substr(0, 3) == "Run") {
    //        size_t pos = vvod.find(' ');
    //        std::string substring = vvod.substr(pos + 1);
    //        activeProgs.push_back(substring);
    //        history.push_back(substring);

    //    }
    //    else if (vvod.substr(0, 3) == "Alt") {
    //        std::string::difference_type tabsKolvo = std::count(vvod.begin(), vvod.end(), '+');
    //        int findProg = activeProgs.size() - tabsKolvo % activeProgs.size() - 1;
    //        history.push_back(activeProgs[findProg]);
    //        activeProgs.push_back(activeProgs[findProg]);
    //        activeProgs.erase(activeProgs.begin() + findProg);
    //    }

    //}

    //for (int i = 0; i < history.size(); i++) {
    //    std::cout << history[i] << std::endl;
    //}
    //



    //5 - E

    //std::unordered_set <std::string> str;
    //char oper;
    //std::string input;

    //while (true) {

    //    std::cin >> oper >> input;

    //    if (oper == '#') {
    //        break;
    //    }

    //    if (oper == '+') {
    //        str.insert(input);
    //    }
    //    else if (oper == '-') {
    //        str.erase(input);
    //    }

    //    else if (oper == '?') {
    //        if (str.find(input) != str.end()) {
    //            std::cout << "YES" << std::endl;
    //        }
    //        else {
    //            std::cout << "NO" << std::endl;
    //        }
    //    }
    //}

    //return 0;
}