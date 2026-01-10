#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) {
    int low = 0;
    int ans = 0;
    unordered_map<char, int> freq;

    for(int high = 0; high < s.size(); high++) {
        freq[s[high]]++;

        // if duplicate found, move low
        while(freq[s[high]] > 1) {
            freq[s[low]]--;
            low++;
        }

        ans = max(ans, high - low + 1);
    }

    return ans;
}

int main() {
    string s;
    cin >> s;

    cout << lengthOfLongestSubstring(s);
    return 0;
}
