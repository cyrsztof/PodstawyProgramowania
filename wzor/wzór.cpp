/*
Autor:  Krzysztof Cyran
Grupa:  ŒR/P 18:00     (Œroda parzysta godz 18:00)
Data modyfikacji:   28.10.2020
Temat:  Laboratorium 1

*/

#include <iostream>
#include <stdio.h>
#include <math.h>

void menu();


int main() {
		
	
    // OBOWI¥ZKOWY wydruk danych autora
    printf("Autor: Krzysztof Cyran (SR/P 18:00) \n\n");
    menu();
    return 0;
}

void menu() {
    int a = 1;
    while (a > 0) {
        printf("Wybierz program: \n"
                         "1 - zadanie 1\n"
                         "2 - zadanie 2\n"
                         "3 - zadanie 3\n"
                         "0 - zakoncz program\n");
        scanf("%d", &a );
        switch (a) {
            case 1:
                // zadanie 1
                break;
            case 2:
                // zadanie 2
                break;
            case 3:
                // zadanie 3
                break;
            case 0:
                printf("Wybrano koniec programu!");
                break;
            default:
                printf("Wybrano niepoprawnie.");
                a = -1;
        }
    }
}