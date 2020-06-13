
#include <iostream>
#include <cmath>
#include <vector>
#include "IGeoFig.h"

int main (){
    std::vector <BaseClass*> geoObjects;
    int number;
    std::cout << "Введите количество фигур " << std::endl;
    std::cin >> number;
    if (number > 0){
        std::cout << "Тип i-ой фигуры\n"
                     "1: Hexagon\n"
                     "2: Equilateral triangle" << std::endl;

        for (int i = 0; i <= number-1; i++) {
            int type;
            do {
                std::cout << "Введите тип фигуры: ";
                std::cin >> type;
                std::cout << std::endl;
            }
            while (!(type == 1 || type == 2));

            if (type == 1)
                geoObjects.push_back (new Hexagon);
            else if (type == 2)
                geoObjects.push_back (new EquilateralTriangle);


            geoObjects.back()->initFromDialog();
        }
    }
    unsigned short command;

    std::cout << "Commands\n"
                 "1. Параметры всех фигур\n"
                 "2. Общая площадь\n"
                 "3. Общий периметр\n"
                 "4. Занимаемая память\n"
                 "5. Центр масс\n"
                 "6. Сортировка по массе\n"
                 "7. Выход\n" << std::endl;

    std::cout << std::endl;

    while (std::cin >> command) {
        if (command == 1) {
            for (auto i : geoObjects) {
                int k = 0;
                std::cout << ++k << ". " << i->classname() << std::endl;
                i->draw();
            }
        }
        else if (command == 2) {
            std::cout << "Сумма квадратов: ";
            double sumS;
            for (auto i : geoObjects) {
                sumS += i->square();
            }
            std::cout << sumS << std::endl;
        }
        else if (command == 3){
            std::cout << "Сумма периметров: ";
            double sumP;
            for (auto i : geoObjects) {
                sumP += i->perimeter();
            }
            std::cout << sumP << "\n\n" << std::endl;
        }
        else if (command == 4){
            std::cout << "Занимаемая память: ";
            int memory;
            for (auto i : geoObjects) {
                memory += i->size();
            }
            std::cout << memory << "\n\n" << std::endl;
        }
        else if (command == 5){
            std::cout << "Центр масс объекта: ";
            CVector2D centre;
            double massSum = 0;
            for (auto i : geoObjects) {
                centre.AB.x += i->position().AB.x * i->mass();
                centre.AB.y += i->position().AB.y * i->mass();
                massSum += i->mass();
            }
            centre.AB.x /= massSum;
            centre.AB.y /= massSum;
            std::cout << "Центр масс: ";
            std::cout << massSum;
            std::cout << std::endl;
        }
        else if (command == 6){
            sort(geoObjects.begin(), geoObjects.end(), [](BaseClass* x, BaseClass* y){return *x < *y;});
            std::cout << "Остортировано" << std::endl;
        }
        else if (command == 7) {
            for (auto &geoObject : geoObjects) {
                delete geoObject;
            }
            return 0;
        }
    }
};