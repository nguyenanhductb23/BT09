#include <iostream>
#include <cstring>
#include <vector>
#include <sstream>
using namespace std;
typedef vector<char*> v1d;
typedef vector<v1d> v2d;

char* design(char ch, int index){
    vector<char*> des(6);
    if (ch == 'A'){
        des[0] = "--##---";
        des[1] = "-#--#--";
        des[2] = "######-";
        des[3] = "#----#-";
        des[4] = "#----#-";
        des[5] = "#----#-";
    }
    if (ch == 'B'){
        des[0] = "#####--";
        des[1] = "#---##-";
        des[2] = "####---";
        des[3] = "#---##-";
        des[4] = "#---##-";
        des[5] = "####---";
    }
    if (ch == 'C'){
        des[0] = "####--";
        des[1] = "#----#-";
        des[2] = "#------";
        des[3] = "#------";
        des[4] = "#----#-";
        des[5] = "-####--";
    }
    if (ch == 'D'){
        des[0] = "#####--";
        des[1] = "#----#-";
        des[2] = "#----#-";
        des[3] = "#----#-";
        des[4] = "#----#-";
        des[5] = "#####--";
    }
    if (ch == 'E'){
        des[0] = "######-";
        des[1] = "#------";
        des[2] = "#####--";
        des[3] = "#------";
        des[4] = "#------";
        des[5] = "######-";
    }
    if (ch == 'F'){
        des[0] = "######-";
        des[1] = "#------";
        des[2] = "#####--";
        des[3] = "#------";
        des[4] = "#------";
        des[5] = "#------";
    }

    if (ch == 'H'){
        des[0] = "#----#-";
        des[1] = "#----#-";
        des[2] = "######-";
        des[3] = "#----#-";
        des[4] = "#----#-";
        des[5] = "#----#-";
    }
    if (ch == 'I'){
        des[0] = "---#---";
        des[1] = "---#---";
        des[2] = "---#---";
        des[3] = "---#---";
        des[4] = "---#---";
        des[5] = "---#---";
    }
    if (ch == 'K'){
        des[0] = "#----#-";
        des[1] = "#---#--";
        des[2] = "####---";
        des[3] = "#--#---";
        des[4] = "#---#--";
        des[5] = "#----#-";
    }

    if (ch == 'N'){
        des[0] = "#----#-";
        des[1] = "##---#-";
        des[2] = "#-#--#-";
        des[3] = "#--#-#-";
        des[4] = "#---##-";
        des[5] = "#----#-";
    }

    if (ch == 'V'){
        des[0] = "#----#-";
        des[1] = "#----#-";
        des[2] = "#----#-";
        des[3] = "#----#-";
        des[4] = "-#--#--";
        des[5] = "--##---";
    }
    return des[index];
}


void draw_image(v2d& image, char c, int x, int y){
    for (int i = x; i < x + 6; i++){
        // lấy chuỗi biến da
        stringstream s(design(c, i -x));
        char str[] = "";
        s >> str;

        for (int j = y; j < y + 7; j++){
           *((image+i)+j) = *(str+j-y);
        }
    }
}

void draw(v2d& image, char s[], int x, int y){

    for (int i = 0, count = 0; i < s.size();i++){
        draw_image(image, *(s+i), x, y+count);
        count += 7;
    }
}

void print_(v2d& image, int w, int h){
    for (int i = 0; i < h; i++){
        for (int j = 0; j < w; j++){
            cout << *((image+i)+j);
        }
        cout << endl;
    }
}

int main(){
    char banner[] = "ABCD";
    for (int i = 0; i < banner.size(); i++){
        *(banner+i) = toupper*((banner+i));
    }
    cout << "Enter width & height: ";
    int width, height;
    cin >> width >> height;
    cout << "Enter x & y: ";
    int x, y;
    cin >> x >>y;

    v2d image(height, v1d(width, "-"));

    draw(image, banner, x, y);

    print_(image, width, height);

    return 0;
}
