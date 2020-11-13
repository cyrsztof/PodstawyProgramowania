/*
Autor:  Krzysztof Cyran
Grupa:  ŒR/P 18:00     (Œroda parzysta godz 18:00)
Data modyfikacji:   28.10.2020
Temat:  Laboratorium 1

*/
#include <iostream> // cin cout
#include <stdio.h> // printf scanf
#include <math.h>
void zadanie1();
void zadanie2();
void zadanie3();
void zadanie3b();
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
                zadanie1();
                break;
            case 2:
                zadanie2();
                break;
            case 3:
                zadanie3();
                break;
            case 4:
				zadanie3b();    
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

void zadanie1() {
	float a,b,c,d;
	printf("\nPodaj wartosc a: ");
	scanf("%f", &a);
	if (a==0.0) {
		   printf("Wprowadzono niepoprawne dane!\n");
		   return;	
	}
	printf("\nPodaj wartosc b: ");
	scanf("%f", &b);
	printf("\nPodaj wartosc c: ");
	scanf("%f", &c);
	d = b*b-4*a*c;
	if (d == 0) {
		printf("Delta wynosi: %f\n", d);
		printf("Jedno rozwiazanie podwojne: x=%f\n",-b/(2*a));
	}
	else if (d < 0) {
		printf("Delta wynosi: %f\n", d);
		printf("Nie istnieje rozwiazanie rzeczywiste!\n");
	}
	else if (d > 0) {
				printf("Delta wynosi: %f\n", d);
		printf("Istnieja dwa rozwiazania: \n");
		printf("x1= %+f\n",(-b-sqrt(d))/(2*a));
	   	printf("x2= %+f\n\n",(-b+sqrt(d))/(2*a));
	}
}

void zadanie2() {
	int dzien, miesiac, rok;
	printf("\nPodaj Dzien: ");
	scanf(" %i", &dzien);
	if (dzien < 1 || dzien > 31) {
		printf ("Podales zly dzien!!!\n\n");
		return;
	}	
	printf("\nPodaj Miesiac: ");
	scanf(" %i", &miesiac);
	
	if (miesiac < 1 || miesiac > 12) {
		printf ("Podales zly miesiac!!!\n\n");
		return;
	}
	printf("\nPodaj Rok: ");
	scanf(" %i", &rok);
		
	bool przestepny;
	if (rok%4==0) {
		przestepny = true;
	} else przestepny = false;
	if (rok%100==0) {
		przestepny=false;
		if(rok%400==0) przestepny = true;
	}
	
	if ((miesiac == 2 ||
		miesiac == 4 || 
		miesiac == 6 ||
		miesiac == 9 ||
		miesiac == 11) 
		&& dzien == 31 ) {	
		printf ("\nPodales zla kombinacje dnia i miesiaca!!!\n\n");
		return;
		} else if (miesiac == 2 && dzien == 30 ) {
		printf ("\nPodales zla kombinacje dnia i miesiaca!!!\n\n");
		return;	
		} else if (miesiac == 2 && dzien == 29 && !przestepny ) {
		printf ("\nPodales zla kombinacje dnia i miesiaca!!!\n\n");
		return;				
		}	
		
	printf ("\nPodales poprawna kombinacje dnia i miesiaca!!!\n\n");
	if (przestepny) printf ("Rok jest przestepny! \n\n");
	if (!przestepny) printf ("Rok nie jest przestepny! \n\n");
}
void zadanie3b() {
	
	float r_min, r_max, rows, r;

	
	printf("");
	printf("\n\nPodaj minimalny promien: ");
	scanf("%f", &r_min);

	printf("\nPodaj maksymalny promien: ");
	scanf("%f", &r_max);
		
	printf("\nPodaj ilosc wierszy: ");
	scanf("%f", &rows);	
	
	printf("===========================================\n");
	printf(": LP : promien : obwod kola : pole kola   :\n");
	printf("===========================================\n");

	for (int i = 0; i < rows; i++) {
		r = r_min+(i*((r_max-r_min)/(rows-1)));		// dla czytelnosci kodu nizej obliczam osobno r danego kroku petli
		
		std::cout << ":";
		std::cout.setf(std::ios::fixed, std::ios::floatfield); 	// wyœwietlanie zer nieznacz¹cych
		std::cout.precision(2);									// precyzja - 2 miejsca po przecinku
		std::cout.width(8);										// szerokoœæ - wyœwietlanie na 8 miejscach
		std::cout << i+1 << " :";
		std::cout.width(8);
		std::cout.precision(2);
		std::cout << r << " :" ;
		std::cout.width(11);
		std::cout.precision(2);
		std::cout << 2*M_PI*r << " :";
		std::cout.width(12);
		std::cout.precision(2);
		std::cout << M_PI*pow(r,2) << " :\n";
		//printf(":%3d :%8.3f :%11.2f :%11.2f :\n", i+1, r, 2*M_PI*r, M_PI*pow(r,2));
	}
	printf("===========================================\n");	
}
void zadanie3() {
	
	float r_min, r_max, rows, r;

	
	printf("");
	printf("\n\nPodaj minimalny promien: ");
	scanf("%f", &r_min);

	printf("\nPodaj maksymalny promien: ");
	scanf("%f", &r_max);
		
	printf("\nPodaj ilosc wierszy: ");
	scanf("%f", &rows);	
	
	printf("===========================================\n");
	printf(": LP : promien : obwod kola : pole kola   :\n");
	printf("===========================================\n");

	for (int i = 0; i < rows; i++) {
		r = r_min+(i*((r_max-r_min)/(rows-1)));		// dla czytelnosci kodu nizej obliczam osobno r danego kroku petli
		printf(":%3d :%8.3f :%11.2f :%11.2f :\n", i+1, r, 2*M_PI*r, M_PI*pow(r,2));
	}
	printf("===========================================\n");

}
