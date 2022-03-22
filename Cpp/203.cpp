#include <iostream>

using namespace std;

int main(void){
    cout << "너비를 입력하세요>>";
    int width;
    cin>>width;

    cout << "높이를 입력하세요7>>";
    int height;
    cin>>height;

    int area =width*height;
    cout << "면적은 " << area << endl;

    return 0;

}