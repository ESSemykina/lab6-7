#include<iostream>
#include "SomeFunctions.hpp"
int main()
{
	int n, m, povtor1 = 0, prost,povtor, mas[N][M],mas2[N];
	bool chislo = false;
	int min = mas[0][0];
	std::cin >> n >> m;
	vvod(n, m, mas);
	poiskmin(min, mas, n, m);
	poiskprost(chislo, n, m, mas, povtor1, prost);
	umnojmat(mas2, n, m, mas);
	chetmin(povtor, min, mas, m, n);
	proverka(povtor, povtor1, mas2, mas, n, m);
	output(mas, n, m);
}
