#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;

main ()
{
  char a[30] = "--Belajar TIPE DATA--";
  short b;
  int c;
  long d;
  float e;
  double f;
  int g = 1;
  int h = 2;

  b = 1000;
  c = 100000;
  d = 100000000;
  e = 3.12;
  f = 3.12345;

  cout << a << endl;
  cout << "Tipe data short : " << b << endl;
  cout << "Tipe data int   : " << c << endl;
  cout << "Tipe data long  : " << d << endl;
  cout << "Tipe data float : " << e << endl;
  cout << "Tipe data double: " << f << endl;

  cout << "Berikut Hasil Boolean : " << endl;
  cout << (g > h);
  cout << endl;
  cout << (g < h);
  cout << endl;
  cout << (g == h);
  cout << endl;
  cout << (g != h);
}