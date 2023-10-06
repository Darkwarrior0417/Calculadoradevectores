#include "Common.h"
#include "App.h"
#include "Vector2.h"
#include "Vector3.h"
#include "Vector4.h"

// Declaraciones de objetos de vectores y variables globales
Vector2 vector2, vector2nd;
Vector3 vector3, vector3rd;
Vector4 vector4, vector4th;
int opti;
float result;

App::App() : opc(0)
{
    // Constructor de la clase App, inicializa opc en 0.
}

App::~App()
{
    // Destructor de la clase App, no realiza ninguna acción.
}

void App::menu()
{
    // Función para mostrar el menú principal.
    cout << "Bienvenido a la calculadora de vectores" << endl;
    cout << "Por favor, elija una opción que quiera usar:" << endl;
    cout << "1. Vector2" << endl;
    cout << "2. Vector3" << endl;
    cout << "3. Vector4" << endl;
    cout << " " << endl;
    cin >> opc;

    while (opc != 0)
    {
        switch (opc)
        {
        case 1:
            Vector2opciones();
            break;

        case 2:
            Vector3opciones();
            break;

        case 3:
            Vector4opciones();
            break;

        default:
            cout << "No es una opción válida" << endl;
            break;
        }
    }
}

void App::Vector2opciones()
{
    // Función para realizar operaciones con vectores 2D.
    cout << "Ingresa un valor de A del primer vector:" << endl;
    cin >> vector2.a;
    cout << "Ingresa un valor de B del primer vector:" << endl;
    cin >> vector2.b;
    vector2.setVector2(vector2.a, vector2.b);

    cout << "Ingresa un valor de A del segundo vector:" << endl;
    cin >> vector2nd.a;
    cout << "Ingresa un valor de B del segundo vector:" << endl;
    cin >> vector2nd.b;
    vector2nd.setVector2(vector2nd.a, vector2nd.b);

    do {
        cout << " " << endl;
        cout << "Elige alguna opción:" << endl;
        cout << "1. Sumar              2. Restar" << endl;
        cout << "3. Multiplicar        4. Dividir" << endl;
        cout << "5. Producto punto     6. Producto cruz" << endl;
        cout << "7. Magnitud           8. Normalizar" << endl;
        cout << "0. Volver al menú" << endl;
        cin >> opti;

        switch (opti)
        {
        case 1:
            vector2.Add(vector2nd);
            printVector2();
            break;

        case 2:
            vector2.Sub(vector2nd);
            printVector2();
            break;

        case 3:
            vector2.Mul(vector2nd);
            printVector2();
            break;

        case 4:
            vector2.Div(vector2nd);
            printVector2();
            break;

        case 5:
            vector2.dotPro(vector2nd);
            cout << "El resultado del vector es: (" << vector2.resulta << ")" << endl;
            break;

        case 6:
            vector2.crossPro(vector2nd);
            cout << "El producto cruz no se puede realizar en vectores 2D." << endl;
            break;

        case 7:
            vector2.Mag(vector2);
            cout << "La magnitud del vector es: (" << vector2.resulta << ")" << endl;
            break;

        case 8:
            vector2.Normal(vector2);
            cout << "Normalizar tu vector da: (" << vector2.resultb << ")" << endl;
            break;

        case 0:
            menu();
            break;

        default:
            cout << "No es una opción válida" << endl;
            break;
        }
    } while (opti != 0);
}

