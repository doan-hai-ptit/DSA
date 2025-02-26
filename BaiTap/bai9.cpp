#include <iostream>
#include <vector>
#include <map>
using namespace std;

int result(string s) {
    map<char, vector<int>> mp;
    for (int i = 0; i < 52; i++) {
        mp[s[i]].push_back(i);
    }
    int count = 0;

    for (char a = 'A'; a <= 'Z'; a++) {
        for (char b = a + 1; b <= 'Z'; b++) {
            int x1 = mp[a][0], x2 = mp[a][1];
            int y1 = mp[b][0], y2 = mp[b][1];
            if ((x1 < y1 && y1 < x2 && x2 < y2) || (y1 < x1 && x1 < y2 && y2 < x2)){
                count++;
            }
        }
    }

    return count;
}

int main() {
    string s;
    cin >> s;
    int r = result(s);
    cout << r << endl;
    return 0;
}
