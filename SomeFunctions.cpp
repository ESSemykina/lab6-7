#pragma once
#define N 100
#define M 100
#include<iostream>
#include<math.h>
#include "SomeFunctions.hpp"
namespace ks
{
void vvod(int& n, int& m, int mas[N][M])
{

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			std::cin >> mas[i][j];
		}
	}
	std::cout << "\n";
}
void poiskmin(int& min, int mas[N][M], int n, int m)
{
	{
		min = mas[0][0];
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (min > mas[i][j])
				{
					min = mas[i][j];
				}
			}
		}
	}
}
void poiskprost(bool chislo, int n, int m, int mas[N][M], int& povtor1, int& prost)
{
	povtor1 = 0;
	chislo = false;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int prost = mas[i][j];
			chislo = false;
			if (prost < 2)
			{
			}
			for (int d = 2; d <= (int)sqrt(prost); d++)
			{
				if (prost % d == 0)
				{
					chislo = true;
					break;
				}
			}
			if (chislo == false)
			{
				povtor1 = povtor1 + 1;
			}
		}
	}
}
void umnojmat(int mas2[N], int n, int m, int mas[N][M])
{
	for (int i = 0; i < n; i++)
	{
		mas2[i] = 1;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			mas2[i] = mas2[i] * mas[i][j];
		}
	}
}
void chetmin(int& povtor, int min, int mas[N][M], int m, int n)
{
	povtor = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (min == mas[i][j]) {
				povtor = povtor + 1;
			}
		}
	}
}
void proverka(int povtor, int povtor1, int mas2[N], int mas[N][M], int n, int m)
{
	if (povtor > 1 && povtor1 > 1)
		for (int i = 0; i < n; i++)
		{
			for (int k = i + 1; k < m; k++)
			{
				if (mas2[i] < mas2[k])
				{
					for (int j = 0; j < m; j++)
					{
						std::swap(mas[i][j], mas[k][j]);
					}
					std::swap(mas2[i], mas2[k]);
				}
			}
		}
}
void output(int mas[N][M], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			std::cout << mas[i][j] << " ";
		}
		std::cout << " \n";
	}
}
}
