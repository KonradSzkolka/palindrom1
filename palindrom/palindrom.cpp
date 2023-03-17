#include "testy.h"

using namespace std;

int main()
{
	test_is_palindrom_true();
	test_is_palindrom_false();
	test_is_palindrom_throw_nullptr();
	test_is_palindrom_throw_no_null();
	test_is_palindrom_throw_not_in_alphabet();
}
