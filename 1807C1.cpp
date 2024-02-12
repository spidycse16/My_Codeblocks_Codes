#include <iostream>
#include <string>

using namespace std;

bool is_alternating(string s) {
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i - 1]) {
            return false;
        }
    }
    return true;
}

void replace_all(string& s, char c, char r) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == c) {
            s[i] = r;
        }
    }
}

bool can_convert(string s) {
    if (is_alternating(s)) {
        return true;
    }

    for (char c : s) {
        string t = s;
        replace_all(t, c, '0');
        if (is_alternating(t)) {
            return true;
        }

        t = s;
        replace_all(t, c, '1');
        if (is_alternating(t)) {
            return true;
        }
    }

    return false;
}

int main() {
    string s;
    cin >> s;

    if (can_convert(s)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

