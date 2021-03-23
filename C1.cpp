#include <iostream>
#include <cstring>

using namespace std;

char* reverse(const char* s) {
    int len = strlen(s);
    char* p = new char[len];
    for (int i = 0; i < len; i++) {
        p[i] = s[len - 1 - i];
    }
    return p;
}

char* delete_char(const char* s, char c)
{
    int len = strlen(s);
    char* str = new char[len];
    int index = 0;
    for (int i = 0; i < len; i++) {
        if (s[i] != c) {
            str[index] = s[i];
            index++;
        }
    }
    str[index] = '\0';
    return str;
}

char* pad_left(const char* s, int n) {
    int len = strlen(s);
    char* str = new char[n];
    if (len < n) {
        int dif = n - len;
        for(int i = 0; i < dif; i++)
            str[i] = '_';
        for(int i = dif; i < n; i++)
            str[i] = s[i - dif];
    }
    else
        for(int i = 0; i < len; i++)
            str[i] = s[i];
    return str;
}

char* truncate(const char* s, int n) {
    int len = strlen(s);
    char* str = new char[n];
    for (int i = 0; i < n; i++) {
        str[i] = s[i];
    }
    return str;
}

char* trim_left(const char* s) {
    int len = strlen(s);
    char* str = new char[len];
    int i = 0;
    while (s[i] == ' ') i++;
    int j = 0;
    for ( ; j < len-i; j++) {
        str[j] = s[i++];
    }
    str[j] = '\0';
    return str;
}

int main()
{
    char* s = "    sfgrggrgrgrgdr";
    cout << reverse(s) << endl;
    char ch; cin >> ch;
    cout << delete_char(s, ch);
    int n; cin >> n;
    cout << pad_left(s, n) << endl;
    cout << trim_left(s) << endl;
    return 0;
}
