# Informatik 1 Übungsblatt 1

## Aufgabe 1

#### a)

* `int a,j;`

* `char a = '<';`

* `3,14`

* `unsigned int`

* ja, `float`

* nein, wegen `--` muss heißen `-1`

* ja, char

* 2

* `double x = pow(x, 2);`

#### b)

* Es wird eine Dezimalzahl ohne Nachkommastellen mit einer minimalen Feldbreite von 3 ausgegeben.

* SEs wird eine Dezimalzahl mit 6 Nachkommastellen und einer minimalen Feldbreite von 4 ausgegeben.

* Ja, eine Dezimalzahl ohne Nachkommastellen wird mit seinem Vorzeichen aufgegeben. Dabei ist die minimale Feldbreite 4, und die unbenutzen Stellen werden mit Nullen aufgefüllt.

* Ja.

* `1.0`

* `001.1`

#### c)

* `./a -x test`

* `gcc a.c -o Programm`

## Aufgabe 2

#### a)

1: `main` groß statt klein. Geschweifte Klammern statt Klammern im Funktionskopf. Rückgabetyp `int` von `main` fehlt.

2: Klammer statt geschweifte Klammer.

3: `return` groß statt klein. Klammern um `0`. Semicolon nach Statement fehlt.

4: Runde Klammer statt geschweifte Klammer.

```C
int main(void)
{
  return 0;
}
```

#### b)

1: Doppeltes Doppel-Kreuz.

3: Falscher Rückgabewert in `main` Funktion.

5: Runde Klammer nach `printf` fehlt. String nicht in Doppel-Hochkommata.

```C
#include <stdio.h>

int main(void)
{
  printf("Hallo");
  return 0;
}
```

#### c)

0: `stdio.h` nicht inkludiert.

1: Runde Klammern nach main fehlen.

4: Falscher Funktionsname `print`. Falscher Format-Spezifizierer.

```C
#include <stdio.h>

int main(void)
{
  double d = 5.50;
  printf("%f",d);
  return 0;
}
```

#### d)

1: Header falsch inkludiert. System Header immer mit `<...>` inkludieren.

6: Ausgabe eines `char` ohne Format-Spezifizierer.

8: Geschweifte Klammer fehlt.

```C
#include <stdio.h>

int main(void)
{
  char d = `a`;
  printf("%c", d);
  return 0;
}
```

## Aufgabe 4

#### a)

```C
double arithmetic_mean(int num1, int num2);
```
