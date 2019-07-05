#ifndef UNTITLED1_MENU_H
#define UNTITLED1_MENU_H

#include <iostream>
#include <vector>
using namespace std;

class Menu
{
private:
	int opcion;
	void mostrarMenu();
	void seleccionarOpcion();
	void agregarObjeto();
	void removerObjeto();
	void mostrarObjeto(vector<vector<int>> mapa);
public:
	Menu();
	~Menu();
	void ejecutar();
};

#endif //UNTITLED1_MENU_H

