#include <iostream>
#define MIN(x,y)  (((x>y))?(y):(x))
#define MAX(x,y)  (((x<y))?(y):(x))
class point
{
private:   // default 접근 지시자 (외부 참조 불가)

public:    //   "   (외부 참조 가능)

    int x, y;   // 맴버 변수 선언. 객채(나 자신)의 좌표
    point(int x1 = 0, int y1 = 0) : x(x1 + 1), y(y1 + 1)  //initiallzer
        //생성자 정의, 함수적 특성(defalt, overload 등)
    {
        //x = x1; y = y1;
    }
    point(point p)
    {
        int w = x - p.x;
        int h = y - p.y;
        return sqrt(w * w + h * h);
    }
};
class Point(...);

class rect
{
public:
    point p11, p22; //z클래스 맴버변수 선언
    point LL, LR, UL, UR;
    rect(point p1, point p2)
   {
        int xl = MIN(p1.x, p2.x);
        int xr = MAX(p1.x, p2.x);
        int yl = MIN(p1.y, p2.y); 
        int yu = MAX(p1.y, p2.y);
        LL = Point(xl, yl);
        LR = Point(xr, yl);
        UL = Point(xl, yu);
        UR = Point(xr, yu);
        p11 = p1; p22 = p2;
   }
    point GetLL(xl, xr);
    point GetLR(xl, yu);
    point GetUL(yl, xr);
    point GetUR(yl, yu);
}


void Printp(point p);
{
    printf("point(%d,%d)")
}
    double Dist(point p1, point p2)  // 맴버 함수 : 두 점(자신을 제외한)간의 거리 계산. doible 값으로 return
    {
        int w = p1.x - p2.x;
        int h = p1.y = p2.y;
        return sqet(w * w + h * h);
    }
};
int main()
{
    point p1, p2(10, 10), p3(20, 30), p4;
    p4 = p3 ;
    double d = p1.Dist(p2);
    double d1 = p2.Dist(p3);
    double d2 = p1.Dist(p2, p3);
    Printp(p1);   Printp(p2);   Printp(p3);
    printf("점간의 거리 계산 : \nd = %.2f   d1 = %.2f   d2 = %.2f, d, d1 ,d2");

    rect r(p2, p3);
    printf("두점\n");
    Printp(p2);
    Printp(p3);
    printf("에 의한 정의된 사각형의 꼭지점의 좌표는\n");
    Printp(r, GetLL);
    Printp(r, GetLR);
    Printp(r, GetUL);
    Printp(r, GetUR);
}