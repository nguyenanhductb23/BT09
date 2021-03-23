#include <iostream>

using namespace std;

int main()
{
    int* ptr = new int;
    *ptr = 2307;
    cout << ptr << endl;
    cout << *ptr << endl;
    delete ptr;
    cout << ptr << endl;
    cout << *ptr;
    return 0;
}

/** Sau khi xóa, con trỏ sẽ trỏ tới một vùng nhớ bất kì với một giá trị không xác định.
    Trong bài trên (do may mắn), con trỏ vẫn trỏ đến đúng địa chỉ đã cấp phát trước khi nó bị xóa
    nhưng giá trị đã là một số khác. */
