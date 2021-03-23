#include <iostream>

using namespace std;

int main()
{
    int* p = new int;
    int* p2 = p;
    *p = 10;
    delete p; //dòng này gây lỗi:
     //do xoá bộ nhớ đã cấp phát cho p, cũng là vị trí mà p2 trỏ tới
    *p2 = 100;
    cout << *p2;
    delete p2;
    return 0;
}
