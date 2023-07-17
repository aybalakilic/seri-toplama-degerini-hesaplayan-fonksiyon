#include <stdio.h>
#include <stdlib.h>

// x degeri klavyeden girildiginde 1 + 2 + .... + (x - 1) + x seri toplama degerini hesaplayan fonksiyon yazýnýz.


int func(int);
int main() {
	int sayi;
	printf("sayi giriniz:");
	scanf("%d",&sayi);
	printf("islem sonucunuz:%d",func(sayi));
	return 0;
}

int func(int a){
	
	int sonuc=0;
	int i;
	for(i=1;i<=a;i++){
		sonuc=sonuc+i;
	}
	return sonuc;
	
	
}
