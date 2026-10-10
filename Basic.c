#include <stdio.h>
#include <locale.h>
#include <wchar.h>

// ==================== TAHÁK PRINTF SPECIFIKÁTORŮ ====================
// %d / %i  -> Celé číslo se znaménkem (int)
// %u       -> Celé číslo bez znaménka (unsigned int)
// %ld      -> Dlouhé celé číslo (long)
// %lld     -> Velmi dlouhé celé číslo (long long)
//
// %f       -> Desetinné číslo (float / double) -> %.2f pro 2 des. místa
// %e / %E  -> Vědecký / exponenciální formát (např. 1.23e+04)
// %g / %G  -> Automatický kratší formát (mezi %f a %e)
//
// %c       -> Jeden znak (char)
// %s       -> Textový řetězec (char * ukončený '\0')
//
// %x / %X  -> Šestnáctková (hex) soustava (malá / velká písmena)
// %o       -> Osmičková (oktalová) soustava
// %p       -> Adresa v paměti / ukazatel (pointer)
//
// %%       -> Výpis samotného znaku procenta '%'
// ====================================================================

int main() {
    setlocale(LC_ALL,"");
    wprintf(L"TEXT!\n");
    char string[] = "ne";
    printf("%s\n", string);

    int age = 18;
    printf("Age: %d\n", age);

    if (age < 18) {
        printf("Not possible");
    } else if (age >= 18) {
        printf("Now omg possible");
    } else {
        printf("Error");
    }

    int choice = 1;

    switch (choice) {
        case 1: printf("Scan\n"); break;
        case 2: printf("Exploit\n"); break;
        case 3: printf("Sleep\n");
    }
    //ukol();
    //pocitani();
    //collatz();
    return 0;
}

int collatz() {
    int c;
    int kroky = 0;


    wprintf(L"\nNapiš svoje číslo: ");
    scanf("%d", &c);
    if (c == 1) {
        kroky++;
        wprintf(L"Číslo se rovná 1 a počet kroků bylo %d", kroky);
    } else if ( c % 2 == 0 ) {
        kroky++;
        wprintf(L"Číslo se rovná 1 a počet kroků bylo %d", kroky);
    } else {
        kroky++;
        c = c * 3 + 1;
        wprintf(L"Číslo se rovná %d a počet kroků bylo %d", c, kroky);
    }
    return 0;
}

int ukol() {
    float benzin;
    float pocet;
    float cena;

    wprintf(L"\nJaká je cena benzinu?");
    wscanf(L"%f", &benzin);
    wprintf(L"Kolik litrů benzinu chceš natankovat?");
    wscanf(L"%f", &pocet);
    cena = benzin * pocet;
    wprintf(L"Cena je %.2fKč", cena);


    return 0;
}

void pocitani() {
    float a, b, vysledek;
    char op;
    wprintf(L"První číslo: ");
    scanf("%f", &a);

    wprintf(L"operátor (+, -, *, /): ");
    scanf(" %lc", &op);

    wprintf(L"\nDruhé číslo: ");
    scanf("%f", &b);
    if (op == '+') {
        vysledek = a + b;
        wprintf(L"Výsledek se rovná %.2f", vysledek);
    } else if (op == '-') {
        vysledek = a - b;
        wprintf(L"Výsledek se rovná %.2f", vysledek);
    } else if (op == '*') {
        vysledek = a * b;
        wprintf(L"Výsledek se rovná %.2f", vysledek);
    } else if (op == '/') {
        if (b == 0) {
            wprintf(L"Dělit nulou nelze");
        } else {
            vysledek = a / b;
            wprintf(L"Výsledek se rovná %.2f", vysledek);
        }
    } else {
        wprintf(L"Neznámý operátor");
    }

}