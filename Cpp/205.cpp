#include <iostream>
#include <cstring>

using namespace std;

int main(void)
{
    cout << "프로그램을 종료하려면 암호를 입력하세요." << endl;
    while (true) { //while (1)
        cout <<"암호>>";
        char password[11];
        cin>>password;

        if (strcmp(password,"C++")==0) {
            cout << "프로그램을 정상 종료합니다." << endl;

            break;
        }
        cout << "암호가 틀립니다." << endl;
    }

    return 0;
}
