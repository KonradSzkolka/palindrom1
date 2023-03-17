#include "is_palindrom.h"
#include <iostream>
#include <stdexcept>

bool is_palindrom(char *tekst, int size)
{
	if (tekst == nullptr)
	{
		throw std::invalid_argument("Wskaznik jest pusty");
	}

	for (int i = 0; i < size - 1; i++)
	{
		if (tekst[i] == '\0')
		{
			break;
		}
		else if ( !((tekst[i] >= 'A' && tekst[i] <= 'Z') || (tekst[i] >= 'a' && tekst[i] <= 'z')) ) {
			throw std::invalid_argument("Tekst zawiera znak nie bedacy litera alfabetu");
		}
		else if (i >= 20)
		{
			throw std::invalid_argument("Nie znaleziono '0\' w pierwszych 20 znakach tekstu");
		}
	}

	// size jest o 1 wieksze bo na koncu jest '\0'
	for (int i = 0; i < size - 2; i++)
	{

		if (tekst[i] >= 'A' && tekst[i] <= 'Z')
		{
			tekst[i] = tekst[i] + 32;
		}

		if (tekst[i] != tekst[size - 2- i])
		{
			return false;
		}
	}
	return true;
}