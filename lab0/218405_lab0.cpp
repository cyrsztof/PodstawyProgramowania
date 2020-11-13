/*
Autor:  Krzysztof Cyran
Grupa:  ŒR/P 18:00     (Œroda parzysta godz 18:00)
Data modyfikacji:   20.10.2020
Temat:  Laboratorium 0 - Zajêcia wstêpne

*/
#include <iostream>
#include <stdio.h>
#include <algorithm>	//dla funkcji std::max
#include <math.h>		//dla wartosci PI

//	deklaracja funkcji
void zadanie1a(std::string imie, std::string nazwisko, std::string adres, std::string numer, std::string mail);
void zadanie1b(std::string imie, std::string nazwisko, std::string adres, std::string numer, std::string mail);
void zadanie2a();
void zadanie2b();
void zadanie3a();
void zadanie3b();

// deklaracja zmiennych globalnych - do szybkich testów mo¿na zmieniaæ dane tutaj
// ramka wokó³ wizytówek zostanie dostosowana
std::string imie1 = "Krzysztof";					// dane do podpunktu b
std::string nazwisko1 = "Cyran";
std::string adres1 = "Wroclaw, ul. Wesola 20";
std::string numer1 = "445339221";
std::string mail1 = "218405@student.pwr.edu.pl";

std::string imie2 = "Adam";							// dane do podpunktu a
std::string nazwisko2 = "Malysz";
std::string adres2 = "Wisla, ul. Skoczkow 1";
std::string numer2 = "223442986";
std::string mail2 = "adam.malysz@wp.pl";

int main() {
	// OBOWI¥ZKOWY wydruk danych autora
	std::cout << "Autor: Krzysztof Cyran (SR/P 18:00) \n\n" ;
	
	//zadanie 1 a
	std::cout << "Zadanie 1 a):\n\n";
	zadanie1a(imie1,nazwisko1,adres1,numer1,mail1);
	
	//zadannie 1b
	std::cout << "\n\nZadanie 1 b):\n\n";
	zadanie1b(imie2,nazwisko2,adres2,numer2,mail2);	
	
	//zadanie 2a
	std::cout << "\n\nZadanie 2 a):\n\n";
	zadanie2a();
	
	//zadanie 2b
	std::cout << "\n\nZadanie 2 b):\n\n";
	zadanie2b();
		
	//zadanie 3a
	std::cout << "\n\nZadanie 3 a):\n\n";
	zadanie3a();

	//zadanie 3b
	std::cout << "\n\nZadanie 3 b):\n\n";
	zadanie3b();

	system("PAUSE");

	return 0;
}

//	w pierwszym zadaniu zrobi³em skaluj¹c¹ siê ramkê wokó³ wizytówki, u¿ycie iostream
void zadanie1a(std::string imie, std::string nazwisko, std::string adres, std::string numer, std::string mail)
{
	/*
	szukam najd³u¿szego ci¹gu znaków, tak by dostosowaæ rozmiar ramki wizytówki
	funkcja max() z biblioteki <algorithm> pozwala na 2 argumenty, st¹d zagnie¿d¿enie
	mo¿na równie¿ napisaæ prost¹ funkcjê robi¹c¹ to efektywniej
	*/
	int dlugosc = std::max(imie.length()+6,std::max(nazwisko.length()+10,std::max(adres.length()+7,std::max(numer.length()+9,mail.length()+6))));
	
	//góra ramki wizytówki, powiêkszona wzglêdem najd³u¿szego ci¹gu dla estetyki
	for (int i = 0; i<dlugosc+4;i++){
		std::cout << "*";
	}
	std::cout << "\n";
	
	//wyœwietlanie imienia
	std::cout << "* Imie: " << imie;
	for (unsigned int i=0; i <dlugosc-imie.length()-5;i++){
		std::cout <<" ";
	}
	std::cout << "*";
	std::cout << "\n";
	
	//wyœwietlanie nazwiska
	std::cout << "* Nazwisko: " << nazwisko;
	for (unsigned i=0; i<dlugosc-nazwisko.length()-9;i++){
		std::cout << " ";
	}
	std::cout << "*";
	std::cout << "\n";	
	
	//wyswietlenie adresu
	
	std::cout << "* Adres: " << adres;
	for (unsigned int i=0; i<dlugosc-adres.length()-6;i++){
		std::cout << " ";
	}
	std::cout << "*";
	std::cout << "\n";	

	//wyœwieltenie telefonu
	
	std::cout << "* Telefon: " << numer;
	for (unsigned int i=0; i<dlugosc-numer.length()-8;i++){
		std::cout << " ";
	}
	std::cout << "*";
	std::cout << "\n";		
	
	//wyœwietlenie maila
	
	std::cout << "* Mail: " << mail;
	for (unsigned int i=0; i<dlugosc-mail.length()-5;i++){
		std::cout << " ";
	}
	std::cout << "*";
	std::cout << "\n";		
	
	//dó³ ramki
	for (int i = 0; i<dlugosc+4;i++){
		std::cout << "*";
	}
	std::cout << "\n";	
	
}

