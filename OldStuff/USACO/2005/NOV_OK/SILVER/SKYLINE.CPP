/*
Alfonso Alfonso Peterssen
11 - 8 - 2007
USACO 2005 NOV Silver "Perfil de Ciudad"
*/
#include <cstdio>
#include <stack>
using namespace std;

#define problem "d"

int N, L, i, j, k, sol;
stack< int > S;

int main() {

  freopen( problem ".in", "r", stdin );
  freopen( problem ".out", "w", stdout );

  scanf( "%d %d", &N, &L );

  S.push( 0 );
  for ( i = 0; i <= N; i++ ) {

    if ( i == N ) k = 0;
    else scanf( "%d %d", &j, &k );

    while ( !S.empty() && ( S.top() >= k ) ) {
      if ( S.top() > k ) sol++;
      S.pop();
    }

    S.push( k );
  }

  printf( "%d\n", sol );

  return 0;
}

/*
Problema 6: Perfil de Ciudad [Mathijs Vogelzang, 2005]

La mejor parte del d�a para las vacas del Granjero Juan es cuando el
sol se pone. Ellas pueden ver el perfil de la ciudad distante. Bessie
quiere saber cu�ntos edificios tiene la ciudad. Escriba un programa
que ayude a las vacas a calcular el n�mero m�nimo de edificios en la
ciudad, dada una descripci�n de su perfil.

La ciudad descrita es aburrida desde el punto de vista arquitect�nico,
tiene solo edificios en forma de caja. El perfil de una ciudad tiene
un ancho de W unidades (1 <= W <= 1,000,000) y se describe usando N (1
<= N <= 50,000) coordenadas x y y sucesivas (1 <= x <= W, 0 <= y <=
500,000), definiendo en que punto el perfil cambia a una cierta
altitud.

Un ejemplo de perfil podr�a ser:

..........................
.....XX.........XXX.......
.XXX.XX.......XXXXXXX.....
XXXXXXXXXX....XXXXXXXXXXXX

Y ser�a codificado como (1,1), (2,2), (5,1), (6,3), (8,1), (11,0),
(15,2),(17,3), (20,2), (22,1).

Este perfil requiere un m�nimo de 6 edificios para formarse; a
continuaci�n se muestra un conjunto posible de seis edificios que
podr�an crear el perfil antes dado:

..........................    ..........................
.....22.........333.......    .....XX.........XXX.......
.111.22.......XX333XX.....    .XXX.XX.......5555555.....
X111X22XXX....XX333XXXXXXX    4444444444....5555555XXXXX

..........................
.....XX.........XXX.......
.XXX.XX.......XXXXXXX.....
XXXXXXXXXX....666666666666

NOMBRE DEL PROBLEMA: skyline

FORMATO DE ENTRADA:

* L�nea 1: Dos enteros separados por espacio N y W.

* L�neas 2..N+1: Dos enteros separados por un espacio las coordenadas
x y
        y de un punto donde el perfil cambia. Las coordenadas x se
        presentan en orden estrictamente creciente, y la primera
        coordenada x ser� siempre 1.

ENTRADA EJEMPLO (archivo skyline.in):

10 26
1 1
2 2
5 1
6 3
8 1
11 0
15 2
17 3
20 2
22 1

DETALLES DE LA ENTRADA:

El caso antes mostrado

FORMATO DE LA SALIDA:

* L�nea 1: El m�nimo n�mero de edificios para crear el perfil
descrito.

SALIDA EJEMPLO (archivo skyline.out):

6
*/
