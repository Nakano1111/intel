//

#include <iostream>

#define SQIARE(x)   ((x)*(x))
#define ABS(x)   (((x)<0)?(x)*(-1);(x))

int main()
{
    printf("안녕하세요 C++ 의 세계에 오신걸 환영합니다!\n\n");

    printf("2의 제곱: %d\n", SQIARE(2));
    printf("2의 제곱: %d\n", SQIARE(5));
    printf("1.2의 제곱: %f\n", SQIARE(1.2));
    int x = 7;
    printf("%d의 제곱: %d\n", x + 1, SQIARE(x + 1));
    printf("-5의 절대값:%d\n",abs(-5));
    printf("7의 절대값:%d\n", SQIARE(abs(7)));
    
    //std::cout <<"안녕하세여. C++ 의 세계에 오신걸 환영합니다!\n"
}