#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

int main() {
    string user;
    cin >> user;
    set<char> s;
    for (const char& c : user) {
        s.insert(c);
    }
    if (s.size()%2==0) {
        cout << "CHAT WITH HER!";
    }
    else {
        cout << "IGNORE HIM!";
    }
}