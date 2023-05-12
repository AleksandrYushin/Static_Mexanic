#ifndef _VECTOR_EVKLID_
#define _VECTOR_EVKLID_

#include <iostream>
using namespace std;

template<typename T>
class Vector3D{
public:
    // Конструкторы
    Vector3D();
    Vector3D(T x, T y, T z);
    // Деструктор
    ~Vector3D();

    // Получение координат
    T getX() const;
    T getY() const;
    T getZ() const;
    // Задание координат
    void setX(T x);
    void setY(T y);
    void setZ(T z);

    // Перегруженные операторы
    bool operator== (const Vector3D<T>& v2) const;
    bool operator!= (const Vector3D<T>& v2) const;
    Vector3D<T> operator+ (const Vector3D<T>& v2) const;
    Vector3D<T> operator- (const Vector3D<T>& v2) const;
    Vector3D<T> operator* (const T a) const;
private:
    T x;
    T y;
    T z;
};

// Оператор умножения скаляра на вектор
template<typename T1, typename T2>
Vector3D<T1> operator* (T2 a, const Vector3D<T1>& v);
// Вывод вектора, ожидается строго в формате (1; 1; 1)
template<typename T>
std::ostream& operator<<(std::ostream& os, const Vector3D<T>& v);

// Чтение вектора
template<typename T>
std::istream& operator>>(std::istream &is, Vector3D<T>& v);

// Модуль вектора
template<typename T>
T abs(Vector3D<T> v);

#endif