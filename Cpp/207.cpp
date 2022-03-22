#include <iostream>
#include <string>

using namespace std;
int main(void)
{
    // string song("falling in love with you");
    string song = "Falling in love with you";
    cout << song + "를 부른 가수는";

    string elvis = "Elvis presley";
    cout << "(힌트: 첫 글자는 : " << elvis[0] << ")?";

    string singer;
    getline(cin,singer);
    if (singer==elvis) { // strcmp(singer,elvis) C에서 사용
        cout << "맞았습니다.";
    }
    else {
        cout << "틀렵씁니다." + elvis + "입니다.";
    }
    return 0;
}