#pragma once
#include "Common.h"

class Vector4
{
public:
	Vector4();
	~Vector4();

	// Función para establecer los valores del vector 4D.
	void setVector4(float _a, float _b, float _c, float _d);

	// Función para calcular el producto punto con otro vector 4D y almacenar el resultado.
	void dotPro(Vector4 _vec);

	// Función para calcular el producto cruz con otro vector 4D y actualizar el vector actual.
	void crossPro(Vector4 _vec);

	// Función para realizar la suma con otro vector 4D y actualizar el vector actual.
	void Add(Vector4 _vec);

	// Función para realizar la resta con otro vector 4D y actualizar el vector actual.
	void Sub(Vector4 _vec);

	// Función para realizar la multiplicación con otro vector 4D y actualizar el vector actual.
	void Mul(Vector4 _vec);

	// Función para realizar la división con otro vector 4D y actualizar el vector actual.
	void Div(Vector4 _vec);

	// Función para calcular la magnitud del vector 4D y almacenar el resultado.
	void Mag(Vector4 _vec);

	// Función para normalizar el vector 4D y almacenar el resultado.
	void Normal(Vector4 _vec);

	// Miembros del vector 4D
	float a;
	float b;
	float c;
	float d;

	// Resultados de operaciones
	float resulta;
	float resultb;
	float resultc;
	float resultd;

private:
};
