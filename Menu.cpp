#include "Menu.h"
#include "Objeto.h"

extern vector <Hotel> hoteles;
extern vector <Restaurant> restaurantes;
extern vector <Museo> museos;
extern vector <vector<int>> mapa;

Menu::Menu() {}
Menu::~Menu() {}

enum class Opciones
{
	Agregar = 1, Remover = 2, Mostrar = 3
};

void Menu::ejecutar()
{
	do
	{
		mostrarMenu();
		cin >> opcion;
		seleccionarOpcion();
	} while (opcion != 0);
	cout << "Fin del programa...\n";
}

void limpiar()
{
#ifndef WIN32
	cout << "\033[2J\033[0;0H";
#else
	system("cls");
#endif
}

void Menu::agregarObjeto()
{
	int x, y;
	string nombre;
	string direccion;
	string calificacion;
	do
	{
		cout << " Tipo de objeto: " << endl;
		cout << " 1 - Hotel. " << endl;
		cout << " 2 - Restaurante. " << endl;
		cout << " 3 - Museo. " << endl;
		cin >> opcion;
	} while (opcion != 1 && opcion != 2 && opcion != 3);

	cout << "Ingrese el Nombre: ";
	cin >> nombre;
	cout << "\n" << "Ingrese dirección: ";
	cin >> direccion;
	cout << endl << "Ingrese calificación: ";
	cin >> calificacion;
	cout << endl << "Ingrese dirección (x y): ";
	cin >> x;
	cin >> y;
	switch (opcion)
	{
	case 1:
	{
		string disponibilidad;
		int estrellas;
		cout << "Ingrese disponibilidad: ";
		cin >> disponibilidad;
		cout << "Ingrese el número de estrellas: ";
		cin >> estrellas;
		hoteles.push_back(Hotel(nombre, x, y, calificacion, estrellas, disponibilidad));
		mapa[x][y] = 1;
		break;
	}
	case 2:
	{
		string tipo_de_comida, especialidad_del_dia;
		cout << "Ingrese el tipo de comida: ";
		cin >> tipo_de_comida;
		cout << "Ingrese la especialidad del día: ";
		cin >> especialidad_del_dia;
		restaurantes.push_back(Restaurant(nombre, x, y, calificacion, tipo_de_comida, especialidad_del_dia));
		mapa[x][y] = 2;
		break;
	}
	case 3:
	{
		string exposicion_actual;
		cout << "Ingrese la exposición actual: ";
		cin >> exposicion_actual;
		museos.push_back(Museo(nombre, x, y, calificacion, exposicion_actual));
		mapa[x][y] = 3;
		break;
	}
	
	}
}

void Menu::mostrarMenu()
{
	limpiar();
	cout << "Menu\n";
	cout << string(4, '-') << "\n\n";
	cout << "1. Agregar un nuevo objeto\n";
	cout << "2. Remover objeto\n";
	cout << "3. Dibujar Mapa\n\n";
	cout << "0. Para Salir\n\n";
}

void Menu::seleccionarOpcion()
{
	limpiar();
	switch (Opciones(opcion))
	{
	case Opciones::Agregar:  // Agregar Objeto
		agregarObjeto();
		break;
	case Opciones::Remover:  // Remover Objeto
		removerObjeto();
		break;
	case  Opciones::Mostrar: // Dibujando Tierra
		mostrarObjeto(mapa);
		break;
	}
}


void Menu::mostrarObjeto(vector<vector<int>> mapa)
{
	auto FFF=0;
	cout <<endl;
	for (int i = 0; i < mapa.size(); i++)
	{
		for (auto e : mapa[i])
		{
			cout << " ";
			switch (e)
			{
			case 0:
			{
				cout << ".";
				break;
			}
			case 1:
			{
				cout << "H";
				break;
			}
			case 2:
			{
				cout << "R";
				break;
			}
			case 3:
			{
				cout << "M";
				break;
			}
			}
		}
		cout << endl;
	}
	cout << endl;
	cin >> FFF;
};

void Menu::removerObjeto()
{
	
};

