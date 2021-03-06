{koder: A^2P}
{PSN 2004 #32 "Exchange"}
{$B-,I-,Q-,R-,S-}
const
  filein = 'd.in';
  fileout = 'd.out';
var
  fin,fout        : text;
  N,B,S,i         : word;
  d,m,t           : real;

    function max(a,b: real): real;
    begin
      if a >= b then max := a
        else max := b;
    end;{max}

begin
  {fload}
  assign(fin,filein); reset(fin);
  assign(fout,fileout); rewrite(fout);

  {dread}
  readln(fin,N);

  {solve}
  m := 100.0;
  for i:=1 to N do
  begin
    readln(fin,B,S); t := d;
    d := max(d,m / 100 * B );
    m := max(m,t / S * 100 );
  end;{for}

  {dprint}
  writeln(fout,m:0:2);

  {fclose}
  close(fin); close(fout);
end.{main}

{
32� Exchange.                                              Grecia 2004
����������������������������������������������������������������������

David, de alg�n modo, adquiri� las tasas de cambio del d�lar americano
a marcos alemanes para varios d�as en el futuro.

Tarea

Escriba un programa que har� pensar a David en cu�ndo comprar o vender
marcos o d�lares para que, empezando con 100 marcos �l termine con la
mayor cantidad posible de marcos al final del �ltimo d�a.

Fichero de entrada (EXCHANGE.IN)

La primera l�nea del archivo de la entrada contiene un n�mero natural
N, 1 <= N <= 100, el n�mero de d�as futuros por los que David conoce
las tasas de cambio. Cada uno de las N l�neas siguientes contiene dos
n�meros naturales B y S separados con un espacio, 100 <= B <= S <=
1000. La (i+1) - �sima l�nea describe el tipo de cambio del i - �simo
d�a. Esos dos n�meros determinan la tasa de cambio de la manera
siguiente: Pueden comprarse B d�lares para 100 marcos, y pueden
comprarse 100 marcos para S d�lares.

Fichero de salida (EXCHANGE.OUT)

La primera y �nica l�nea del archivo de salida debe contener un n�mero
que representa la mayor cantidad de marcos deseados escrito con dos
lugares decimales.

Comentario: Debido a los errores con la aritmetica de los reales, se
considerar�n como correctos los resultados dentro del rango de error
de 0.05 marcos.

Ejemplo #1 de Entrada y Salida      Ejemplo #2 de Entrada y Salida

�������������Ŀ ��������������Ŀ    �������������Ŀ ��������������Ŀ
� EXCHANGE.IN � � EXCHANGE.OUT �    � EXCHANGE.IN � � EXCHANGE.OUT �
�������������Ĵ ��������������Ĵ    �������������Ĵ ��������������Ĵ
� 3           � � 102.07       �    � 5           � � 103.12       �
� 393 398     � ����������������    � 300 300     � ����������������
� 394 401     �                     � 310 320     �
� 386 386     �                     � 320 330     �
���������������                     � 330 330     �
                                    � 300 320     �
                                    ���������������


Ejemplo #3 de Entrada y Salida

�������������Ŀ ��������������Ŀ
� EXCHANGE.IN � � EXCHANGE.OUT �
�������������Ĵ ��������������Ĵ
� 8           � � 126.14       �
� 218 219     � ����������������
� 228 231     �
� 227 235     �  Ejemplo #3
� 205 213     �
� 230 232     �  D�a 2... Cambiando 100.0000 DEM a 228.0000 USD
� 239 239     �  D�a 4... Cambiando 228.0000 USD a 107.0422 DEM
� 251 258     �  D�a 7... Cambiando 107.0422 DEM a 268.6760 USD
� 205 213     �  D�a 8... Cambiando 268.6760 USD a 126.1389 DEM
���������������
}