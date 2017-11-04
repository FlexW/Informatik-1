# Informatik 1 Übungsblatt 1

## Aufgabe 5

* Ja, gültige Integer Konstante.

* Nein, es fehlt ein Integer nach dem `-`

* Nein, es fehlt ein Integer nach dem `-` und vor der `)`.

* Nein, schließende Klammer fehlt.

* Nein, für eine Multiplikation müsste dort ein `*` stehen.

* Ja, aber nur falls `x` eine gültige Variable ist.
Es gibt aber eine Warnung da der Wert der berechnet wird nirgend gespeichert wird.

* Ja, aber nur falls `x` und `y` gültige Variablen sind.

* Nein. Modula ist nur mit Integer zulässig.

* `1`

* `-2.3`

* `32`

* `32`

* `7`

* `2`

* `Hello World!`

* `\`

* `   0`

* `10000`

* `x = 2.0`

* Es werden keine Werte in `x, y, z` geschrieben.

## Aufgabe 7

* 3, Integer Division

* Siehe Code.

* Pseudocode:
    ```
    Algorithmus: is_prim

    Eingabe: x Element Nat.Zahlen ohne 0
    k <- 2;
    solange k < x tue
    Wenn x mod k = 0 dann
         Ausgabe: 0
         Ausgabe: 1
    ```

*
    1000 = n

    2000 = tmpVar

    3000 = e
    ```
    2001: INIT        3000
    2002: SPRUNG      3000, 2009
    2003: INIT        2000
    2004: ADD        <2000, 1000>
    2005: ADD        <2000, 1000>
    2006: ADD        <3000, 2000>
    2007: DEKREMENT   1000
    2008: SPRUNG      2002
    2009: AUSGABE     3000
    ```

## Aufgabe 8

* 0 + 4 + 3 + 2 + 1 = 10.

  Addition aller positiven Zahlen bis zur Grenze n (SZ 1001).

* Maschienenprogramm:
  ```
  2001: SPRUNG    1006, 2005
  2002: INKREMENT 1007
  2003: DEKREMENT 1006
  2004: SPRUNG    2001
  2005: AUSGABE   1007
  ```

*