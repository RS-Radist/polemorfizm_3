//Создать абстрактный базовый класс с виртуальной функцией - площадь. Создать производные классы: прямоугольник, круг, прямоугольный треугольник, трапеция со своими функциями площади. Для проверки определить массив ссылок на абстрактный класс, которым присваиваются адреса различных объектов. Площадь трапеции:S=(a+b)h/2

#include <iostream>
class Math
{
    public:
        virtual int Square()
        {
            return -1;
        }
    
};
class Rectangle : public Math
{
public:
    int Square()
    {
        int a=10;
        int b=30;
        int w;
        w=a*b;
        return w;
    }
};
class Cirlce  : public Math
{
public:
    int Square()
    {
        int a=30;
        int e;
        e=3.14*a*a;
        return e;
    }
};
class Triangle : public Math
{
public:
    int Square()
    {
        int a=2;
        int b=5;
        int o;
        o=a*b/2;
        return o;
    }
};
class Trapeze : public Math
{
public:
    int Square()
    {
        int a=5;
        int b=10;
        int h=2;
        int S;
        S=(a+b)*h/2;
        return S;
    }
};


int main()
{
    Rectangle rectangle;
    Cirlce circle;
    Triangle triangle;
    Trapeze trapeze;

    Math* mas[4];

    mas[0]=new Rectangle;
    mas[1]=new Cirlce;
    mas[2]=new Triangle;
    mas[3]=new Trapeze;
    for(int i=0;i<4;++i)
        std::cout<<&mas[i]<<std::endl;
    std::cout<<"Площадь\n";
    for(int i=0;i<4;++i)
        std::cout<<mas[i]->Square()<<std::endl;
    
}
