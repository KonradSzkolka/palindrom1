#include "testy.h"
#include "is_palindrom.h"
#include <iostream>

using namespace std;

void test_is_palindrom_true()
{
	char tekst[] = "Potop";
	int size = sizeof(tekst) / sizeof(tekst[0]);

	cout << tekst << " | ";

	bool reuslt = is_palindrom(tekst, size);
	if (reuslt == true)
	{
		cout << "ok";
	}
	else
	{
		cout << "nieok";
	}
	cout << endl;
}
void test_is_palindrom_false()
{
	char tekst[] = "JaBoL";
	int size = sizeof(tekst) / sizeof(tekst[0]);

	cout << tekst << " | ";

	bool reuslt = is_palindrom(tekst, size);

	if (reuslt == false)
	{
		cout << "ok";
	}
	else
	{
		cout << "nieok";
	}
	cout << endl;
}
void test_is_palindrom_throw_nullptr(){

	cout << "nullptr" << " | ";

	try 
	{
		is_palindrom(nullptr, 10);
	}
	catch (invalid_argument) {
		cerr << "ok";
	}
	catch (...) {
		cerr << "nieok";
	}

	cout << endl;
}
void test_is_palindrom_throw_no_null()
{
	char tekst[] = "aldubnasdasidasdoaoda"; // 21 znakow
	int size = sizeof(tekst) / sizeof(tekst[0]);

	cout << tekst << " | ";

	try
	{
		is_palindrom(tekst, size);
	}
	catch (invalid_argument) {
		cerr << "ok";
	}
	catch (...) {
		cerr << "nieok";
	}

	cout << endl;
}
void test_is_palindrom_throw_not_in_alphabet()
{
	char tekst[] = "k414k"; // kajak 
	int size = sizeof(tekst) / sizeof(tekst[0]);

	cout << tekst << " | ";

	try
	{
		is_palindrom(tekst, size);
	}
	catch (invalid_argument) {
		cerr << "ok";
	}
	catch (...) {
		cerr << "nieok";
	}

	cout << endl;
}