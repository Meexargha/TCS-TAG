#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);   // take full line input

    for(int i = 0; i < s.length(); i++) {
        if(isalnum(s[i])) {   // checks letter or digit
            cout << s[i];
        }
    }

    return 0;
}
