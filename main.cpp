#include <iostream>
#include <vector>

#include "Objeto.h"
#include "Menu.h"

vector <Hotel> hoteles;
vector <Restaurant> restaurantes;
vector <Museo> museos;
vector <vector<int>> mapa;

int main()
{
	Menu menu;
	int x, y;
	cout << "Tamaño del mapa (X Y): ";
	cin >> x >> y;

	mapa.resize(y);
	for (auto& e : mapa)
	{
		e.resize(x);
	}
	for (int i = 0; i < y; i++)
	{
		for (auto& e : mapa[i])
		{
			e = 0;
		}
	}
	menu.ejecutar();
	return 0;
}

