// #include <iostream>
#include <cmath>
#include "vector_evklid.hpp"
// using namespace std;

    // Конструкторы
template<typename T>
Vector3D<T>::Vector3D(){x = 0; y = 0; z=0;};
template<typename T>
Vector3D<T>::Vector3D(T x, T y, T z): x(x), y(y), z(z){};
    // Деструктор
template<typename T>
Vector3D<T>::~Vector3D(){};

    // Получение координат
template<typename T>
T Vector3D<T>::getX() const {return x;};
template<typename T>
T Vector3D<T>::getY() const {return y;};
template<typename T>
T Vector3D<T>::getZ() const {return z;};
    // Задание координат
template<typename T>
void Vector3D<T>::setX(T x) {this->x = x;};
template<typename T>
void Vector3D<T>::setY(T y) {this->y = y;};
template<typename T>
void Vector3D<T>::setZ(T z) {this->z = z;};

    // Перегруженные операторы
template<typename T>
bool Vector3D<T>::operator== (const Vector3D<T>& v2) const {
        return (this->x == v2.x)&&(this->y == v2.y)&&(this->z == v2.z);
    };
template<typename T>
bool Vector3D<T>::operator!= (const Vector3D<T>& v2) const {
        return (this->x != v2.x)||(this->y != v2.y)||(this->z != v2.z);
    };
template<typename T>
Vector3D<T> Vector3D<T>::operator+ (const Vector3D<T>& v2) const {
        return Vector3D<T>(this->x + v2.x, this->y + v2.y, this->z + v2.z);
    };
template<typename T>
Vector3D<T> Vector3D<T>::operator- (const Vector3D<T>& v2) const {
        return Vector3D<T>(this->x - v2.x, this->y - v2.y, this->z - v2.z);
    };
template<typename T>
Vector3D<T> Vector3D<T>::operator* (const T a) const {
        return Vector3D<T>(this->x * a, this->y * a, this->z * a);
    };

// Оператор умножения скаляра на вектор
template<typename T1, typename T2>
Vector3D<T1> operator* (T2 a, const Vector3D<T1>& v){
    return Vector3D<T1>(v.getX() * T1(a), v.getY() * T1(a), v.getZ() * T1(a));
};
// Вывод вектора, ожидается строго в формате (1; 1; 1)
template<typename T>
std::ostream& operator<<(std::ostream& os, const Vector3D<T>& v){
    os << "(" << v.getX() << "; " << v.getY() << "; " << v.getZ() << ")";
    return os;
};

// Чтение вектора
template<typename T>
std::istream& operator>>(std::istream &is, Vector3D<T>& v){
    T x,y;
    is >> x >> y;
    v.setX(x);
    v.setY(y);
    v.setZ(z);
    return is;
};

// Модуль вектора
template<typename T>
T abs(Vector3D<T>& v){
    return pow(v.getX()*v.getX() + v.getY()*v.getY() + v.getZ()*v.getZ(), 0.5);
};