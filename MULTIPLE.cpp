#include<iostream.h>
#include<conio.h>
class A
{
protected:
int m;
public:
void getm(int);
void putm();
};
void A::getm(int x)
{
m=x;
}
void A::putm()
{
cout<<"m="<<m<<endl;
}
class B
{
protected:
int n;
public:
void getn(int);
void putn();
};
void B:: getn(int y)
{
n=y;
}
void B:: putn()
{
cout<<"n="<<n<<endl;
}
class C:public A, public B
{
int total;
public:
void disp();
};
void C:: disp()
{
getm(26);
getn(65);
putm();
putn();
total=m+n;
cout<<"Total is"<<total;
}
void main()
{
C o1;
clrscr();
o1.disp();
getch();}