// rozwi¹zanie analogiczne do 1a), u¿ycie stdio.h, metoda c_str() u¿yta do konwersji std::string na wskaŸnik do tablicy zawierajacej te znaki 
void zadanie1b(std::string imie, std::string nazwisko, std::string adres, std::string numer, std::string mail)
{
	int dlugosc = std::max(imie.length()+6,std::max(nazwisko.length()+10,std::max(adres.length()+7,std::max(numer.length()+9,mail.length()+6))));
	
	//góra ramki wizytówki, powiêkszona wzglêdem najd³u¿szego ci¹gu dla estetyki
	for (int i = 0; i<dlugosc+4;i++){
		printf("*");
	}
	printf("\n");
	
	//wyœwietlanie imienia
	printf("* Imie: %s", imie.c_str());
	for (unsigned int i=0; i <dlugosc-imie.length()-5;i++){
		printf(" ");
	}
	printf("*");
	printf("\n");
	
	//wyœwietlanie nazwiska
	printf("* Nazwisko: %s", nazwisko.c_str());
	for (unsigned int i=0; i<dlugosc-nazwisko.length()-9;i++){
		printf(" ");
	}
	printf("*");
	printf("\n");	
	
	//wyswietlenie adresu
	
	printf("* Adres: %s", adres.c_str());
	for (unsigned int i=0; i<dlugosc-adres.length()-6;i++){
		printf(" ");
	}
	printf("*");
	printf("\n");	

	//wyœwieltenie telefonu
	
	printf("* Telefon: %s", numer.c_str());
	for (unsigned int i=0; i<dlugosc-numer.length()-8;i++){
		printf(" ");
	}
	printf("*");
	printf("\n");		
	
	//wyœwietlenie maila
	
	printf("* Mail: %s", mail.c_str());
	for (unsigned int i=0; i<dlugosc-mail.length()-5;i++){
		printf(" ");
	}
	printf("*");
	printf("\n");		
	
	
	//dó³ ramki
	for (int i = 0; i<dlugosc+4;i++){
		printf("*");
	}
	printf("\n");	
	
}

