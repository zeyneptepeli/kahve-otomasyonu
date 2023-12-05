#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
	int solust = 201;
	int solalt = 200;
	int sagust = 187;
	int sagalt = 188;
	int dikey = 186;
	int yatay = 205;
	int tutar = 0;
	int ucret = 0;
	int adet = 0;
	int ek = 0;

	char sol_ust = solust;
	char sol_alt = solalt;
	char sag_ust = sagust;
	char sag_alt = sagalt;
	char dky = dikey;
	char yty = yatay;
	char inp;
	//chardan sınırı geçtiği için yazdıramadım o yüzden int değerlerini alıp sonra char tipine döndürdüm


	do {
		tutar = 0;    //bunları tekrar 0'ladım çünkü kod çalışmadı 1.kahveyi gösterse de 2.' de hata veriyordu ben de her döngüde 0'layim dedim o zaman çalıştı
		ucret = 0;
		adet = 0;
		ek = 0;
		system("CLS");     //ekrandan sildirmek için
		system("color F1");    //bright white ve blue için


		/////////////////////////////////////////////////////////////////////////////////
		printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t"); // yaziyi ortalamak icin
		printf("%c", sol_ust); // sol ust kose

		// ust kisim
		for (int i = 0; i < 50; i++) {  //çerçevenin yatay kısmını yapabilmek için 50 tane kısa çizgi kullanıyoruz

			printf("%c", yty);

		}

		printf("%c", sag_ust); // sag ust kose

		// sag kenar sol kenar ve yazılar
		for (int i = 0; i < 3; i++) {

			printf("\n\t\t\t\t\t\t\t");
			printf("%c", dky);

			for (int i = 0; i < 50; i++) {     //dikey kısımlar için

				printf(" ");

			}
			printf("%c", dky);



		}

		printf("\n\t\t\t\t\t\t\t");
		printf("%c", dky);
		printf("             Sanal Kafeye Hos Geldiniz            ");    //yazıyı iki dikey çerçeve çubuğunun arasına yazdırıyoruz.
		printf("%c", dky);


		for (int i = 0; i < 5; i++) {    //ilk 5 satırdaki sağ sol çizgilerini koyuyor sonrasında ise hoşgeldiniz yazısını koyuyor

			printf("\n\t\t\t\t\t\t\t");
			printf("%c", dky);

			for (int i = 0; i < 50; i++) {

				printf(" ");
				//döngüde araya konmaz yazı (unutma) döngüyü bitirip bir satırı
				//manuel yapıp devam ettiricem  o yüzden    
			}
			printf("%c", dky);



		}

		printf("\n\t\t\t\t\t\t\t");
		printf("%c", dky);
		printf("  Devam etmek icin D/d ye cikis icin esc ye basin ");   //d'ye basın yazısını koyuyor
		printf("%c", dky);

		for (int i = 0; i < 5; i++) {

			printf("\n\t\t\t\t\t\t\t");
			printf("%c", dky);

			for (int i = 0; i < 50; i++) {

				printf(" ");

			}
			printf("%c", dky);



		}


		printf("\n\t\t\t\t\t\t\t");
		printf("%c", sol_alt); // sol kose

		// alt kenar
		for (int i = 0; i < 50; i++) {

			printf("%c", yty);

		}
		printf("%c", sag_alt); // sag kose
		////////////////////////////////////////////////////////////////////////////////////

		inp = _getch(); //girdi



		if (inp == char(27)) {   //esc ve yes no lar için
			system("CLS");   //ekrandaki yazıları silirmeye yarar
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t");
			printf("Cikis yapmak istiyor musun?e/h\n");
			inp = _getch();    //bastığımız tuş algılansın diye
			if (inp == 'e' || inp == 'E') {   //hem büyük harf hem de küçük harf için

				inp = char(27);

			}
			else if (inp == 'h' || inp == 'H') {

				continue;

			}
			else {
				inp = char('h');
			}
		}
		else if (inp == char('d') or inp == char('D')) {

			// kahve cesitleri
			system("CLS");
			printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t");  //alt satır ve ortalama için
			printf("KAHVE CESITLERI");
			printf("\n\t\t\t\t\t\t\t");
			printf("------------------------------------------------");
			printf("\n\t\t\t\t\t\t\t");
			printf("1- TURK KAHVESI                             40TL");
			printf("\n\t\t\t\t\t\t\t");
			printf("2- ESPRESSO                                 33TL");
			printf("\n\t\t\t\t\t\t\t");
			printf("3- MOCHA                                    70TL");
			printf("\n\t\t\t\t\t\t\t");
			printf("4- AMERICANO                                47TL");
			printf("\n\t\t\t\t\t\t\t");
			printf("5- CAPPUCINO                                52TL");
			printf("\n\t\t\t\t\t\t\t");
			printf("6- CAFFE LATTE                              54TL");
			printf("\n\t\t\t\t\t\t\t");
			printf("7- SICAK CIKOLATA                           69TL");
			printf("\n\t\t\t\t\t\t\t");
			printf("8- SALEP                                    73TL");
			printf("\n\t\t\t\t\t\t\t");
			printf("                                                ");
			printf("\n\t\t\t\t\t\t\t");
			printf("                                                ");
			printf("\n\t\t\t\t\t\t\t");
			printf("Lutfen Seciminizi Yapiniz:");
			inp = _getch();
			if (inp == '1') {
				system("CLS");   //ekrandakileri sildirmek için
				system("color E0");    //siyah yazı sarı ekran için
				printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t");
				printf("TURK KAHVESI MENUSU");
				printf("\n\t\t\t\t\t\t\t");
				printf("-----------------------------------------------");
				printf("\n\t\t\t\t\t\t\t");
				printf("1- SUTLU TURK KAHVESI                       49TL");
				printf("\n\t\t\t\t\t\t\t");
				printf("2- DAMLA SAKIZLI TURK KAHVESI               46TL");
				printf("\n\t\t\t\t\t\t\t");
				printf("3- CIKOLATALI TURK KAHVESI                  50TL");
				printf("\n\t\t\t\t\t\t\t");
				printf("4- SADE TURK KAHVESI                        40TL");
				printf("\n\t\t\t\t\t\t\t");
				printf("Lutfen Seciminizi Yapiniz:");
				inp = _getch();




				if (inp == '1') {

					system("CLS");
					printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
					printf("Kac adet SUTLU TURK KAHVESI istiyorsunuz?");
					printf("\n\t\t\t\t\t\t\t");
					printf("Adet Giriniz: ");          //adet kadar ücret bastıran kodumuz
					scanf_s("%d", &adet);
					tutar = tutar + 49 * adet;
					printf("\n\t\t\t\t\t\t\t");
					printf("Toplam odemeniz gereken tutar: "); printf("%d", tutar);
					printf("\n\t\t\t\t\t\t\t");
					printf("Yatiracaginiz ucreti giriniz:");
					scanf_s("%d", &ucret);

					if (ucret >= tutar) {
						system("CLS");
						printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
						printf("Toplam Tutar: "); printf("%d", tutar);
						printf("\n\t\t\t\t\t\t\t");
						printf("Odenen Ucret: "); printf("%d", ucret);
						printf("\n\t\t\t\t\t\t\t");                           //tutarı ücreti ve para üstünü bastıran kod
						printf("Geri odeme: "); printf("%d", ucret - tutar);
						printf("\n\t\t\t\t\t\t\t");
						printf("Afiyet Olsun Yine Bekleriz");
						inp = _getch();
						inp = 'n'; // esc ye basılma durumunda programın kapanmaması icin

					}
					else {
						
						while (ucret < tutar) {
							system("CLS");
							printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
							printf("Toplam Tutar: "); printf("%d", tutar);       //kod açıklaması:toplam tutar 100 olsun ben 50 verdim sonra 10 daha verdim 60 vermiş oldum
							printf("\n\t\t\t\t\t\t\t");                          //100 olana kadar while çalışacak sonrasında ise paraüstü(while dan hemen sonra)
							printf("Odenen Toplam Ucret: "); printf("%d", ucret);
							printf("\n\t\t\t\t\t\t\t");
							printf("ODEME MIKTARI YETERSIZ! Ek odeme giriniz: ");
							scanf_s("%d", &ek);

							ucret = ucret + ek;
						}
						system("CLS");
						printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
						printf("Toplam Tutar: "); printf("%d", tutar);
						printf("\n\t\t\t\t\t\t\t");
						printf("Odenen Ucret: "); printf("%d", ucret);
						printf("\n\t\t\t\t\t\t\t");
						printf("Geri odeme: "); printf("%d", ucret - tutar);
						printf("\n\t\t\t\t\t\t\t");
						printf("Afiyet Olsun Yine Bekleriz");
						inp = _getch();
						inp = 'n'; // esc ye basılma durumunda programın kapanmaması icin
					}

				}
				else if (inp == '2') {
					system("CLS");
					printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
					printf("Kac adet DAMLA SAKIZLI TURK KAHVESI istiyorsunuz?");
					printf("\n\t\t\t\t\t\t\t");
					printf("Adet Giriniz: ");
					scanf_s("%d", &adet);
					tutar = tutar + 46 * adet;
					printf("\n\t\t\t\t\t\t\t");
					printf("Toplam odemeniz gereken tutar: "); printf("%d", tutar);
					printf("\n\t\t\t\t\t\t\t");
					printf("Yatiracaginiz ucreti giriniz:");
					scanf_s("%d", &ucret);

					if (ucret >= tutar) {
						system("CLS");
						printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
						printf("Toplam Tutar: "); printf("%d", tutar);      //aynı adımları her kahve çeşidi için tekrar ediyoruz.
						printf("\n\t\t\t\t\t\t\t");
						printf("Odenen Ucret: "); printf("%d", ucret);
						printf("\n\t\t\t\t\t\t\t");
						printf("Geri odeme: "); printf("%d", ucret - tutar);
						printf("\n\t\t\t\t\t\t\t");
						printf("Afiyet Olsun Yine Bekleriz");
						inp = _getch();
						inp = 'n'; // esc ye basılma durumunda programın kapanmaması icin

					}
					else {
						
						while (ucret < tutar) {
							system("CLS");
							printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
							printf("Toplam Tutar: "); printf("%d", tutar);
							printf("\n\t\t\t\t\t\t\t");
							printf("Odenen Toplam Ucret: "); printf("%d", ucret);
							printf("\n\t\t\t\t\t\t\t");
							printf("ODEME MIKTARI YETERSIZ! Ek odeme giriniz: ");
							scanf_s("%d", &ek);

							ucret = ucret + ek;
						}
						system("CLS");
						printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
						printf("Toplam Tutar: "); printf("%d", tutar);
						printf("\n\t\t\t\t\t\t\t");
						printf("Odenen Ucret: "); printf("%d", ucret);
						printf("\n\t\t\t\t\t\t\t");
						printf("Geri odeme: "); printf("%d", ucret - tutar);
						printf("\n\t\t\t\t\t\t\t");
						printf("Afiyet Olsun Yine Bekleriz");
						inp = _getch();
						inp = 'n'; // esc ye basılma durumunda programın kapanmaması icin
					}
				}
				else if (inp == '3') {
					system("CLS");
					printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
					printf("Kac adet CIKOLATALI TURK KAHVESI istiyorsunuz?");
					printf("\n\t\t\t\t\t\t\t");
					printf("Adet Giriniz: ");
					scanf_s("%d", &adet);
					tutar = tutar + 50 * adet;
					printf("\n\t\t\t\t\t\t\t");
					printf("Toplam odemeniz gereken tutar: "); printf("%d", tutar);
					printf("\n\t\t\t\t\t\t\t");
					printf("Yatiracaginiz ucreti giriniz:");
					scanf_s("%d", &ucret);

					if (ucret >= tutar) {
						system("CLS");
						printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
						printf("Toplam Tutar: "); printf("%d", tutar);
						printf("\n\t\t\t\t\t\t\t");
						printf("Odenen Ucret: "); printf("%d", ucret);
						printf("\n\t\t\t\t\t\t\t");
						printf("Geri odeme: "); printf("%d", ucret - tutar);
						printf("\n\t\t\t\t\t\t\t");
						printf("Afiyet Olsun Yine Bekleriz");
						inp = _getch();
						inp = 'n'; // esc ye basılma durumunda programın kapanmaması icin

					}
					else {
						
						while (ucret < tutar) {
							system("CLS");
							printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
							printf("Toplam Tutar: "); printf("%d", tutar);
							printf("\n\t\t\t\t\t\t\t");
							printf("Odenen Toplam Ucret: "); printf("%d", ucret);
							printf("\n\t\t\t\t\t\t\t");
							printf("ODEME MIKTARI YETERSIZ! Ek odeme giriniz: ");
							scanf_s("%d", &ek);

							ucret = ucret + ek;
						}
						system("CLS");
						printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
						printf("Toplam Tutar: "); printf("%d", tutar);
						printf("\n\t\t\t\t\t\t\t");
						printf("Odenen Ucret: "); printf("%d", ucret);
						printf("\n\t\t\t\t\t\t\t");
						printf("Geri odeme: "); printf("%d", ucret - tutar);
						printf("\n\t\t\t\t\t\t\t");
						printf("Afiyet Olsun Yine Bekleriz");
						inp = _getch();
						inp = 'n'; // esc ye basılma durumunda programın kapanmaması icin
					}
				}
				else if (inp == '4') {
					system("CLS");
					printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
					printf("Kac adet SADE TURK KAHVESI istiyorsunuz?");
					printf("\n\t\t\t\t\t\t\t");
					printf("Adet Giriniz: ");
					scanf_s("%d", &adet);
					tutar = tutar + 40 * adet;
					printf("\n\t\t\t\t\t\t\t");
					printf("Toplam odemeniz gereken tutar: "); printf("%d", tutar);
					printf("\n\t\t\t\t\t\t\t");
					printf("Yatiracaginiz ucreti giriniz:");
					scanf_s("%d", &ucret);

					if (ucret >= tutar) {
						system("CLS");
						printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
						printf("Toplam Tutar: "); printf("%d", tutar);
						printf("\n\t\t\t\t\t\t\t");
						printf("Odenen Ucret: "); printf("%d", ucret);
						printf("\n\t\t\t\t\t\t\t");
						printf("Geri odeme: "); printf("%d", ucret - tutar);
						printf("\n\t\t\t\t\t\t\t");
						printf("Afiyet Olsun Yine Bekleriz");
						inp = _getch();
						inp = 'n'; // esc ye basılma durumunda programın kapanmaması icin

					}
					else {
						
						while (ucret < tutar) {
							system("CLS");
							printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
							printf("Toplam Tutar: "); printf("%d", tutar);
							printf("\n\t\t\t\t\t\t\t");
							printf("Odenen Toplam Ucret: "); printf("%d", ucret);
							printf("\n\t\t\t\t\t\t\t");
							printf("ODEME MIKTARI YETERSIZ! Ek odeme giriniz: ");
							scanf_s("%d", &ek);

							ucret = ucret + ek;
						}
						system("CLS");
						printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
						printf("Toplam Tutar: "); printf("%d", tutar);
						printf("\n\t\t\t\t\t\t\t");
						printf("Odenen Ucret: "); printf("%d", ucret);
						printf("\n\t\t\t\t\t\t\t");
						printf("Geri odeme: "); printf("%d", ucret - tutar);
						printf("\n\t\t\t\t\t\t\t");
						printf("Afiyet Olsun Yine Bekleriz");
						inp = _getch();
						inp = 'n'; // esc ye basılma durumunda programın kapanmaması icin
					}
				}
				else {
					system("CLS");
					printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t");
					printf("LUTFEN GECERLI SECIM YAPINIZ");
					inp = _getch();
					inp = 'n'; // esc ye basılma durumunda programın kapanmaması icin
				}


			}
			else if (inp == '2') {
				system("CLS");
				system("color A0");
				printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t");
				printf("ESPRESSO MENUSU");
				printf("\n\t\t\t\t\t\t\t");
				printf("-----------------------------------------------");
				printf("\n\t\t\t\t\t\t\t");
				printf("1- DOUBLE ESPRESSO                          43TL");
				printf("\n\t\t\t\t\t\t\t");
				printf("2- ESPRESSO MACCHIATO                       40TL");
				printf("\n\t\t\t\t\t\t\t");
				printf("3- DOUBLE ESPRESSO MACCHIATO                50TL");
				printf("\n\t\t\t\t\t\t\t");
				printf("4- ESPRESSO                                 40TL");
				printf("\n\t\t\t\t\t\t\t");
				printf("Lutfen Seciminizi Yapiniz:");

				inp = _getch();
				if (inp == '1') {

					system("CLS");
					printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
					printf("Kac adet DOUBLE ESPRESSO istiyorsunuz?");
					printf("\n\t\t\t\t\t\t\t");
					printf("Adet Giriniz: ");
					scanf_s("%d", &adet);
					tutar = tutar + 43 * adet;
					printf("\n\t\t\t\t\t\t\t");
					printf("Toplam odemeniz gereken tutar: "); printf("%d", tutar);
					printf("\n\t\t\t\t\t\t\t");
					printf("Yatiracaginiz ucreti giriniz:");
					scanf_s("%d", &ucret);

					if (ucret >= tutar) {
						system("CLS");
						printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
						printf("Toplam Tutar: "); printf("%d", tutar);
						printf("\n\t\t\t\t\t\t\t");
						printf("Odenen Ucret: "); printf("%d", ucret);
						printf("\n\t\t\t\t\t\t\t");
						printf("Geri odeme: "); printf("%d", ucret - tutar);
						printf("\n\t\t\t\t\t\t\t");
						printf("Afiyet Olsun Yine Bekleriz");
						inp = _getch();
						inp = 'n'; // esc ye basılma durumunda programın kapanmaması icin

					}
					else {
					

						while (ucret < tutar) {
							system("CLS");
							printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
							printf("Toplam Tutar: "); printf("%d", tutar);
							printf("\n\t\t\t\t\t\t\t");
							printf("Odenen Toplam Ucret: "); printf("%d", ucret);
							printf("\n\t\t\t\t\t\t\t");
							printf("ODEME MIKTARI YETERSIZ! Ek odeme giriniz: ");
							scanf_s("%d", &ek);

							ucret = ucret + ek;
						}
						system("CLS");
						printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
						printf("Toplam Tutar: "); printf("%d", tutar);
						printf("\n\t\t\t\t\t\t\t");
						printf("Odenen Ucret: "); printf("%d", ucret);
						printf("\n\t\t\t\t\t\t\t");
						printf("Geri odeme: "); printf("%d", ucret - tutar);
						printf("\n\t\t\t\t\t\t\t");
						printf("Afiyet Olsun Yine Bekleriz");
						inp = _getch();
						inp = 'n'; // esc ye basılma durumunda programın kapanmaması icin
					}

				}
				else if (inp == '2') {

					system("CLS");
					printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
					printf("Kac adet ESPRESSO MACCHIATO istiyorsunuz?");
					printf("\n\t\t\t\t\t\t\t");
					printf("Adet Giriniz: ");
					scanf_s("%d", &adet);
					tutar = tutar + 40 * adet;
					printf("\n\t\t\t\t\t\t\t");
					printf("Toplam odemeniz gereken tutar: "); printf("%d", tutar);
					printf("\n\t\t\t\t\t\t\t");
					printf("Yatiracaginiz ucreti giriniz:");
					scanf_s("%d", &ucret);

					if (ucret >= tutar) {
						system("CLS");
						printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
						printf("Toplam Tutar: "); printf("%d", tutar);
						printf("\n\t\t\t\t\t\t\t");
						printf("Odenen Ucret: "); printf("%d", ucret);
						printf("\n\t\t\t\t\t\t\t");
						printf("Geri odeme: "); printf("%d", ucret - tutar);
						printf("\n\t\t\t\t\t\t\t");
						printf("Afiyet Olsun Yine Bekleriz");
						inp = _getch();
						inp = 'n'; // esc ye basılma durumunda programın kapanmaması icin

					}
					else {
						

						while (ucret < tutar) {
							system("CLS");
							printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
							printf("Toplam Tutar: "); printf("%d", tutar);
							printf("\n\t\t\t\t\t\t\t");
							printf("Odenen Toplam Ucret: "); printf("%d", ucret);
							printf("\n\t\t\t\t\t\t\t");
							printf("ODEME MIKTARI YETERSIZ! Ek odeme giriniz: ");
							scanf_s("%d", &ek);

							ucret = ucret + ek;
						}
						system("CLS");
						printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
						printf("Toplam Tutar: "); printf("%d", tutar);
						printf("\n\t\t\t\t\t\t\t");
						printf("Odenen Ucret: "); printf("%d", ucret);
						printf("\n\t\t\t\t\t\t\t");
						printf("Geri odeme: "); printf("%d", ucret - tutar);
						printf("\n\t\t\t\t\t\t\t");
						printf("Afiyet Olsun Yine Bekleriz");
						inp = _getch();
						inp = 'n'; // esc ye basılma durumunda programın kapanmaması icin
					}

				}
				else if (inp == '3') {

					system("CLS");
					printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
					printf("Kac adet DOUBLE ESPRESSO MACCHIATO istiyorsunuz?");
					printf("\n\t\t\t\t\t\t\t");
					printf("Adet Giriniz: ");
					scanf_s("%d", &adet);
					tutar = tutar + 46 * adet;
					printf("\n\t\t\t\t\t\t\t");
					printf("Toplam odemeniz gereken tutar: "); printf("%d", tutar);
					printf("\n\t\t\t\t\t\t\t");
					printf("Yatiracaginiz ucreti giriniz:");
					scanf_s("%d", &ucret);

					if (ucret >= tutar) {
						system("CLS");
						printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
						printf("Toplam Tutar: "); printf("%d", tutar);
						printf("\n\t\t\t\t\t\t\t");
						printf("Odenen Ucret: "); printf("%d", ucret);
						printf("\n\t\t\t\t\t\t\t");
						printf("Geri odeme: "); printf("%d", ucret - tutar);
						printf("\n\t\t\t\t\t\t\t");
						printf("Afiyet Olsun Yine Bekleriz");
						inp = _getch();
						inp = 'n'; // esc ye basılma durumunda programın kapanmaması icin

					}
					else {
						

						while (ucret < tutar) {
							system("CLS");
							printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
							printf("Toplam Tutar: "); printf("%d", tutar);
							printf("\n\t\t\t\t\t\t\t");
							printf("Odenen Toplam Ucret: "); printf("%d", ucret);
							printf("\n\t\t\t\t\t\t\t");
							printf("ODEME MIKTARI YETERSIZ! Ek odeme giriniz: ");
							scanf_s("%d", &ek);

							ucret = ucret + ek;
						}
						system("CLS");
						printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
						printf("Toplam Tutar: "); printf("%d", tutar);
						printf("\n\t\t\t\t\t\t\t");
						printf("Odenen Ucret: "); printf("%d", ucret);
						printf("\n\t\t\t\t\t\t\t");
						printf("Geri odeme: "); printf("%d", ucret - tutar);
						printf("\n\t\t\t\t\t\t\t");
						printf("Afiyet Olsun Yine Bekleriz");
						inp = _getch();
						inp = 'n'; // esc ye basılma durumunda programın kapanmaması icin
					}

				}
				else if (inp == '4') {

					system("CLS");
					printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
					printf("Kac adet ESPRESSO istiyorsunuz?");
					printf("\n\t\t\t\t\t\t\t");
					printf("Adet Giriniz: ");
					scanf_s("%d", &adet);
					tutar = tutar + 33 * adet;
					printf("\n\t\t\t\t\t\t\t");
					printf("Toplam odemeniz gereken tutar: "); printf("%d", tutar);
					printf("\n\t\t\t\t\t\t\t");
					printf("Yatiracaginiz ucreti giriniz:");
					scanf_s("%d", &ucret);

					if (ucret >= tutar) {
						system("CLS");
						printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
						printf("Toplam Tutar: "); printf("%d", tutar);
						printf("\n\t\t\t\t\t\t\t");
						printf("Odenen Ucret: "); printf("%d", ucret);
						printf("\n\t\t\t\t\t\t\t");
						printf("Geri odeme: "); printf("%d", ucret - tutar);
						printf("\n\t\t\t\t\t\t\t");
						printf("Afiyet Olsun Yine Bekleriz");
						inp = _getch();
						inp = 'n'; // esc ye basılma durumunda programın kapanmaması icin

					}
					else {
						  

						while (ucret < tutar) {
							system("CLS");
							printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
							printf("Toplam Tutar: "); printf("%d", tutar);
							printf("\n\t\t\t\t\t\t\t");
							printf("Odenen Toplam Ucret: "); printf("%d", ucret);
							printf("\n\t\t\t\t\t\t\t");
							printf("ODEME MIKTARI YETERSIZ! Ek odeme giriniz: ");
							scanf_s("%d", &ek);

							ucret = ucret + ek;
						}
						system("CLS");
						printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
						printf("Toplam Tutar: "); printf("%d", tutar);
						printf("\n\t\t\t\t\t\t\t");
						printf("Odenen Ucret: "); printf("%d", ucret);
						printf("\n\t\t\t\t\t\t\t");
						printf("Geri odeme: "); printf("%d", ucret - tutar);
						printf("\n\t\t\t\t\t\t\t");
						printf("Afiyet Olsun Yine Bekleriz");
						inp = _getch();
						inp = 'n'; // esc ye basılma durumunda programın kapanmaması icin
					}

				}
				else {
					system("CLS");
					printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t");
					printf("LUTFEN GECERLI SECIM YAPINIZ");
					inp = _getch();
					inp = 'n'; // esc ye basılma durumunda programın kapanmaması icin
				}

			}
			else if (inp == '3') {
				system("CLS");
				system("color D0");     //mor ve siyah
				printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t");
				printf("MOCHA MENUSU");
				printf("\n\t\t\t\t\t\t\t");
				printf("-----------------------------------------------");
				printf("\n\t\t\t\t\t\t\t");
				printf("1- SADE MOCHA                              70TL");
				printf("\n\t\t\t\t\t\t\t");
				printf("2- CIKOLATALI MOCHA                        75TL");
				printf("\n\t\t\t\t\t\t\t");
				printf("Lutfen Seciminizi Yapiniz:");
				inp = _getch();

				if (inp == '1') {

					system("CLS");
					printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
					printf("Kac adet SADE MOCHA istiyorsunuz?");
					printf("\n\t\t\t\t\t\t\t");
					printf("Adet Giriniz: ");                        //aynı işlemleri tekrar ediyoruz
					scanf_s("%d", &adet);
					tutar = tutar + 70 * adet;
					printf("\n\t\t\t\t\t\t\t");
					printf("Toplam odemeniz gereken tutar: "); printf("%d", tutar);
					printf("\n\t\t\t\t\t\t\t");
					printf("Yatiracaginiz ucreti giriniz:");
					scanf_s("%d", &ucret);

					if (ucret >= tutar) {
						system("CLS");
						printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
						printf("Toplam Tutar: "); printf("%d", tutar);
						printf("\n\t\t\t\t\t\t\t");
						printf("Odenen Ucret: "); printf("%d", ucret);
						printf("\n\t\t\t\t\t\t\t");
						printf("Geri odeme: "); printf("%d", ucret - tutar);
						printf("\n\t\t\t\t\t\t\t");
						printf("Afiyet Olsun Yine Bekleriz");
						inp = _getch();
						inp = 'n'; // esc ye basılma durumunda programın kapanmaması icin

					}
					else {
						
						while (ucret < tutar) {
							system("CLS");
							printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
							printf("Toplam Tutar: "); printf("%d", tutar);
							printf("\n\t\t\t\t\t\t\t");
							printf("Odenen Toplam Ucret: "); printf("%d", ucret);
							printf("\n\t\t\t\t\t\t\t");
							printf("ODEME MIKTARI YETERSIZ! Ek odeme giriniz: ");
							scanf_s("%d", &ek);

							ucret = ucret + ek;
						}
						system("CLS");
						printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
						printf("Toplam Tutar: "); printf("%d", tutar);
						printf("\n\t\t\t\t\t\t\t");
						printf("Odenen Ucret: "); printf("%d", ucret);
						printf("\n\t\t\t\t\t\t\t");
						printf("Geri odeme: "); printf("%d", ucret - tutar);
						printf("\n\t\t\t\t\t\t\t");
						printf("Afiyet Olsun Yine Bekleriz");
						inp = _getch();
						inp = 'n'; // esc ye basılma durumunda programın kapanmaması icin
					}

				}
				else if (inp == '2') {

					system("CLS");
					printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
					printf("Kac adet CIKOLATALI MOCHA istiyorsunuz?");
					printf("\n\t\t\t\t\t\t\t");
					printf("Adet Giriniz: ");
					scanf_s("%d", &adet);
					tutar = tutar + 75 * adet;
					printf("\n\t\t\t\t\t\t\t");
					printf("Toplam odemeniz gereken tutar: "); printf("%d", tutar);
					printf("\n\t\t\t\t\t\t\t");
					printf("Yatiracaginiz ucreti giriniz:");
					scanf_s("%d", &ucret);

					if (ucret >= tutar) {
						system("CLS");
						printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
						printf("Toplam Tutar: "); printf("%d", tutar);
						printf("\n\t\t\t\t\t\t\t");
						printf("Odenen Ucret: "); printf("%d", ucret);
						printf("\n\t\t\t\t\t\t\t");
						printf("Geri odeme: "); printf("%d", ucret - tutar);
						printf("\n\t\t\t\t\t\t\t");
						printf("Afiyet Olsun Yine Bekleriz");
						inp = _getch();
						inp = 'n'; // esc ye basılma durumunda programın kapanmaması icin

					}
					else {
						
						while (ucret < tutar) {
							system("CLS");
							printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
							printf("Toplam Tutar: "); printf("%d", tutar);
							printf("\n\t\t\t\t\t\t\t");
							printf("Odenen Toplam Ucret: "); printf("%d", ucret);
							printf("\n\t\t\t\t\t\t\t");
							printf("ODEME MIKTARI YETERSIZ! Ek odeme giriniz: ");
							scanf_s("%d", &ek);

							ucret = ucret + ek;
						}
						system("CLS");
						printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
						printf("Toplam Tutar: "); printf("%d", tutar);
						printf("\n\t\t\t\t\t\t\t");
						printf("Odenen Ucret: "); printf("%d", ucret);
						printf("\n\t\t\t\t\t\t\t");
						printf("Geri odeme: "); printf("%d", ucret - tutar);
						printf("\n\t\t\t\t\t\t\t");
						printf("Afiyet Olsun Yine Bekleriz");
						inp = _getch();
						inp = 'n'; // esc ye basılma durumunda programın kapanmaması icin
					}

				}
				else {
					system("CLS");
					printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t");
					printf("LUTFEN GECERLI SECIM YAPINIZ");
					inp = _getch();
					inp = 'n'; // esc ye basılma durumunda programın kapanmaması icin
				}


			}
			else if (inp == '4') {
				if (true) {

					system("CLS");
					system("color B0");
					printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
					printf("Kac adet AMERICANO istiyorsunuz?");
					printf("\n\t\t\t\t\t\t\t");
					printf("Adet Giriniz: ");
					scanf_s("%d", &adet);
					tutar = tutar + 47 * adet;
					printf("\n\t\t\t\t\t\t\t");
					printf("Toplam odemeniz gereken tutar: "); printf("%d", tutar);
					printf("\n\t\t\t\t\t\t\t");
					printf("Yatiracaginiz ucreti giriniz:");
					scanf_s("%d", &ucret);

					if (ucret >= tutar) {
						system("CLS");
						printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
						printf("Toplam Tutar: "); printf("%d", tutar);
						printf("\n\t\t\t\t\t\t\t");
						printf("Odenen Ucret: "); printf("%d", ucret);
						printf("\n\t\t\t\t\t\t\t");
						printf("Geri odeme: "); printf("%d", ucret - tutar);
						printf("\n\t\t\t\t\t\t\t");
						printf("Afiyet Olsun Yine Bekleriz");
						inp = _getch();
						inp = 'n'; // esc ye basılma durumunda programın kapanmaması icin

					}
					else {
						
						while (ucret < tutar) {
							system("CLS");
							printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
							printf("Toplam Tutar: "); printf("%d", tutar);
							printf("\n\t\t\t\t\t\t\t");
							printf("Odenen Toplam Ucret: "); printf("%d", ucret);
							printf("\n\t\t\t\t\t\t\t");
							printf("ODEME MIKTARI YETERSIZ! Ek odeme giriniz: ");
							scanf_s("%d", &ek);

							ucret = ucret + ek;
						}
						system("CLS");
						printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
						printf("Toplam Tutar: "); printf("%d", tutar);
						printf("\n\t\t\t\t\t\t\t");
						printf("Odenen Ucret: "); printf("%d", ucret);
						printf("\n\t\t\t\t\t\t\t");
						printf("Geri odeme: "); printf("%d", ucret - tutar);
						printf("\n\t\t\t\t\t\t\t");
						printf("Afiyet Olsun Yine Bekleriz");
						inp = _getch();
						inp = 'n'; // esc ye basılma durumunda programın kapanmaması icin
					}

				}


			}
			else if (inp == '5') {
				if (true) {      //aslında if değil if'in içindekiler kullanılacak burada ama onu direkt yapıştırınca süslü parantezlerden biri hata veriyor ama göstermiyor.
					//if'in içinin de kalması gerekiyor yani bunun için (if'in içi true olursa çalışır) direkt true yazdım. 
					system("CLS");
					system("color 80");
					printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
					printf("Kac adet CAPPUCINO istiyorsunuz?");
					printf("\n\t\t\t\t\t\t\t");
					printf("Adet Giriniz: ");
					scanf_s("%d", &adet);
					tutar = tutar + 52 * adet;
					printf("\n\t\t\t\t\t\t\t");
					printf("Toplam odemeniz gereken tutar: "); printf("%d", tutar);
					printf("\n\t\t\t\t\t\t\t");
					printf("Yatiracaginiz ucreti giriniz:");
					scanf_s("%d", &ucret);

					if (ucret >= tutar) {
						system("CLS");
						printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
						printf("Toplam Tutar: "); printf("%d", tutar);
						printf("\n\t\t\t\t\t\t\t");
						printf("Odenen Ucret: "); printf("%d", ucret);
						printf("\n\t\t\t\t\t\t\t");
						printf("Geri odeme: "); printf("%d", ucret - tutar);
						printf("\n\t\t\t\t\t\t\t");
						printf("Afiyet Olsun Yine Bekleriz");
						inp = _getch();
						inp = 'n'; // esc ye basılma durumunda programın kapanmaması icin

					}
					else {
						

						while (ucret < tutar) {
							system("CLS");
							printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
							printf("Toplam Tutar: "); printf("%d", tutar);
							printf("\n\t\t\t\t\t\t\t");
							printf("Odenen Toplam Ucret: "); printf("%d", ucret);
							printf("\n\t\t\t\t\t\t\t");
							printf("ODEME MIKTARI YETERSIZ! Ek odeme giriniZ: ");
							scanf_s("%d", &ek);

							ucret = ucret + ek;
						}
						system("CLS");
						printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
						printf("Toplam Tutar: "); printf("%d", tutar);
						printf("\n\t\t\t\t\t\t\t");
						printf("Odenen Ucret: "); printf("%d", ucret);
						printf("\n\t\t\t\t\t\t\t");
						printf("Geri odeme: "); printf("%d", ucret - tutar);
						printf("\n\t\t\t\t\t\t\t");
						printf("Afiyet Olsun Yine Bekleriz");
						inp = _getch();
						inp = 'n'; // esc ye basılma durumunda programın kapanmaması icin
					}

				}


			}
			else if (inp == '6') {
				if (true) {

					system("CLS");
					system("color E0");
					printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
					printf("Kac adet CAFFE LATTE istiyorsunuz?");
					printf("\n\t\t\t\t\t\t\t");
					printf("Adet Giriniz: ");
					scanf_s("%d", &adet);
					tutar = tutar + 54 * adet;
					printf("\n\t\t\t\t\t\t\t");
					printf("Toplam odemeniz gereken tutar: "); printf("%d", tutar);
					printf("\n\t\t\t\t\t\t\t");
					printf("Yatiracaginiz ucreti giriniz:");
					scanf_s("%d", &ucret);

					if (ucret >= tutar) {
						system("CLS");
						printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
						printf("Toplam Tutar: "); printf("%d", tutar);
						printf("\n\t\t\t\t\t\t\t");
						printf("Odenen Ucret: "); printf("%d", ucret);
						printf("\n\t\t\t\t\t\t\t");
						printf("Geri odeme: "); printf("%d", ucret - tutar);
						printf("\n\t\t\t\t\t\t\t");
						printf("Afiyet Olsun Yine Bekleriz");
						inp = _getch();
						inp = 'n'; // esc ye basılma durumunda programın kapanmaması icin

					}
					else {
						
						while (ucret < tutar) {
							system("CLS");
							printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
							printf("Toplam Tutar: "); printf("%d", tutar);
							printf("\n\t\t\t\t\t\t\t");
							printf("Odenen Toplam Ucret: "); printf("%d", ucret);
							printf("\n\t\t\t\t\t\t\t");
							printf("ODEME MIKTARI YETERSIZ! Ek odeme giriniz: ");
							scanf_s("%d", &ek);

							ucret = ucret + ek;
						}
						system("CLS");
						printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
						printf("Toplam Tutar: "); printf("%d", tutar);
						printf("\n\t\t\t\t\t\t\t");
						printf("Odenen Ucret: "); printf("%d", ucret);
						printf("\n\t\t\t\t\t\t\t");
						printf("Geri odeme: "); printf("%d", ucret - tutar);
						printf("\n\t\t\t\t\t\t\t");
						printf("Afiyet Olsun Yine Bekleriz");
						inp = _getch();
						inp = 'n'; // esc ye basılma durumunda programın kapanmaması icin
					}

				}
			}
			else if (inp == '7') {
				system("CLS");
				system("color D0");
				printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t");
				printf("SICAK CIKOLATA MENUSU");
				printf("\n\t\t\t\t\t\t\t");
				printf("-----------------------------------------------");
				printf("\n\t\t\t\t\t\t\t");
				printf("1- KAHVELI SICAK CIKOLATA                   69TL");
				printf("\n\t\t\t\t\t\t\t");
				printf("2- BEYAZ SICAK CIKOLATA                     73TL");
				printf("\n\t\t\t\t\t\t\t");
				printf("Lutfen Seciminizi Yapiniz:");
				inp = _getch();
				if (inp == '1') {

					system("CLS");
					printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
					printf("Kac adet KAHVELI SICAK CIKOLATA istiyorsunuz?");
					printf("\n\t\t\t\t\t\t\t");
					printf("Adet Giriniz: ");
					scanf_s("%d", &adet);
					tutar = tutar + 69 * adet;
					printf("\n\t\t\t\t\t\t\t");
					printf("Toplam odemeniz gereken tutar: "); printf("%d", tutar);
					printf("\n\t\t\t\t\t\t\t");
					printf("Yatiracaginiz ucreti giriniz:");
					scanf_s("%d", &ucret);

					if (ucret >= tutar) {
						system("CLS");
						printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
						printf("Toplam Tutar: "); printf("%d", tutar);
						printf("\n\t\t\t\t\t\t\t");
						printf("Odenen Ucret: "); printf("%d", ucret);
						printf("\n\t\t\t\t\t\t\t");
						printf("Geri odeme: "); printf("%d", ucret - tutar);
						printf("\n\t\t\t\t\t\t\t");
						printf("Afiyet Olsun Yine Bekleriz");
						inp = _getch();
						inp = 'n'; // esc ye basılma durumunda programın kapanmaması icin

					}
					else {
						

						while (ucret < tutar) {
							system("CLS");
							printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
							printf("Toplam Tutar: "); printf("%d", tutar);
							printf("\n\t\t\t\t\t\t\t");
							printf("Odenen Toplam Ucret: "); printf("%d", ucret);
							printf("\n\t\t\t\t\t\t\t");
							printf("ODEME MIKTARI YETERSIZ! Ek odeme giriniz: ");
							scanf_s("%d", &ek);

							ucret = ucret + ek;
						}
						system("CLS");
						printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
						printf("Toplam Tutar: "); printf("%d", tutar);
						printf("\n\t\t\t\t\t\t\t");
						printf("Odenen Ucret: "); printf("%d", ucret);
						printf("\n\t\t\t\t\t\t\t");
						printf("Geri odeme: "); printf("%d", ucret - tutar);
						printf("\n\t\t\t\t\t\t\t");
						printf("Afiyet Olsun Yine Bekleriz");
						inp = _getch();
						inp = 'n'; // esc ye basılma durumunda programın kapanmaması icin
					}

				}
				else if (inp == '2') {

					system("CLS");
					printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
					printf("Kac adet BEYAZ SICAK CIKOLATA istiyorsunuz?");
					printf("\n\t\t\t\t\t\t\t");
					printf("Adet Giriniz: ");
					scanf_s("%d", &adet);
					tutar = tutar + 73 * adet;
					printf("\n\t\t\t\t\t\t\t");
					printf("Toplam odemeniz gereken tutar: "); printf("%d", tutar);
					printf("\n\t\t\t\t\t\t\t");
					printf("Yatiracaginiz ucreti giriniz:");
					scanf_s("%d", &ucret);

					if (ucret >= tutar) {
						system("CLS");
						printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
						printf("Toplam Tutar: "); printf("%d", tutar);
						printf("\n\t\t\t\t\t\t\t");
						printf("Odenen Ucret: "); printf("%d", ucret);
						printf("\n\t\t\t\t\t\t\t");
						printf("Geri odeme: "); printf("%d", ucret - tutar);
						printf("\n\t\t\t\t\t\t\t");
						printf("Afiyet Olsun Yine Bekleriz");
						inp = _getch();
						inp = 'n'; // esc ye basılma durumunda programın kapanmaması icin

					}
					else {
						
						while (ucret < tutar) {
							system("CLS");
							printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
							printf("Toplam Tutar: "); printf("%d", tutar);
							printf("\n\t\t\t\t\t\t\t");
							printf("Odenen Toplam Ucret: "); printf("%d", ucret);
							printf("\n\t\t\t\t\t\t\t");
							printf("ODEME MIKTARI YETERSIZ! Ek odeme giriniz: ");
							scanf_s("%d", &ek);

							ucret = ucret + ek;
						}
						system("CLS");
						printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
						printf("Toplam Tutar: "); printf("%d", tutar);
						printf("\n\t\t\t\t\t\t\t");
						printf("Odenen Ucret: "); printf("%d", ucret);
						printf("\n\t\t\t\t\t\t\t");
						printf("Geri odeme: "); printf("%d", ucret - tutar);
						printf("\n\t\t\t\t\t\t\t");
						printf("Afiyet Olsun Yine Bekleriz");
						inp = _getch();
						inp = 'n'; // esc ye basılma durumunda programın kapanmaması icin
					}

				}
				else {
					system("CLS");
					printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t");
					printf("LUTFEN GECERLI SECIM YAPINIZ");
					inp = _getch();
					inp = 'n'; // esc ye basılma durumunda programın kapanmaması icin
				}

			}
			else if (inp == '8') {
				system("CLS");
				system("color A0");
				printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t");
				printf("SALEP SEKER SECIMI(seker ucretsizdir)");
				printf("\n\t\t\t\t\t\t\t");
				printf("-----------------------------------------------");
				printf("\n\t\t\t\t\t\t\t");
				printf("1- SEKERLI                                 73TL");
				printf("\n\t\t\t\t\t\t\t");
				printf("2- SEKERSIZ                                73TL");
				printf("\n\t\t\t\t\t\t\t");
				printf("Lutfen Seciminizi Yapiniz:");
				inp = _getch();

				if (inp == '1') {

					system("CLS");
					printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
					printf("Kac adet SEKERLI SALEP istiyorsunuz?");
					printf("\n\t\t\t\t\t\t\t");
					printf("Adet Giriniz: ");
					scanf_s("%d", &adet);
					tutar = tutar + 73 * adet;
					printf("\n\t\t\t\t\t\t\t");
					printf("Toplam odemeniz gereken tutar: "); printf("%d", tutar);
					printf("\n\t\t\t\t\t\t\t");
					printf("Yatiracaginiz ucreti giriniz:");
					scanf_s("%d", &ucret);

					if (ucret >= tutar) {
						system("CLS");
						printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
						printf("Toplam Tutar: "); printf("%d", tutar);
						printf("\n\t\t\t\t\t\t\t");
						printf("Odenen Ucret: "); printf("%d", ucret);
						printf("\n\t\t\t\t\t\t\t");
						printf("Geri odeme: "); printf("%d", ucret - tutar);
						printf("\n\t\t\t\t\t\t\t");
						printf("Afiyet Olsun Yine Bekleriz");
						inp = _getch();
						inp = 'n'; // esc ye basılma durumunda programın kapanmaması icin

					}
					else {
						

						while (ucret < tutar) {
							system("CLS");
							printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
							printf("Toplam Tutar: "); printf("%d", tutar);
							printf("\n\t\t\t\t\t\t\t");
							printf("Odenen Toplam Ucret: "); printf("%d", ucret);
							printf("\n\t\t\t\t\t\t\t");
							printf("ODEME MIKTARI YETERSIZ! Ek odeme giriniz: ");
							scanf_s("%d", &ek);

							ucret = ucret + ek;
						}
						system("CLS");
						printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
						printf("Toplam Tutar: "); printf("%d", tutar);
						printf("\n\t\t\t\t\t\t\t");
						printf("Odenen Ucret: "); printf("%d", ucret);
						printf("\n\t\t\t\t\t\t\t");
						printf("Geri odeme: "); printf("%d", ucret - tutar);
						printf("\n\t\t\t\t\t\t\t");
						printf("Afiyet Olsun Yine Bekleriz");
						inp = _getch();
						inp = 'n'; // esc ye basılma durumunda programın kapanmaması icin
					}

				}
				else if (inp == '2') {

					system("CLS");
					printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
					printf("Kac adet SEKERSIZ SALEP istiyorsunuz?");
					printf("\n\t\t\t\t\t\t\t");
					printf("Adet Giriniz: ");
					scanf_s("%d", &adet);
					tutar = tutar + 73 * adet;
					printf("\n\t\t\t\t\t\t\t");
					printf("Toplam odemeniz gereken tutar: "); printf("%d", tutar);
					printf("\n\t\t\t\t\t\t\t");
					printf("Yatiracaginiz ucreti giriniz:");
					scanf_s("%d", &ucret);

					if (ucret >= tutar) {
						system("CLS");
						printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
						printf("Toplam Tutar: "); printf("%d", tutar);
						printf("\n\t\t\t\t\t\t\t");
						printf("Odenen Ucret: "); printf("%d", ucret);
						printf("\n\t\t\t\t\t\t\t");
						printf("Geri odeme: "); printf("%d", ucret - tutar);
						printf("\n\t\t\t\t\t\t\t");
						printf("Afiyet Olsun Yine Bekleriz");
						inp = _getch();
						inp = 'n'; // esc ye basılma durumunda programın kapanmaması icin

					}
					else {
						

						while (ucret < tutar) {
							system("CLS");
							printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
							printf("Toplam Tutar: "); printf("%d", tutar);
							printf("\n\t\t\t\t\t\t\t");
							printf("Odenen Toplam Ucret: "); printf("%d", ucret);
							printf("\n\t\t\t\t\t\t\t");
							printf("ODEME MIKTARI YETERSIZ! Ek odeme giriniz: ");
							scanf_s("%d", &ek);

							ucret = ucret + ek;
						}
						system("CLS");
						printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
						printf("Toplam Tutar: "); printf("%d", tutar);
						printf("\n\t\t\t\t\t\t\t");
						printf("Odenen Ucret: "); printf("%d", ucret);
						printf("\n\t\t\t\t\t\t\t");
						printf("Geri odeme: "); printf("%d", ucret - tutar);
						printf("\n\t\t\t\t\t\t\t");
						printf("Afiyet Olsun Yine Bekleriz");
						inp = _getch();
						inp = 'n'; // esc ye basılma durumunda programın kapanmaması icin
					}

				}
				else {
					system("CLS");
					printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t");
					printf("LUTFEN GECERLI SECIM YAPINIZ");
					inp = _getch();
					inp = 'n'; // esc ye basılma durumunda programın kapanmaması icin
				}

			}
			else {
				system("CLS");
				printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t");
				printf("LUTFEN GECERLI SECIM YAPINIZ");
				inp = _getch();
				inp = 'n'; // esc ye basılma durumunda programın kapanmaması icin
			}
		}
		else {
			continue;   //esc ye bastığında döngü hemen bitmesin çıksın mı diye sorsun esc ye basmadıysan devam   
		}
	} while (inp != char(27));   //char 27 esc, esc değilse while çalışsın esc olursa dur der ve emin misin diye sorar

	return 0;
}