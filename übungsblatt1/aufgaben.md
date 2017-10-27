# Informatik 1 Übungsblatt 1

## Aufgabe 1

a)
int a,j
char a = '<'
0,01256
unsigned int
ja, float
nein, wegen -- muss heißen -1
ja, char
2
double x = pow(x, 2)

b)
Sorgt für Feldbreite drei bei Ausgabe.
Sorgt für mindestens drei Stellen nach dem Komma bzw. Punkt.
Nein, + ist illegal.
Ja.
1.0
001.1

c)
./a -x test
gcc a.c -o Programm

## Aufgabe 2

a)
1: main groß statt klein. Geschweifte Klammern statt Klammern im Funktionskopf.
2: Klammer statt geschweifte Klammer.
3: return groß statt klein. Klammern um 0. Semicolon nach Statement fehlt.
4: Runde Klammer statt geschweifte Klammer.

'''
int main(void)
{
  return 0;
}
'''

b)
1: Doppeltes Doppel-Kreuz.
3: Falscher Rückgabewert in main Funktion.
5: Runde Klammer nach printf fehlt. String nicht in Doppel-Hochkommata.

'''
#include <stdio.h>

int main(void)
{
  printf("Hallo");
}
'''

c)
0: stdio.h nicht inkludiert.
1: Runde Klammern nach main fehlen.
4: Falscher Funktionsname print. Falscher Format-Spezifizierer.

'''
#include <stdio.h>

int main(void)
{
  double d = 5.50;
  printf("%f",d);
  return 0;
}
'''

d)
1: Header falsch inkludiert. System Header immer mit < > inkludieren.
6: Ausgabe eines char ohne Format-Spezifizierer.
8: Geschweifte Klammer fehlt.

'''
#include <stdio.h>

int main(void)
{
  char d = `a`;
  printf("%c", d);
  return 0;
}
'''

## Aufgabe 4

a)
'''
int arithmetic_mean(int num1, int num2);
'''