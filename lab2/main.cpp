/*
Autor:  Krzysztof Cyran
Grupa:  ŒR/P 18:00     (Œroda parzysta godz 18:00)
Data modyfikacji:   13.11.2020
Temat:  Laboratorium 2

*/

#include <iostream>
#include <stdio.h>
#include <math.h>

void menu();
void zadanie1();
void zadanie2();
void zadanie3();
void zadanie4();

int nwd(int a, int b);
int nww(int a, int b);
unsigned int silnia(unsigned int n);
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
                         "4 - zadanie 4\n"
                         "0 - zakoncz program\n");
        scanf("%d", &a );
        switch (a) {
            case 1:
                zadanie1();// zadanie 1
                break;
            case 2:
                zadanie2();// zadanie 2
                break;
            case 3:
                zadanie3();// zadanie 3
                break;
            case 4:
            	zadanie4();// zadanie 4
            case 0:
                printf("Wybrano koniec programu!");
                break;
            default:
                printf("Wybrano niepoprawnie.");
                a = -1;
        }
    }
}

void zadanie1() {
	
	int columns = 0,
		rows = 0;
	
	printf ("\nPodaj liczbe wierszy: ");
	scanf("%d", &rows);
	printf ("\nPodaj liczbe kolumn: ");
	scanf("%d", &columns);
	
	printf("    : ");
	
	for (int i = 0; i < columns; i++) {
		printf("%4d", i+1);
	}
	printf("\n----:-");
	for (int i = 0; i < columns; i++) {
		printf("----");
	}
	for (int i = 0; i < rows; i++) {
		printf("\n%3d : ", i+1);
		for (int j = 0; j < columns; j++) {
			printf("%4d", (i+1)*(j+1));
		}
	}
	
	printf ("\n\n");
	
	
	
}
void zadanie2() {
	
	unsigned long a = 0;
	int suma = 0;
	
	printf ("\nPodaj duza liczbe calkowita: ");
	scanf("%uld", &a);
	if ( a == 0){
		printf("Podales zero!\n\n");
		return;
	}
	
	do {
		suma += a%10;
		a = a/10;
		
	} while (a > 0);
	printf("Suma cyfr to: %d \n\n", suma);
	
}
void zadanie3() {
	
	int a,b;
	printf("Podaj dwie liczby: \n a = ");
	scanf("%d", &a);
	printf("\nb= ");
	scanf("%d", &b);
	printf("\nNajwiekszy wspolny dzielnik to: %d", nwd(a,b));
	printf("\nNajmniejsza wspolna wielokrotnosc to: %d\n", nww(a,b));	
	
}
void zadanie4() {
	
	double eps = 0.1;
	double S1 = 0, S2 = 0, suma1 = 0;
	
	
	do {
		printf("\nPodaj wartosc eps < 0.1: ");
		scanf("%lf", &eps);
	} while (eps >= 0.1 || eps < 0);
	
	for (unsigned int k = 1; ; k++) {
		double skladnik = pow(-1,k+1)*(1.0/(2*k-1));
		if (fabs(skladnik)<eps) break;
		suma1+=skladnik;
	}
	S1 = 4*suma1;
	
	for (unsigned int k = 0; ; k++) {
		double skladnik = 1.0/silnia(k);
		if (skladnik < eps) break;
		S2 += skladnik;
	}
	printf("\nS1 = %.10lf", S1);
	printf("\nS2 = %.10lf\n", S2);	
}

int nwd(int a, int b) {
	if (b != 0) return nwd(b,a%b);
	return a;
}

int nww(int a, int b) {
	return (a/nwd(a,b)) * b;
}

unsigned int silnia(unsigned int n) {
	if (n==0) return 1;
	return (n*silnia(n-1));
}