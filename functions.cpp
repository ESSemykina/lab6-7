#include<iostream>
#include "SomeFunctions.hpp"
int main()
{
	int n, m, povtor1 = 0, prost,povtor, mas[N][M],mas2[N];
	bool chislo = false;
	int min = mas[0][0];
	std::cin >> n >> m;
	ks::vvod(n, m, mas);
	ks::poiskmin(min, mas, n, m);
	ks::poiskprost(chislo, n, m, mas, povtor1, prost);
	ks::umnojmat(mas2, n, m, mas);
	ks::chetmin(povtor, min, mas, m, n);
	ks::proverka(povtor, povtor1, mas2, mas, n, m);
	ks::output(mas, n, m);
}
