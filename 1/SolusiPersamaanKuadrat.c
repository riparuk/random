#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
/*
 Jenis inputan yang di izinkan : 
 (+/-)ax^2 (+/-) bx (+/-) c = 0
 (+/-)x^2 (+/-) bx (+/-) c = 0
 (+/-)x^2 (+/-) x (+/-) c = 0
*/
/*
  Kode Ini digunakan untuk menyelesaikan akar-akar persamaan kuadrat dengan jumlah persamaan yang diinginkan untuk diselesaikan
*/
int persamaankuadrat(float *akar,int i, int a, int b, int c)
{
	int d = (b*b)-(4*a*c);
	if (d > 0){
		*(akar+(i*2)) = (-b + sqrt(d))/2*a;
		*(akar+(i*2+1)) = (-b - sqrt(d))/2*a;
	}else if (d == 0){
		*(akar+(i*2)) = *(akar+(i*2+1)) = (-b)/2*a;
	}else {
		*(akar+(i*2)) = *(akar+(i*2+1)) = 0;
	}return 0;
}
int main()
{
	int jumlah;
	printf("Jumlah Persamaan : ");
	scanf("%d", &jumlah); 
	getchar();
	putchar('\n');
	float x[jumlah*2]; //nampung akar
	for (int i = 0; i < jumlah; i++){
		char buf[30];
		int a,b,c;
		char operator1, operator2;
		fgets(buf, sizeof buf, stdin);
		char checkmin, checkx;
		if (*buf == 'x'){
			a = 1;
			sscanf(buf,"x^2 %c %dx %c %d = 0", &operator1, &b, &operator2, &c);	//masukin ke variabel
			if (*(buf+6) == 'x'){
				b = 1;
				sscanf(buf,"x^2 %*s x %*s %d = 0", &c);	//masukin ke variabel
			}
		}else {
			sscanf(buf, "%*s %*s %c %*s %*s = 0", &checkx);
			if (checkx == 'x'){
				b = 1;
				sscanf(buf,"%dx^2 %c x %c %d = 0",&a, &operator1, &operator2, &c);	//masukin ke variabel
			}else{
				sscanf(buf,"%dx^2 %c %dx %c %d = 0",&a, &operator1, &b, &operator2, &c);	//masukin ke variabel		
			}
		}
		checkx = '\0';
		sscanf(buf, "%c%c^2 %*s", &checkmin, &checkx);
		if (checkmin == '-' && checkx == 'x'){
			a = -1;
			sscanf(buf, "%*s %*s %c %*s %*s = 0", &checkx);
			if (checkx == 'x'){
				b = 1;
				sscanf(buf,"-x^2 %c x %c %d = 0", &operator1, &operator2, &c);	//masukin ke variabel
			}else{
			sscanf(buf,"-x^2 %c %dx %c %d = 0", &operator1, &b, &operator2, &c);	//masukin ke variabel
			}
		}
		if(operator1 == '-'){
			b = b*(-1);
		}
		if(operator2 == '-'){
			c = c*(-1);
		}
		//printf("a = %d, b = %d, c = %d\n", a,b,c);  //debug a,b,c
		persamaankuadrat(x, i, a, b, c);
	}
	putchar('\n');
	for (int i = 0; i< jumlah; i++){
		if(*(x+(i*2)) == 0){ //imaginer
			printf("Hasil Persamaan %d : x1 = Imaginer, x2 = Imaginer\n", i+1);			
		}else
		printf("Hasil Persamaan %d : x1 = %.1lf, x2 = %.1lf\n", i+1, *(x+(i*2)), *(x+(i*2+1)));
	}
    return 0;
}


