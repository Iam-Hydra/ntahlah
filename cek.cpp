#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;


int main (){

printf("===============================================\n"); 
int x,siz, total;
float mean,stedev,vari,A[siz],max, min; 

printf("masukkan panjang array : "); //memasukan ukuran array
scanf("%i", &siz);
printf("masukan Nilai	:\n");

//memasukkan element array
for (x=0; x<siz; x++){
	printf("A[%i]",x+1); scanf("%f",&A[x]);
	total=total+A[x];
}
// mencari rata-rata
mean = total / siz;
for (x = 0; x < siz; x++){
	stedev = sqrt((mean-A[x])*(mean-A[x])/(siz-1));
	vari= stedev * stedev;	
}

//mencari nilai minimum dan rata-rata
min=A[0];
max=A[0];
for (x=1;x<siz;x++){
	if (min >A[x]){
		min=A[x];
	}
	if (max<A[x]){
		max=A[x];
	}
}

printf("\nmenampilkan nilai array:\n");
for (x=0; x < siz; x++){
	printf("%f, ",A[x]);
}
printf("\n===============================================");
printf("\nnilai total dari data tersebut adalah %d\n", total);
printf("rata rata nilai tsb adalah =%f\n", mean);
printf("simpangan baku nilai tsb adalah=%f\n",stedev);
printf("ragam dari data tersebut adalah	=%f\n",vari);
printf("nilai minimum dari data di atas adalah %f\n",min);
printf("nilai maksimum dari data di atas adalah %f\n",max);
printf("===============================================\n");
}