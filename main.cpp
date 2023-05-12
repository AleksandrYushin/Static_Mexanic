#include <iostream>
#include "vector_evklid.hpp"
using namespace std;
//Среда взаимодействия с пользователем
//
//
//
int main(){
    Vector3D <int> asdfdgf = {1, 1, 1};
    string td_sistem;
    cout << "Какую систему моделируем?" << endl;
    cout << "igas - идеальный газ" << endl;
    cout << "bgas - газ Ван-дер-Ваальса" << endl;
    cout << "rgas - реальный газ" << endl;
    cin >> td_sistem;
    string td_sistem_type;
    if (td_sistem == "igas"){
        cout << "Наличие размера(точка/шар), контактное взаимодействие, гравитация" << endl;
        cin >> td_sistem_type;
    }
    
    string model;
    cout << "Какой моделю пользуемся?" << endl;
    cout << "mexanic - механическая" << endl;
    cout << "static - статистической механикой" << endl;
    cin >> model;

    int N;
    cout << "Число частиц?" << endl;
    cin >> N;
    cout << td_sistem << " , " << model << " , " << N << endl;
}