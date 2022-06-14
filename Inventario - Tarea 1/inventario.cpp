#include <iostream>
#include <string>

using namespace std;

string productos[5][4] = {
    { "001", "iPhone X", "0", "33000" },
    { "002", "Laptop Dell", "5", "19000" },
    { "003", "Monitor Samsung", "2", "5700" },
    { "004", "Mouse", "100", "115" },
    { "005", "HeadSet", "25", "1200" }
};

void listarProductos() {
    system("cls");
    cout << endl;
    cout << "Listado de Productos" << endl;
    cout << "********************" << endl;
    cout << "Codigo, Descripcion, Existencia y Precio" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << productos[i][0] << " | " << productos[i][1] << " | " << productos[i][2] << " | " << productos[i][3] << endl;
    }
    
}

void movimientoInventario(string codigo, int cantidad, string tipoMovimiento) {
    for (int i = 0; i < 5; i++)
    {
        if (productos[i][0] == codigo) {
            if (tipoMovimiento == "+") {
                productos[i][2] = to_string(stoi(productos[i][2]) + cantidad);
            } else {
                productos[i][2] = to_string(stoi(productos[i][2]) - cantidad);
            }
        }
    }
}

void cambioPrecio(string codigo, int ajusteprecio, string movimientoPrecio) {
    for (int i = 0; i < 5; i++)
    {
        if (productos [i][0] == codigo) {
            if (movimientoPrecio == "+") {
                productos[i][3] = to_string(stoi(productos[i][3]) + ajusteprecio);
            }
                else {
                    productos[i][3] = to_string(stoi(productos[i][3]) - ajusteprecio);
                }
        }
    }
    
}

void ingresoDeInventario() {
    string codigo = "";
    int cantidad = 0;

    system("cls");
    cout << endl;
    cout << "Ingreso de Productos al Inventario" << endl;
    cout << "**********************************" << endl;
    cout << "Ingrese el codigo del producto: ";
    cin >> codigo;
    cout << endl;
    cout << "Ingrese la cantidad del producto: ";
    cin >> cantidad;
    cout << endl;

    movimientoInventario(codigo, cantidad, "+");
}

void salidaDeInventario() {
    string codigo = "";
    int cantidad = 0;

    system("cls");
    cout << endl;
    cout << "Salida de Productos del Inventario" << endl;
    cout << "**********************************" << endl;
    cout << "Ingrese el codigo del producto: ";
    cin >> codigo;
    cout << endl;
    cout << "Ingrese la cantidad del producto: ";
    cin >> cantidad;
    cout << endl;

    cambioPrecio(codigo, cantidad, "-");
}

void aumentoPrecio() {
    string codigo = "";
    int aumentoPrecio = 0;

    system("cls");
    cout << endl;
    cout << "Aumento de precio de productos" << endl;
    cout << "**********************************" << endl;
    cout << "Ingrese el codigo del producto: ";
    cin >> codigo;
    cout << endl;
    cout << "Ingrese el aumento de precio del producto: ";
    cin >> aumentoPrecio;
    cout << endl;

    cambioPrecio(codigo, aumentoPrecio, "+");
}

void rebajaPrecio() {
    string codigo = "";
    int rebajaPrecio = 0;

    system("cls");
    cout << endl;
    cout << "Rebaja de precio de productos" << endl;
    cout << "**********************************" << endl;
    cout << "Ingrese el codigo del producto: ";
    cin >> codigo;
    cout << endl;
    cout << "Ingrese la rebaja de precio del producto: ";
    cin >> rebajaPrecio;
    cout << endl;

    cambioPrecio(codigo, rebajaPrecio, "-");
}

int main(int argc, char const *argv[])
{
    int opcion = 0;

    while(true) {
        system("cls");

        cout << "Sistema de Inventario"; 
        cout << endl;
        cout << "*********************";
        cout << endl;
        cout << endl;
        cout << "1 - Productos" << endl;
        cout << "2 - Ingreso de Inventario" << endl;
        cout << "3 - Salida de Inventario" << endl;
        cout << "4 - Aumento de precio" << endl;
        cout << "5 - Rebaja de precio" << endl;
        cout << "0 - Salir" << endl;
        cout << "Ingrese una opcion del menu: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1: 
            listarProductos();            
            break;
        case 2:
            ingresoDeInventario();
            break;
        case 3:
            salidaDeInventario();
            break;
        case 4:
            aumentoPrecio();
            break;
        case 5:
            rebajaPrecio();
            break;
        
        default:
            break;
        }

        system("pause");
        cout << endl;

        if (opcion == 0) {
            break;
        }
    }

 

    return 0;
}