
#include <iostream>
using namespace std;

int main()
{
    //обьявляем переменные
    double R1, R2;
    double S1, S2, S3;
    // считываем радиусы
    cin >> R1 >> R2;
    //считываем площади
    const double PI = 3.14;
    S1 = PI * R1 * R1;
    S2 = PI * R2 * R2;
    S3 = S1 - S2;
    //выводим результат
    cout << "Begin10" << endl;
    cout << "S1 =" << S1 << endl;
    cout << "S2 =" << S2 << endl;
    cout << "S3 =" << S3 << endl;
     
         double V1, V2, S, T; //обьявляем переменные
    
    cin >> V1 >> V2 >> S >> T; // Ввод переменных
    
    double L =  T*(V1+V2); // вычисление общего пути
    double D = abs(S - L); // вычисление расстояние, abs - модуль
    
    cout << "Begin28" << endl;
    cout << " расстояние через T часов: " << D << endl;
    
    
    
        double V_km; //обьяыляем скорость  км/ч
    cin >> V_km; 
    
    double V_ms = V_km * 1000.0 / 3600.0;  // считаем скорость
    
    cout << "Begin39" << endl;
    cout << "скорость в м/с =" << V_ms << endl; // выводим
    
    
    
    

}