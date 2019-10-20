// В космонавты берут не всех.
// Главным критерием отбора в космонавты является рост кандидата.
// Приемлимый рост кандидата в космонавты:
// НЕ МЕНЬШЕ 150 см и НЕ БОЛЬШЕ 190.
// Необходимо ответить на вопрос - подходят ли кандидаты в космонавты
// по механическому критерию.

// На вход программе подается несколько значений роста кандидатов в космонавты.
// Ваша задача - вывести на консоль количество отобранных кандидатов. А также
// МАКСИМАЛЬНЫЙ и МИНИМАЛЬНЫЙ рост отобранных кандидатов.
// Программа должна выполнять считывание данных ДО ТЕХ ПОР, ПОКА НЕ ВВЕДЕНО
// ОТРИЦАТЕЛЬНОЕ ЗНАЧЕНИЕ РОСТА
#include <iostream>

using namespace std;

int main(){
    int h;
    int min_h = 150;
    int max_h = 190;
    int count = 0;

    int cand_max = -9999;
    int cand_min = 9999;

    cout<<"Enter H of candidate: ";
    cin >> h;
    while (h >= 0){
        if (h >= min_h && h <= max_h){
            count++;
            if (h > cand_max){
                cand_max = h;
            }
            if (h < cand_min){
                cand_min = h;
            }
        }
        cout<<"Enter H of candidate: ";
        cin >> h;
        
    }
    cout << "Total amount of valid candidates : "<<count<<endl;
    cout<<"Metrics: Max H is : "<<cand_max<<"    "<<"Min H is: "<<cand_min<<endl;

    return 0;
}