void App::Vector3opciones()
{
    // Función para realizar operaciones con vectores 3D.
    cout << "Ingresa el valor de A del primer vector:" << endl;
    cin >> vector3.a;
    cout << "Ingresa el valor de B del primer vector:" << endl;
    cin >> vector3.b;
    cout << "Ingresa el valor de C del primer vector:" << endl;
    cin >> vector3.c;
    vector3.setVector3(vector3.a, vector3.b, vector3.c);

    cout << "Ingresa el valor de A del segundo vector:" << endl;
    cin >> vector3rd.a;
    cout << "Ingresa el valor de B del segundo vector:" << endl;
    cin >> vector3rd.b;
    cout << "Ingresa el valor de C del segundo vector:" << endl;
    cin >> vector3rd.c;
    vector3rd.setVector3(vector3rd.a, vector3rd.b, vector3rd.c);

    do {
        cout << " " << endl;
        cout << "Elige alguna opción:" << endl;
        cout << "1. Sumar              2. Restar" << endl;
        cout << "3. Multiplicar        4. Dividir" << endl;
        cout << "5. Producto punto     6. Producto cruz" << endl;
        cout << "7. Calcular magnitud  8. Normalizar" << endl;
        cout << "0. Volver al menú principal" << endl;
        cin >> opti;

        switch (opti)
        {
        case 1:
            vector3.Add(vector3rd);
            printVector3();
            break;

        case 2:
            vector3.Sub(vector3rd);
            printVector3();
            break;

        case 3:
            vector3.Mul(vector3rd);
            printVector3();
            break;

        case 4:
            vector3.Div(vector3rd);
            printVector3();
            break;

        case 5:
            vector3.dotPro(vector3rd);
            cout << "El resultado del vector es: (" << vector3.resulta << ")" << endl;
            break;

        case 6:
            vector3.crossPro(vector3rd);
            printVector3();
            break;

        case 7:
            vector3.Mag(vector3rd);
            cout << "La magnitud del vector es: (" << vector3.resulta << ")" << endl;
            break;

        case 8:
            vector3.Normal(vector3rd);
            cout << "Normalizar al vector da: (" << vector3.resultb << ", " << vector3.resultc << ")" << endl;
            break;

        case 0:
            menu();
            break;

        default:
            cout << "Esa no es una opción válida" << endl;
            break;
        }
    } while (opti != 0);
}

void App::Vector4opciones()
{
    // Función para realizar operaciones con vectores 4D.
    cout << "Ingresa el valor de A del primer vector:" << endl;
    cin >> vector4.a;
    cout << "Ingresa el valor de B del primer vector:" << endl;
    cin >> vector4.b;
    cout << "Ingresa el valor de C del primer vector:" << endl;
    cin >> vector4.c;
    cout << "Ingresa el valor de D del primer vector:" << endl;
    cin >> vector4.d;
    vector4.setVector4(vector4.a, vector4.b, vector4.c, vector4.d);

    cout << "Ingresa el valor de A del segundo vector:" << endl;
    cin >> vector4th.a;
    cout << "Ingresa el valor de B del segundo vector:" << endl;
    cin >> vector4th.b;
    cout << "Ingresa el valor de C del segundo vector:" << endl;
    cin >> vector4th.c;
    cout << "Ingresa el valor de D del segundo vector:" << endl;
    cin >> vector4th.d;
    vector4th.setVector4(vector4th.a, vector4th.b, vector4th.c, vector4th.d);

    do {
        cout << " " << endl;
        cout << "Elige alguna opción:" << endl;
        cout << "1. Sumar              2. Restar" << endl;
        cout << "3. Multiplicar        4. Dividir" << endl;
        cout << "5. Producto punto     6. Producto cruz" << endl;
        cout << "7. Calcular magnitud  8. Normalizar" << endl;
        cout << "0. Volver al menú principal" << endl;
        cin >> opti;

        switch (opti)
        {
        case 1:
            vector4.Add(vector4th);
            printVector4();
            break;

        case 2:
            vector4.Sub(vector4th);
            printVector4();
            break;

        case 3:
            vector4.Mul(vector4th);
            printVector4();
            break;

        case 4:
            vector4.Div(vector4th);
            printVector4();
            break;

        case 5:
            vector4.dotPro(vector4th);
            cout << "El resultado del vector es: (" << vector4.resulta << ")" << endl;
            break;

        case 6:
            cout << "El producto cruz solo es válido para vectores en 3D." << endl;
            break;

        case 7:
            vector4.Mag(vector4th);
            cout << "La magnitud del vector es: (" << vector4.resulta << ")" << endl;
            break;

        case 8:
            vector4.Normal(vector4th);
            cout << "Normalizar el vector da: (" << vector4.resultb << ", " << vector4.resultc << ", " << vector4.resultd << ")" << endl;
            break;

        case 0:
            menu();
            break;

        default:
            cout << "No es una opción válida" << endl;
            break;
        }
    } while (opti != 0);
}

void App::printVector2()
{
    // Función para imprimir el resultado de operaciones con vectores 2D.
    cout << "Resultado es: (" << vector2.resulta << ", " << vector2.resultb << ")" << endl;
}

void App::printVector3()
{
    // Función para imprimir el resultado de operaciones con vectores 3D.
    cout << "Resultado es: (" << vector3.resulta << ", " << vector3.resultb << ", " << vector3.resultc << ")" << endl;
}

void App::printVector4()
{
    // Función para imprimir el resultado de operaciones con vectores 4D.
    cout << "Resultado es: (" << vector4.resulta << ", " << vector4.resultb << ", " << vector4.resultc << ", " << vector4.resultd << ")" << endl;
}
