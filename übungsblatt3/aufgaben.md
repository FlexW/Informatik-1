# Übungsblatt 3

### Aufgabe 9

#### a)
* Ja. Liefert den Wert `false`.

* Ja. Liefert den Wert `false`.

* Nein. Es fehlt ein Ausdruck vor `==`.

* Nein. Die beiden Audrücke müssten verknüpft werden.

* Ja.

* Ja.

#### b)
* `true`

* `true`

* `false`

* `false`

* `true`

* `false`

* `false`

* `true`

* `true`

* `false`

* `1`

* `0`

* `Non zero`

* `0`

### Aufgabe 10
#### a)
Steuerwerk schreibt Wert 100 nach AM.
Steuerwerk setzt D auf lesen (0).
Steuerwerk sendent A.
Speicherwerk 'liest' Addresse von AM.
Speicherwerk schreibt Inhalt von Addresse 100 nach AR.
Speicherwerk sendet T. 

#### b)
Steuerwerk schreibt Wert 200 nach AM.
Steuerwerk schreibt 5 nach WM.
Steuerwerk setzt D auf schreiben (1).
Steuerwerk sendet A.
Speicherwerk ließt Addresse von AM.
Speicherwerk ließt Daten von WM.
Speicherwerk überschreibt Inhalt von SZ 200 mit 5.
Speicherwerk sendet T.

### Aufgabe 11
#### a)
| A | !A | !(!A) | !(!(!A)) |
|---|----|-------|----------|
| W | F  |   W   |    F     |
| F | W  |   F   |    W     |

#### b)
| A | B  | A && B  | A \|\| (A && B) |
|---|----|---------|---------------|
| W | W  |   W     |       W       |
| W | F  |   F     |       W       |
| F | W  |   F     |       F       |
| F | F  |   F     |       F       |

#### c)
| A | A && A |
|---|--------|
| W |   W    |
| F |   F    |

#### d)
| A  | B  | A \|\| B | !(A \|\| B) |
|----|----|--------|-----------|
| W  | W  |   W    |     F     |
| W  | F  |   W    |     F     |
| F  | W  |   W    |     F     |
| F  | F  |   F    |     W     |

| A  | B  | !A | !B | !(A) && !(B) |
|----|----|----|----|--------------|
| W  | W  | F  | F  |      F       |
| W  | F  | F  | W  |      F       |
| F  | W  | W  | F  |      F       |
| F  | F  | W  | W  |      W       |

Man kann nun sehen dass die beiden letzten Spalten Aquivalent
sind. Das bedeutet sie lieferen die gleichen logischen Werte.
Weiter bedeutet es das, dass eine genau dann gilt falls das andere gilt.

#### e)
| A | B | C | B && C | A && (B && C) |
|---|---|---|--------|---------------|
| W | W | W |   W    |      W        |
| W | W | F |   F    |      F        |
| W | F | W |   F    |      F        |
| F | F | F |   F    |      F        |
| F | W | F |   F    |      F        |
| F | W | W |   W    |      F        |

| A | B | C | A && B | (A && B) && C |
|---|---|---|--------|---------------|
| W | W | W |   W    |      W        |
| W | W | F |   W    |      F        |
| W | F | W |   F    |      F        |
| F | F | F |   F    |      F        |
| F | W | F |   F    |      F        |
| F | W | W |   F    |      F        |

Man sieht wieder das die letzten beiden Spalten Aquivalent sind.

### Aufgabe 12
#### a)
```C
#include <stdio.h>

int main()
{
    int i = 0;
    printf("Bitte Integer eingeben.\n");
    if (1 == scanf("%d", &i)) {
        printf("Die Eingabe war gueltig.\n");
        return 0;
    }
    printf("Die Eingabe war nicht gueltig.\n");
    return 0;
}
```

### b)
```C
#include <stdio.h>

int main()
{
    double d1 = -1.0, d2 = -1.0;
    printf("Bitte zwei nicht negative double Werte eingeben.\n");
    scanf("%lf%lf", &d1, &d2);
    if (d1 > 0 && d2 > 0) {
        printf("Eingabe gueltig.\n");
        return 0;
    }
    printf("Eingabe ungueltig.\n");
    return 0;
}
```

### c)
```C
#include <stdio.h>

int main()
{
    int i = 0;
    char str[100];
    printf("Bitte maximal zwei ASCII-Zeichen eingeben.\n");
    scanf("%s", str);
    while(str[i] != 0) {
        if (str[i] < 0 && str[i] > 127)
            break;
        i++;
    }
    if (i <= 2) {
        printf("Eingabe gueltig.\n");
        return 0;
    }
    printf("Eingabe ungueltig.\n");
    return 0;
}
```

### d)
```C
#include <stdio.h>

int main()
{
    int i = 999;
    printf("Bitte ganze Zahl zwischen -10 und 10 eingeben.\n");
    if ((1 == scanf("%d", &i)) && i >= -10 && i <= 10) {
        printf("Eingabe gueltig.\n");
        return 0;
    }
    printf("Eingabe ungueltig.\n");
    return 0;
}
```

### e)
```C
#include <stdio.h>

int main()
{
    int i = -1;
    char c = -1;
    printf("Bitte positive ganze Zahl unmittelbar gefolgt von höchstens einem \
Kleinbuchstaben eingeben.\n");
    if ((2 == scanf("%i%c", &i, &c)) && c <= 122 && c >= 97 && i > 0) {
        printf("Eingabe gueltig.\n");
        return 0;
    }
    printf("Eingabe ungueltig.\n");
    return 0;
}
```
