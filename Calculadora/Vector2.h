#pragma once
#include "Common.h"

class Vector2
{
public:
	Vector2();
	~Vector2();
	// Función para establecer los valores del vector 2D.

	void setVector2(float _a, float _b); 
	// Función para calcular el producto punto con otro vector 2D y almacenar el resultado.

	void dotPro(Vector2 _vec);

	// Función para calcular el producto cruz con otro vector 2D y retornar el resultado.
	float crossPro (Vector2 _vec);
	// Función para realizar la suma con otro vector 2D y actualizar el vector actual.

	void Add (Vector2 _vec); 
	// Función para realizar la resta con otro vector 2D y actualizar el vector actual.

	void Sub(Vector2 _vec); 
	// Función para realizar la multiplicación con otro vector 2D y actualizar el vector actual.

	void Mul (Vector2 _vec); 
	// Función para realizar la división con otro vector 2D y actualizar el vector actual.

	void Div (Vector2 _vec); 
	// Función para calcular la magnitud del vector 2D y almacenar el resultado.

	void Mag (Vector2 _vec);

	// Función para normalizar el vector 2D y almacenar el resultado.

	void Normal(Vector2 _vec); 

	// Miembros del vector 2D

	float a;
	float b;
	// Resultados de operaciones

	float resulta;
	float resultb; 

private:

};