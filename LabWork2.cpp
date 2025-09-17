
#include <iostream>
using namespace std;

int main()
{
    cout << "Begin10" << endl;
    //об'являємо змінні
    double R1, R2;
    double S1, S2, S3;
    // вводимо радіуси
    cin >> R1 >> R2;
    //вираховуємо площу
    const double PI = 3.14;
    S1 = PI * R1 * R1;
    S2 = PI * R2 * R2;
    S3 = S1 - S2;
    //виводимо результат
    cout << "S1 =" << S1 << endl;
    cout << "S2 =" << S2 << endl;
    cout << "S3 =" << S3 << endl;


    cout << "Begin28" << endl;
    double V1, V2, S, T; //об'являємо змінні
    cin >> V1 >> V2 >> S >> T; // вводимо змінні
    double L =  T*(V1+V2); // обчислення всього шляху
    double D = abs(S - L); // обчислення відстані, abs - модуль
    cout << " відстань через T часов: " << D << endl;
    
    
    cout << "Begin39" << endl;
    double V_km; //об'являємо швидкість
    cin >> V_km; // вводимо швидкість
    double V_ms = V_km * 1000.0 / 3600.0;  // вирахунок
    cout << "швидкість в м/с =" << V_ms << endl; // виводимо
    
    return 0;
}