#include <stdio.h>

int main(){
	printf("---Selamat Datang di Restaurant Kami---\n\n");
	char lagi;
	
	
	while (1){
		printf("---Berikut Daftar Menu---\n\nA. Paket Spesial\nB. Paket Promo\nC. Paket Hemat\n\n");
		char pesanan;
		printf("Pilih Menu yang diinginkan : ");
		scanf(" %c", &pesanan);
		switch(pesanan)
		{
			case 'A': 
				printf("Anda Memilih Paket Spesial, List Menunya Adalah :\n\n");
				printf("1. Nasi Briyani Daging Ayam + Daging Unta\n2. Jus Buah Naga + Empty Ice\n3. Harga : Rp. 150.000\n");
				break;
			case 'B':
				printf("Anda Memilih Paket Promo, List Menunya Adalah :\n\n");
				printf("1. Nasi Goreng Kampung + Daging Sapi + Telur\n2. Ice Cream + Empty Ice\n3. Harga : Rp. 45.000\n");
				break;
			case 'C':
				printf("Anda Memilih Paket Hemat, List Menunya Adalah :\n\n");
				printf("1. Nasi Kari Daging Sapi\n2. Jus Jeruk + Empty Ice\n3. Harga : Rp. 20.000\n");
				break;
			default:
				printf("Masukkan pilihan dengan benar!\n");
				
		}
		
		lagi:
		printf("Ingin memesan lagi (y/n)");
		scanf(" %c", &lagi);
		if(lagi == 'y')
			continue;
		else if (lagi == 'n')
			break;
		else goto lagi;
}
	return 0;
}
