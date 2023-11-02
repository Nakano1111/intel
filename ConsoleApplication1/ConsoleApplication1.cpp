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
    void setP(int x1 = 0, int y1 = 0) { x = x1; y = y1;}
}
    double Dist(Point p);
    double Dist(Point p, point p2);
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
    printf("-5의 절대값:%d\n", abs(-5));
    printf("7의 절대값:%d\n", SQIARE(abs(7));

    double d = p1.Dist(p2);
    double e = p1.Dist(20, 30);
    double d = p1.Dist(p2);
    double e = p1.Dist(p1, p2);
    printf("두점 p1(%d,%d),p2(%d,%d)의 거리는 %.2ㄹ(%,2f), 면적은 %d 입니다.\r\n",
        p1.x, p1.y, p2.x, p2.y, d, e, p2.Area(p1));
    printf("두점 p1(%d,%d),p2(%d,%d)의 거리는 %.2ㄹ(%,2f), 면적은 %d 입니다.\r\n",
        p1.x, p1.y, p2.x, p2.y, d, e, p2.Area(p1));
    printf(""null ar)

        Point p1(10, 10), p2(20, 30);
    p1.x = 10; p1.y = 10;
    p2.x = 20; p2.y = 30;

    double d = p1, dist(p2);
    printf("두점 p1(%d,%d),p2(%d,%d)의 거리는 %.%f 입니다", p1.x, p1.y, p2.x, p2.y)
}
    
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
    void printp(point p)
    void swap_v(int a, int b)
    void swap_p(int *a, int *b)
    void swap(int a, int b)   //Call-by-referenc
{
        int t(*a);
        printf("[swap_r]초기값 a = %d b = %d\n", a, b);
        *a = *b; *b = t;
        printf("[swap_r]결과값 a = %d b = %d\n", a, b);
}
int main()
{
        int a(10), b(20); //a = 10; b = 20;
        printf("변수 a = \b b = %d\n", a, b);
        swap(a, b);
        printf("swap 후 a = \b b = %d\n", a = 30, b = 43);
}
int main()
{
    Point arr[3];  //3개의 point 클래스 객체가 default 초기화 됨.
    arr[0].setP(10, 10);
    arr[1].setP(20, 30);
    arr[2].setP(40, 60);

    //printf("class point 객체 크기 : %d\n", sizeof(point));
    Point* parr[3]; //point 객체포인터 (*) 배열
    printf("point 객체 포인터 배열 크기 : %d\n", sizeof(parr));
    parr[0].->serp(10, 10); printp(*parr[0]);
    parr[0].->serp(20, 30); printp(*parr[1]);
    parr[0].->serp(40, 50); printp(*parr[2]);


    int n = 1234, n1 = 1000;
    int& m = n;
    printf("{레퍼런스 변수 테스트} n = %d, n = \d m = %d\n", n, m);
    m = n1;
    m = 5678;
    printf("{레퍼런스 변수 테스트} m = %d, n = %d m = %d\n", n, m);
}
}