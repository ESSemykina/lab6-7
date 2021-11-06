#pragma once
#define N 100
#define M 100
namespace ks
{
  void vvod(int& n, int& m, int mas[N][M]);
  void poiskmin(int& min, int mas[N][M], int n, int m);
  void poiskprost(bool chislo, int n, int m, int mas[N][M], int& povtor1, int& prost);
  void umnojmat(int mas2[N], int n, int m, int mas[N][M]);
  void chetmin(int& povtor, int min, int mas[N][M], int m, int n);
  void proverka(int povtor, int povtor1, int mas2[N], int mas[N][M], int n, int m);
  void output(int mas[N][M], int n, int m);
}
