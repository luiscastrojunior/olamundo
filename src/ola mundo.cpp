#include <iostream>
using namespace std;
int main()
{
	double l1, l2, l3;
	cout<<'Digite a medida do 1� lado: ';cin>>l1;
	cout<<'Digite a medida do 2� lado: ';cin>>l2;
	cout<<'Digite a medida do 3� lado: ';cin>>l3;
	if ((l1 = l2) && (l2 = l3) && (l1 = l3))
		cout<<'Tri�ngulo Equil�tero!';
	else
		if ((l1 != l2) && (l2 != l3) && (l1 != l3))
			cout<<'Tri�ngulo Escaleno!';
		else
			cout<<'Tri�ngulo Is�sceles!';
}
