/**********************************************************************\
* Kurzbeschreibung: Uebung: 22.3.2; Punkte: 0
*
* Datum:       Autor:           Grund der Aenderung:
* 30.05.2021   Denise Griebel   Neuerstellung
\**********************************************************************/
#include <stdio.h>

void zahlensortieren();
/*--- Funktionsdefinitionen ------------------------------------------*/
int main( void )
{
    char c;
    int zahl1, zahl2, zahl3, zahl4, eingabe_Test, i = 1,sortiert = 0;

    printf("Sortieren von 4 Integer Zahlen\n");
    printf("==============================\n\n");

    printf("Zahl1?:");
    eingabe_Test = scanf("%i", &zahl1);
    while(!eingabe_Test )
    {
        while ((c = getchar()) != '\n' && c != EOF)
        {
        }
        printf("\nVersuchen Sie es nochmal.\n\n"
               "Zahl1?:");
        eingabe_Test = scanf("%i", &zahl1);
    }

    printf("Zah12?:");
    eingabe_Test = scanf("%i", &zahl2);
    while(!eingabe_Test )
    {
        while ((c = getchar()) != '\n' && c != EOF)
        {
        }
        printf("\nVersuchen Sie es nochmal.\n\n"
               "Zahl1?:");
        eingabe_Test = scanf("%i", &zahl2);
    }

    printf("Zahl3?:");
    eingabe_Test = scanf("%i", &zahl3);
    while(!eingabe_Test )
    {
        while ((c = getchar()) != '\n' && c != EOF)
        {
        }
        printf("\nVersuchen Sie es nochmal.\n\n"
               "Zahl1?:");
        eingabe_Test = scanf("%i", &zahl3);
    }

    printf("Zahl4?:");
    eingabe_Test = scanf("%i", &zahl4);
    while(!eingabe_Test )
    {
        while ((c = getchar()) != '\n' && c != EOF)
        {
        }
        printf("\nVersuchen Sie es nochmal.\n\n"
               "Zahl1?:");
        eingabe_Test = scanf("%i", &zahl4);
    }
    while ((c = getchar()) != '\n' && c != EOF)
    {

    }
    if(zahl1 <= zahl2 && zahl2 <= zahl3 && zahl3 <= zahl4)
    {
        printf("\nWas soll das ?!\n"
               "Die Zahlen sind bereits sortiert!!\n");
    }
    else
    {
        do
        {
             zahlensortieren( &zahl1, &zahl2, &zahl3, &zahl4);
             printf("%d. Durchlauf - Aktueller Stand:\n",i);
             printf("Zahl1: %i\n"
                    "Zahl2: %i\n"
                    "Zahl3: %i\n"
                    "Zahl4: %i\n", zahl1, zahl2, zahl3, zahl4);

            if(zahl1 <= zahl2 && zahl2 <= zahl3 && zahl3 <= zahl4)
            {
               sortiert = 1;
            }
            else
            {
                i++;
                printf("Weiter mit Return...");
                getchar();
            }
        }while(!sortiert);
    }
    printf("!!!! Fetrig nach %i Durchlaufen !!!!!",i);
    return 0;
}

void zahlensortieren( int * zahl1, int * zahl2, int * zahl3, int * zahl4)
{
    int save;
    if(*zahl1 > *zahl2)
    {
      save = *zahl1;
      *zahl1 = *zahl2;
      *zahl2 = save;
    }
    if(*zahl2 > *zahl3)
    {
      save = *zahl2;
      *zahl2 = *zahl3;
      *zahl3 = save;
    }
    if(*zahl3 > *zahl4)
    {
      save = *zahl3;
      *zahl3 = *zahl4;
      *zahl4 = save;
    }
}
