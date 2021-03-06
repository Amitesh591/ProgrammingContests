/*
Alfonso Alfonso Peterssen
3 - 8 - 2007
USACO 2005 DEC Bronze "Tri�ngulo Parkside"
*/
#include <cstdio>

#define problem "d"

int N, offset, i, j;

int main() {

  freopen( problem ".in", "r", stdin );
  freopen( problem ".out", "w", stdout );

  scanf( "%d %d", &N, &offset );

  for ( i = 0; i < N; i++ ) {

    for ( j = 0; j < i; j++ ) printf( "  " );

    for ( j = i; j < N; j++ ) {
      printf( "%d", ( j * ( j + 1 ) / 2 + i + offset - 1 ) % 9 + 1  );
      printf( ( j == N - 1 ) ? "\n" : " " );
    }

  }

  return 0;
}

/*
Problema 11: Tri�ngulo Parkside [Don Piele, 2005]

Bessie les ense�� a las vacas a hacer el Tri�ngulo Parkside. Se genera a
partir de dos n�meros, el tama�o y la semilla. El tama�o N (1 <= N <= 20)
determina cu�ntas filas hay en el tri�ngulo y la semilla S (1 <= S <= 9)
determina el primer n�mero en el tri�ngulo. Aqu� hay dos ejemplos:

N=5, S=3                  N=6, S=1

3 4 6 9 4                1 2 4 7 2 7
  5 7 1 5                  3 5 8 3 8
    8 2 6                    6 9 4 9
      3 7                      1 5 1
        8                        6 2
                                   3

La primera l�nea de cualquier tri�ngulo no tiene espacios en blanco al principio.

Analice los ejemplos antes mostrado, descubra la regla, y escriba un programa que
generar� el Tri�ngulo Parkside dados cualquier tama�o N (1 <= N <= 20) y cualquier
semilla S (1 <= S <= 9).


NOMBRE DEL PROBLEMA: pktri1

FORMATO DE ENTRADA:

* L�nea 1: Dos enteros separados por espacio, N y S

ENTRADA EJEMPLO (archivo pktri1.in):

5 3

FORMATO DE SALIDA:

* L�neas 1..N: Un tri�ngulo Parkside como el mostrado; no dejar espacios
        sobrantes en ninguna l�nea.


SALIDA EJEMPLO (archivo pktri1.out):

3 4 6 9 4
  5 7 1 5
    8 2 6
      3 7
        8
*/
