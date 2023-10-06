#include "Vector4.h"

// Constructor por defecto
Vector4::Vector4() : resulta(0.0f), resultb(0.0f), resultc(0.0f), resultd(0.0f), a(0.0f), b(0.0f), c(0.0f), d(0.0f)
{
}
// Destructor por defecto
Vector4::~Vector4()
{
}

void Vector4::setVector4(float _a, float _b, float _c, float _d)
{
    a = _a;
    b = _b;
    c = _c;
    d = _d;
    // Establece los valores del vector 4D a los valores proporcionados.
}

void Vector4::dotPro (Vector4 _vec)
{
    resulta = a * _vec.a;
    resultb = b * _vec.b;
    resultc = c * _vec.c;
    resultd = d * _vec.d;
    resulta = resulta + resultb + resultc + resultd;
    // Realiza el producto escalar con otro vector 4D y almacena el resultado en resulta.

}

void Vector4::crossPro (Vector4 _vec)
{
    resulta = a * _vec.a;
    resultb = b * _vec.b;
    resultc = c * _vec.c;
    resultd = d * _vec.d; 
    resulta = (resulta + resultb + resultc + resultd); 
    if (resulta == 0) 
    {
        cout << "Los dos vectores 4D sí se pueden calcular " << endl;
    }
    else { 
        cout << "Los dos vectores 4D no se pueden calcular " << endl;
    }
    // Realiza el producto cruz con otro vector 4D y verifica si es igual a 0.

}

void Vector4::Add(Vector4 _vec)
{
    resulta = a + _vec.a;
    resultb = b + _vec.b;
    resultc = c + _vec.c;
    resultd = d + _vec.d;
    // Realiza la suma de dos vectores 4D y almacena el resultado en resulta.

}

void Vector4::Sub (Vector4 _vec)
{
    resulta = a - _vec.a;
    resultb = b - _vec.b;
    resultc = c - _vec.c;
    resultd = d - _vec.d;
    // Realiza la resta de dos vectores 4D y almacena el resultado en resulta.

}

void Vector4::Mul  (Vector4 _vec)
{
    resulta = a * _vec.a;
    resultb = b * _vec.b;
    resultc = c * _vec.c;
    resultd = d * _vec.d;
    // Realiza la multiplicación de dos vectores 4D y almacena el resultado en resulta.

}

void Vector4::Div (Vector4 _vec)
{
    resulta = a / _vec.a;
    resultb = b / _vec.b;
    resultc = c / _vec.c;
    resultd = d / _vec.d;
    // Realiza la división de dos vectores 4D y almacena el resultado en resulta.

}

void Vector4::Mag(Vector4 _vec)
{
    resulta = sqrt(a * _vec.a);
    resultb = sqrt(b * _vec.b);
    resultc = sqrt(c * _vec.c);
    resultc = sqrt(d * _vec.d);
    resulta = resulta + resultb + resultc + resultd; 
    // Calcula la magnitud de un vector 4D y almacena el resultado en resulta.

}

void Vector4::Normal(Vector4 _vec)
{
    resulta = sqrt(a * _vec.a);
    resultb = sqrt(b * _vec.b);
    resultc = sqrt(c * _vec.c);
    resulta = resulta + resultb + resultc;

    resultb = (a / resulta, b / resulta, c / resultc, d / resultd);
    // Calcula el vector normalizado (unidad) de un vector 4D y almacena el resultado en resulta y resultb.
}