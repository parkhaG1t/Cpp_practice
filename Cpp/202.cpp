#include <iostream>

double area(int r); // 선언

double area(int r) // 함수 정의
{

    return 3.14*r*r;
    
}

int main(void)
{
    int n = 3;
    char c = '#';

    std::cout << c << 5.5 << '-' << n << "Hello" << true << std::endl;
    std::cout << "n + 5 =" << n+5 << '\n';
    std::cout << "면적은 " << area(n);

    return 0;
}