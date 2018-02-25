//Создать абстрактный базовый класс с виртуальной функцией - площадь. Создать производные классы: прямоугольник, круг, прямоугольный треугольник, трапеция со своими функциями площади. Для проверки определить массив ссылок на абстрактный класс, которым присваиваются адреса различных объектов. Площадь трапеции:S=(a+b)h/2

#include <iostream>
class Math
{
    public:
    virtual int Square()=0;
};
class Rectangle : public Math
{
    int a,b,w;
public:
    Rectangle(int _a, int _b):a(_a),b(_b)
    {
        w=a*b;
    }
    int Square()
    {
        return w;
    }
};
class Cirlce  : public Math
{
    int a,e;
public:
    Cirlce(int _a):a(_a)
    {
        e=3.14*a*a;
    }
    int Square()
    {
        return e;
    }
};
class Triangle : public Math
{
    int a,b,o;
public:
    Triangle(int _a,int _b):a(_a),b(_b)
    {
        o=a*b/2;
    }
    int Square()
    {
        return o;
    }
};
class Trapeze : public Math
{
    int a,b,h,S;
public:
    Trapeze(int _a,int _b,int _h):a(_a),b(_b),h(_h)
    {
        S=(a+b)*h/2;
    }
    int Square()
    {
        return S;
    }
};


int main()
{
    Math* mas[4];
    mas[0]=new Rectangle(10,2);
    mas[1]=new Cirlce(33);
    mas[2]=new Triangle(10,5);
    mas[3]=new Trapeze(5,10,2);
    for(int i=0;i<4;++i)
        std::cout<<&mas[i]<<std::endl;
    std::cout<<"Площадь\n";
    for(int i=0;i<4;++i)
        std::cout<<mas[i]->Square()<<std::endl;
    
}
