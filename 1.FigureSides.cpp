// 1.FigureSides.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>

class Figure {
protected:
    unsigned int sides_count;
    std::string name;
public:
    Figure() {
        sides_count = 0;
        name = "Figure";
    }
    void get_sides_count(int _sides_count) {
        sides_count = _sides_count;
    };
    void get_name(std::string _name) {
        name = _name;
    };
    void show() {
        std::cout << name << ": " << sides_count << std::endl;
    }
};

class Triangle : public Figure {
public:
    Triangle() {
        sides_count = 3;
        name = "Triangle";
    }
};

class Quadraangle : public Figure {
public:
    Quadraangle() {
        sides_count = 4;
        name = "Quadraangle";
    }
};

int main()
{
    std::cout << "Count of sides: " << std::endl;
    Figure figure;
    figure.show();

    Triangle triangle;
    triangle.show();

    Quadraangle quadraangle;
    quadraangle.show();
}