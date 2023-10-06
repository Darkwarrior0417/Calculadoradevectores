#pragma once
#include "Common.h"

class Vector2
{
public:
	Vector2();
	~Vector2();
	// Funci�n para establecer los valores del vector 2D.

	void setVector2(float _a, float _b); 
	// Funci�n para calcular el producto punto con otro vector 2D y almacenar el resultado.

	void dotPro(Vector2 _vec);

	// Funci�n para calcular el producto cruz con otro vector 2D y retornar el resultado.
	float crossPro (Vector2 _vec);
	// Funci�n para realizar la suma con otro vector 2D y actualizar el vector actual.

	void Add (Vector2 _vec); 
	// Funci�n para realizar la resta con otro vector 2D y actualizar el vector actual.

	void Sub(Vector2 _vec); 
	// Funci�n para realizar la multiplicaci�n con otro vector 2D y actualizar el vector actual.

	void Mul (Vector2 _vec); 
	// Funci�n para realizar la divisi�n con otro vector 2D y actualizar el vector actual.

	void Div (Vector2 _vec); 
	// Funci�n para calcular la magnitud del vector 2D y almacenar el resultado.

	void Mag (Vector2 _vec);

	// Funci�n para normalizar el vector 2D y almacenar el resultado.

	void Normal(Vector2 _vec); 

	// Miembros del vector 2D

	float a;
	float b;
	// Resultados de operaciones

	float resulta;
	float resultb; 

private:

};