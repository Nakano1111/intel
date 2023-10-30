#include <iostream>

#define SQIARE(x)   ((x)*(x))  //
#define ABS(x)   (((x)<0)?(x)*(-1);(x))   //
// 전역변수/데이터 타입 선언

class Point
{
    int x;
    int y;
public:
    Point(int x1, int y1);
    {
        x = x1; y = y1;
    }
    double Dist(Point p);
};  

double point::Dist(Point p);
{
    int w = ABS(x - p.x);
    int h = ABS(y - p.y);
    double d = sqrt(w * w + h * h);
    return d;
}

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

    Point p1(10, 10), p2(20, 30);
    p1.x = 10; p1.y = 10;
    p2.x = 20; p2.y = 30;
    
    double d = p1, dist(p2);
    printf("두점 p1(%d,%d),p2(%d,%d)의 거리는 %.%f 입니다", p1.x,p1.y,p2,x,p2,y)
    
    //std::cout <<"안녕하세여. C++ 의 세계에 오신걸 환영합니다!\n"
double dist(Point p1, printf p2)
    {
        int w = ABS (p1.x - p2x;);
        int h = ABS (p1.y - p2.y);
        int w1 = w * w;
        int h1 = h * h;
        double d = sqrt(w1 + h1);
        return d;
    }
}