#pragma once
#include "Common.h"

class Vector3
{
public:
	Vector3();
	~Vector3();

	// Función para establecer los valores del vector 3D.
	void setVector3(float _a, float _b, float _c);

	// Función para calcular el producto punto con otro vector 3D y almacenar el resultado.
	void dotPro(Vector3 _vec);

	// Función para calcular el producto cruz con otro vector 3D y actualizar el vector actual.
	void crossPro(Vector3 _vec);

	// Función para realizar la suma con otro vector 3D y actualizar el vector actual.
	void Add(Vector3 _vec);

	// Función para realizar la resta con otro vector 3D y actualizar el vector actual.
	void Sub(Vector3 _vec);

	// Función para realizar la multiplicación con otro vector 3D y actualizar el vector actual.
	void Mul(Vector3 _vec);

	// Función para realizar la división con otro vector 3D y actualizar el vector actual.
	void Div(Vector3 _vec);

	// Función para calcular la magnitud del vector 3D y almacenar el resultado.
	void Mag(Vector3 _vec);

	// Función para normalizar el vector 3D y almacenar el resultado.
	void Normal(Vector3 _vec);

	// Miembros del vector 3D
	float a;
	float b;
	float c;

	// Resultados de operaciones
	float resulta;
	float resultb;
	float resultc;

private:
};
