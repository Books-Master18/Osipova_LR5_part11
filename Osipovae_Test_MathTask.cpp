#include "CUTE/cute/cute.h"
#include "CUTE/cute/ide_listener.h"
#include "CUTE/cute/cute_runner.h"
//подключение модуля с тестируемыми методами 
#include "Osipova_MathTask.h" 

using namespace cute;

void testCalcRectangleArea() {
    int a = 3;
    int b = 5;
    
    int expected = 15;
    
    // получение значения с помощью тестируемого метода 
    
    int actual = CalcRectangleArea(a, b); 
    
    // сравнение ожидаемого результата с полученным

    ASSERT_EQUAL(expected, actual);
}

int main(){
    suite s;
    s.push_back(CUTE(testCalcRectangleArea));
    
    ide_listener<> listener;
    makeRunner(listener)(s, "Test CalcReactangleArea");

return 0;

}