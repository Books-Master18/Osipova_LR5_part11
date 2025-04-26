#include <iostream>
#include "Osipova_MathTask.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    int NumberA = 0, NumberB = 0;
    enterNumber(NumberA, "Введите сторону А");
    enterNumber(NumberB, "Введите сторону В");
    int RectangleArea = CalcRectangleArea(NumberA, NumberB);
    cout << "Площадь прямоугольника равна: " << RectangleArea << endl;
}