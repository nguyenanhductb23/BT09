#include <iostream>
#include <cstring>

using namespace std;

char* concat(const char* str1, const char* str2) {
    char* str = new char [50];
    str = strcpy(str, str1);
    str = strcat(str, str2);
    return str;
}

int main()
{
    char str1[] = "DDDDD";
    char str2[] = "aaaaa";
    char* str = concat(str1, str2);
    cout << str;
    return 0;
}