// zadanie 2, iostream
void zadanie2a() {
	
	int a,b,c;		// trzy zmienne ca³kowite
	double long x;	// zmienna pomocnicza do  
	double mianownik = 3;
	
	/* Pobieranie danych: petle sprawdzaja, czy podano liczbe, oraz czy liczba jest ca³kowita
	   Pomaga to uniknac wysypania programu po wpisaniu przez uzytkownika blednego znaku	*/	
	while (true) {
		
		while (std::cout << "Podaj pierwsza liczbe calkowita: " && !(std::cin >> x)) {
			std::cin.clear(); //czysci flage niepoprawnego wejscia
   			std::cin.ignore(1000, '\n'); //odrzuca znaki z wejscia, 1000 to arbitralna, wysoka liczba, lub do napotkania \n
 			std::cout << "To nie jest liczba!\n";
		}
		a = int(x);
		if (a==x) break;
		std::cout << "To nie jest liczba calkowita!\n";
	}
	
	while (true) {
		
		while (std::cout << "Podaj druga liczbe calkowita: " && !(std::cin >> x)) {
			
   	   		std::cin.clear();
   			std::cin.ignore(1000, '\n');
 			std::cout << "To nie jest liczba!\n";
		}
		b = int(x);
		if (b==x) break;
		std::cout << "To nie jest liczba calkowita!\n";
	}	
	
	while (true) {
		
		while (std::cout << "Podaj trzecia liczbe calkowita: " && !(std::cin >> x)) {
			
   	   		std::cin.clear();
   			std::cin.ignore(1000, '\n');
 			std::cout << "To nie jest liczba!\n";
		}
		c = int(x);
		if (c==x) break;
		std::cout << "To nie jest liczba calkowita!\n";
	}	
	// wypisanie wyników, iostream
	std::cout << "\nWprowadzono liczby: " << a << ", " << b << ", " << c << "\n\n";
	std::cout << "Suma liczb to: " << a+b+c << "\n";
	std::cout << "Iloczyn liczb to: "<< a*b*c << "\n";
	std::cout << "Srednia arytmetyczna liczb to: " << (a+b+c)/mianownik << "\n\n";
}

// zadanie 2, stdio.h
void zadanie2b() {
	
	int a,b,c;		// trzy zmienne ca³kowite
	double mianownik = 3;
		
	while (printf("Podaj pierwsza liczbe calkowita: ") && scanf("%d", &a) != 1) {
 		while (getchar() != '\n');
			printf("\nTo nie jest liczba! ");
	}		
	
	while (printf("Podaj druga liczbe calkowita: ") && scanf("%d", &b) != 1) {
 		while (getchar() != '\n');
			printf("\nTo nie jest liczba! ");
	}		
	
	while (printf("Podaj trzecia liczbe calkowita: ") && scanf("%d", &c) != 1) {
 		while (getchar() != '\n');
			printf("\nTo nie jest liczba! ");
	}		
	printf("\nWprowadzono liczby:  %d, %d, %d \n\n", a, b, c);
	printf("Suma liczb to: %ld\n", a+b+c );
	printf("Iloczyn liczb to: %ld\n", a*b*c);
	printf("Srednia arytmetyczna liczb to: %lf",(a+b+c)/mianownik);
}	

//zadanie 3, stdio.h
void zadanie3a() {
	
	float r;	//promien
	
	while (true) {	// upewniam siê, ¿e wpisana liczba jest rzeczywista
		
		printf("Podaj wartosc promienia kola: ");
		while (scanf("%f", &r) != 1) {	// sprawdzam czy scanf przyjal prawidlowy argument
    		while (getchar() != '\n');
    			printf ("\nTo nie jest liczba! Podaj wartosc promiania kola: ");
 		 }		
		if (r>0) break; //odrzuca ujemne
		printf("\nTo nie jest liczba rzeczywista!\n");
	}
	printf("\nPromien kola to: %f\n", r);
	printf("Obwod kola to: %f\n", 2*M_PI*r);
	printf("Pole kola to: %f\n\n", M_PI*r*r);
	
}
//zadanie 3, iostream
void zadanie3b() {	// 
	
	float r;
	
	while (true) {
		
		while (std::cout << "Podaj wartosc promienia kola: " && !(std::cin >> r)) {
   	   		std::cin.clear();
   			std::cin.ignore(1000, '\n');
 			std::cout << "\nTo nie jest liczba!\n\n";
		}
		
		if (r>0) break;
		std::cout << "To nie jest liczba rzeczywista!\n";
	}
	std::cout << "\nPromien kola to: " << r << "\n";
	std::cout << "Obwod kola to: " << 2*M_PI*r << "\n";
	std::cout << "Pole kola to: " << M_PI*r*r << "\n\n";
	
}
