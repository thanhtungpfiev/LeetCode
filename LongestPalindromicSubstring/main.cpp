/**
 * \author tungdt9 thanhtungpfiev@gmail.com
 *
 * \date 7/4/2017
 * \class %{Cpp:License:ClassName}
 *
 * \brief
 *
 *
 */
#include <iostream>
#include <algorithm>

using namespace std;

void extendPalindromeString(string s, int i, int j, int &imax, int &maxLength) {
    while (i >= 0 && j < s.length() && s[i] == s[j]) {
        i--;
        j++;
    };

    if (maxLength < j - i - 1) {
        maxLength = j - i - 1;
        imax = i + 1;
    }
}

string longestPalindrome(string s) {
    if (s.length() < 2) {
        return s;
    }
    int maxLength = 0, imax = 0;
    for (int i = 0; i < s.length() - 1; ++i) {
        extendPalindromeString(s, i, i, imax, maxLength);
        extendPalindromeString(s, i, i + 1, imax, maxLength);
    }
    string result = s.substr(imax, maxLength);
    return result;
}

int main(int argc, char *argv[])
{
    string s = "bbbbbbbbbb";
    cout << longestPalindrome(s) << endl;
    return 0;
}
