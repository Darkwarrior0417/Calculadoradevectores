#include "Vector3.h"

// Inicialización de las variables miembro en el constructor
Vector3::Vector3() : resulta(0.0f), resultb(0.0f), resultc(0.0f), a(0.0f), b(0.0f), c(0.0f)
{
    // Constructor de la clase Vector3, inicializa las variables miembro.
}

Vector3::~Vector3()
{
    // Destructor de la clase Vector3, no realiza ninguna acción.
}

void Vector3::setVector3(float _a, float _b, float _c)
{
    // Función para establecer los valores del vector 3D.
    a = _a;
    b = _b;
    c = _c;
}

void Vector3::dotPro(Vector3 _vec)
{
    // Función para calcular el producto punto con otro vector 3D y almacenar el resultado.
    resulta = a * _vec.a;
    resultb = b * _vec.b;
    resultc = c * _vec.c;
    resulta = resulta + resultb + resultc;
}

void Vector3::crossPro(Vector3 _vec)
{
    // Función para calcular el producto cruz con otro vector 3D y actualizar el vector actual.
    resulta = (b * _vec.c) - (c * _vec.b);
    resultb = (c * _vec.a) - (a * _vec.c);
    resultc = (a * _vec.b) - (b * _vec.a);
}

void Vector3::Add(Vector3 _vec)
{
    // Función para realizar la suma con otro vector 3D y actualizar el vector actual.
    resulta = a + _vec.a;
    resultb = b + _vec.b;
    resultc = c + _vec.c;
}

void Vector3::Sub(Vector3 _vec)
{
    // Función para realizar la resta con otro vector 3D y actualizar el vector actual.
    resulta = a - _vec.a;
    resultb = b - _vec.b;
    resultc = c - _vec.c;
}

void Vector3::Mul(Vector3 _vec)
{
    // Función para realizar la multiplicación con otro vector 3D y actualizar el vector actual.
    resulta = a * _vec.a;
    resultb = b * _vec.b;
    resultc = c * _vec.c;
}

void Vector3::Div(Vector3 _vec)
{
    // Función para realizar la división con otro vector 3D y actualizar el vector actual.
    resulta = a / _vec.a;
    resultb = b / _vec.b;
    resultc = c / _vec.c;
}

void Vector3::Mag(Vector3 _vec)
{
    // Función para calcular la magnitud del vector 3D y almacenar el resultado.
    resulta = sqrt(a * _vec.a);
    resultb = sqrt(b * _vec.b);
    resultc = sqrt(c * _vec.c);
    resulta = resulta + resultb + resultc;
}

void Vector3::Normal(Vector3 _vec)
{
    // Función para normalizar el vector 3D y almacenar el resultado.
    resulta = sqrt(a * _vec.a);
    resultb = sqrt(b * _vec.b);
    resultc = sqrt(c * _vec.c);
    resulta = resulta + resultb + resultc;

    // El siguiente cálculo parece incorrecto, se debe calcular la longitud (magnitud) del vector
    // y luego dividir cada componente por esa longitud para normalizarlo.
    // resultb = (a / resulta, b / resulta, c / resultc);
}
