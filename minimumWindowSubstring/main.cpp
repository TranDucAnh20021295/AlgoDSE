#include <iostream>
#include <string>
using namespace std;
string minWindow(string s, string t) {
        int m[1000] = { 0 };
        int length = INT_MAX;
        int start = 0;
        int count = t.length();
        for (int i = 0; i < t.length(); i++) {
            m[t[i]]++;
        }
        int i = 0;
        int j = 0;
        while (j < s.length()) {
            m[s[j]]--;
            if (m[s[j]] == 0)
            count--;
            if (count == 0) {
                while (count == 0) {
                    if (length > j - i + 1) {
                        length = j - i + 1;
                        start = i;
                    }
                m[s[i]]++;
                if (m[s[i]] > 0)
                    count++;
                i++;
                }
            }
            j++;
        }

        if (length != INT_MAX)
            return s.substr(start, length);
        else
            return "";
        }

int main()
{
    string s;
    string t;
    cin >> s;
    cin >> t;
    cout << minWindow(s, t);
}
