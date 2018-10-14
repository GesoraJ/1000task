#include <iostream>
#include <cmath>
#define PI 3.14
using namespace std;
void BG1(int a)
{
    cout<<" Begin1"<<endl<<4*a<<endl;
}

void BG2(int a)
{
    cout<<" Begin2"<<endl<<pow(a,2)<<endl;
}

void BG3(int a,int b)
{
    cout<<" Begin3"<<endl<<a*b<<endl<<2*(a+b)<<endl;
}

void BG4(int a)
{
    cout<<" Begin4"<<endl<<a*PI<<endl;
}

void BG5(int a)
{
    cout<<" Begin5"<<endl<<pow(a,3)<<endl<<6*pow(a,2)<<endl;
}

void BG6(int a,int b,int c)
{
    cout<<" Begin6"<<endl<<a*b*c<<endl<<2*(a*b+b*c+a*c)<<endl;
}

void BG7(int r)
{
    cout<<" Begin7"<<endl<<2*PI*r<<endl<<PI*pow(r,2)<<endl;
}

void BG8(int a,int b)
{
    cout<<" Begin8"<<endl<<(a+b)/2<<endl;
}

void BG9(int a, int b)
{
    cout<<" Begin9"<<endl<<sqrt(a*b)<<endl;
}

void BG10(int a, int b)
{
    pow(a,2);
    pow(b,2);
    cout<<" Begin10"<<endl<<a+b<<endl<<a-b<<endl<<a*b<<endl<<a/b<<endl;
}

