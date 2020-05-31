#include <iostream>
using namespace std;
int main()
{
	double l1, l2, l3;
	cout<<'Digite a medida do 1º lado: ';cin>>l1;
	cout<<'Digite a medida do 2º lado: ';cin>>l2;
	cout<<'Digite a medida do 3º lado: ';cin>>l3;
	if ((l1 = l2) && (l2 = l3) && (l1 = l3))
		cout<<'Triângulo Equilátero!';
	else
		if ((l1 != l2) && (l2 != l3) && (l1 != l3))
			cout<<'Triângulo Escaleno!';
		else
			cout<<'Triângulo Isósceles!';
}
