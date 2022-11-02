#include <iostream>
#include "Vector.h"

using namespace std;

int main()
{
	Vector v1(4, 8, 16);
	Vector v2(7, 8, 9);
	Vector v4(1, 2, 3);
	Vector v5(1, 2, 3);
	Vector v6(2, 4, 8);
	Vector v7(4, 8, 16);
	Vector v3, v8;

	Vector sr1(6, 5, 6);
	Vector sr2(4, 5, 6);

	Vector s1(10, 12, 15);
	Vector s2(2, 4, 3);

	Cos L;

	v1.view_vector();
	v1.length_v();
	cout << "Length:" << v1.length_v() << "\n";

	v2.view_vector();
	v2.length_v();
	cout << "Length:" << v2.length_v() << "\n";

	v3 = v1 + v2;
	v3.view_vector();

	v3 = v1 - v2;
	v3.view_vector();

	v3 += v1;
	v3.view_vector();

	v3 += v2;
	v3.view_vector();

	v8 = v4 * v5;
	v4.view_vector();

	v5 *= 2;
	v5.view_vector();

	v7 /= v6;
	v7.view_vector();

	L = s1 ^ s2;
	L.prosmotroper();

	if (v2 > v1)
		cout << "True\n";
	else cout << "False\n";

	if (sr1 >= sr2)
		cout << "True\n";
	else cout << "False\n";

	if (v2 < v1)
		cout << "True\n";
	else cout << "False\n";

	if (sr1 <= sr2)
		cout << "True\n";
	else cout << "False\n";

}