void BG11(int a, int b)
{
    abs(a);
    abs(b);
    cout<<" Begin11"<<endl<<a+b<<endl<<a-b<<endl<<a*b<<endl<<a/b<<endl;
}
void BG12(int a, int b,int c)
{
    cout<<" Begin12"<<endl<<sqrt(pow(a,2)+pow(b,2))<<endl<<a+b+c<<endl;
}
void BG13(int r1, int r2)
{
    double s1=PI*pow(r1,2);
    double s2=PI*pow(r2,2);
    cout<<" Begin13"<<endl<<s1<<endl<<s2<<endl<<s1-s2<<endl;
}
void BG14(double l)
{
    double r = l / (2*PI);
    double s = PI * pow(r,2);
    cout<<" Begin13"<<endl<<r<<endl<<s<<endl;
}
void BG15(int s)
{
    double d = sqrt(s/PI)*(1.0/2.0);
    double l = PI*d;
    cout<<" Begin14"<<endl<<d<<endl<<l<<endl;
}
void BG16(double x1, double x2)
{
    cout<<" Begin 16"<<endl<<abs(x2-x1)<<endl;
}
void BG17(int a, int b, int c)
{
    int ac = abs(c-a);
    int bc = abs(b-a);
    int sum = ac + bc;
    cout<<" Begin 17"<<endl<<ac<<endl<<bc<<endl<<sum<<endl;
}
void BG18(int a, int b, int c)
{
    cout<<" Begin 18"<<endl<<abs(c-a)*abs(c-b)<<endl;
}
void BG19(int x1, int x2, int y1, int y2)
{
    int a = y2-y1;
    int b = x2-x1;
    int p = 2*(a+b);
    int s = a*b;
    cout<<" Begin 19"<<endl<<p<<endl<<s<<endl;
}
void BG20(int x1, int x2, int y1, int y2)
{
    int a = pow((x2-x1),2);
    int b = pow((y2-y1),2);
    int c = sqrt(a+b);
    cout<<" Begin 20"<<endl<<c<<endl;
}
void BG21(int x1, int x2, int x3, int y1, int y2, int y3)
{
    int a = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    int b = sqrt(pow((x3-x2),2)+pow((y3-y2),2));
    int c = sqrt(pow((x1-x3),2)+pow((y1-y3),2));
    int p = (a+b+c)/2;
    int per = p*2;
    int s = sqrt(p*(p-a)*(p-b)*(p-c));
    cout<<" Begin 21"<<endl<<per<<endl<<s<<endl;
}
void BG22(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout<<" Begin 22"<<endl<<a<<endl<<b<<endl;
}
void BG23(int a, int b, int c)
{
    int temp = c;
    b = a;
    c = b;
    a = temp;
    cout<<" Begin 23"<<endl<<a<<endl<<b<<endl<<c<<endl;
}
void BG24(int a, int b, int c)
{
    int temp = b;
    c = a;
    b = c;
    a = temp;
    cout<<" Begin 24"<<endl<<a<<endl<<b<<endl<<c<<endl;
}
void BG25(int x)
{
    int y = 3*pow(x,6)-6*pow(x,2)-7;
    cout<<" Begin 25"<<endl<<y<<endl;
}
void BG26(int x)
{
    int y = 4*pow((x-3),6)-7*pow((x-3),3)+2;
    cout<<" Begin 26"<<endl<<y<<endl;
}
void BG27(int a)
{
    int a2 = a*a;
    int a4 = a2*a2;
    int a8 = a4*a4;
    cout<<" Begin 27"<<endl<<a2<<endl<<a4<<endl<<a8<<endl;
}
void BG28(int a)
{
    int a2 = pow(a,2);
    int a3 = a2*a;
    int a5 = a3*a2;
    int a10 = a5*a5;
    int a15 = a5*a10;
    cout<<" Begin 28"<<endl<<a2<<endl<<a3<<endl<<a5<<endl<<a10<<endl<<a15<<endl;
}
void BG29(double a)
{
    double rad = (a*PI)/180;
    cout<<" Begin 29"<<endl<<rad<<endl;
}
void BG30(double a)
{
    double rad = 180*a/PI;
    cout<<" Begin 30"<<endl<<rad<<endl;
}
void BG31(double t)
{
    double c = (t-32)*5/9;
    cout<<" Begin 31"<<endl<<c<<endl;
}
void BG32(double c)
{
    double t = (c*9/5)+32;
    cout<<" Begin 32"<<endl<<t<<endl;
}
void BG33(double x, double a, double y)
{
    double x1 = a/x;
    double ykg = y*x1;
    cout<<" Begin 33"<<endl<<x1<<endl<<ykg<<endl;
}
void BG34(double x, double a, double y, double b)
{
    double choc1 = a/x;
    double iris1 = b/y;
    cout<<" Begin 34"<<endl<<iris1/choc1<<endl;
}
void BG35(double v, double u, double t1, double t2)
{
    double s = t1*v+t2*(v-u);
    cout<<" Begin 35"<<endl<<s<<endl;
}
void BG36(double v1, double v2, double s, double t)
{
    double v3 = v1+v2;
    cout<<" Begin 36"<<endl<<s+t*v3<<endl;
}
void BG37(double v1, double v2, double s, double t)
{
    cout<<" Begin 37"<<endl<<abs(s-(v1+v2)*t)<<endl;
}
void BG38(double a, double b)
{
    cout<<" Begin 38"<<endl<<-b/a<<endl;
}
void BG39(double a, double b, double c)
{
    double d = pow(b,2)-4*a*c;
    if(d>0)
    {
        double x1 = (-b-sqrt(d))/(2*a);
        double x2 = (-b+sqrt(d))/(2*a);
        cout<<" Begin 39"<<endl<<min(x1,x2)<<endl<<max(x1,x2)<<endl;
    }
    else
    {
        cout<<" Begin 39"<<endl<<"D < 0"<<endl;
    }
}
void BG40(double a1, double b1, double c1, double a2, double b2, double c2)
{
    double d = a1*b2-a2*b1;
    if(d>0)
    {
        double x = (c1*b2 - c2*b1)/d;
        double y = (a1*c2-a2*c1)/d;
        cout<<" Begin 40"<<endl<<x<<endl<<y<<endl;
    }
    else
    {
        cout<<" Begin 40"<<endl<<"D < 0"<<endl;
    }
}
int main()
{
    BG1(4);
    BG2(2);
    BG3(2,4);
    BG4(2);
    BG5(5);
    BG6(5,3,6);
    BG7(5);
    BG8(2,8);
    BG9(5,7);
    BG10(6,8);
    BG11(4,6);
    BG12(2,6,8);
    BG13(5,9);
    BG14(35);
    BG15(6);
    BG16(6,3);
    BG17(4,5,7);
    BG18(3,4,5);
    BG19(6,13,22,30);
    BG20(15,21,23,62);
    BG21(5,2,11,14,17,22);
    BG22(5,7);
    BG23(1,2,3);
    BG24(4,5,6);
    BG25(7);
    BG26(8);
    BG27(9);
    BG28(10);
    BG29(11);
    BG30(12);
    BG31(13);
    BG32(14);
    BG33(3,4,6);
    BG34(4,5,7,11);
    BG35(11,22,33,44);
    BG36(22,33,44,55);
    BG37(9,10,11,12);
    BG38(5,5);
    BG39(6,6,6);
    BG40(3,4,13,14,23,24);
}

