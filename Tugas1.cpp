#include <stdio.h>
#include <string.h>

/*Tugas 1 Halaman 30 */
int main()
{
	char nim[10];
	char nama [30];
	int nilai;
	
	strcpy(nim,"2212510180"); 
	strcpy(nama,"Nur Khopipah");
	nilai = 85;
	
	printf("NIM\t:%s", nim);
	printf("\nNama\t:%s", nama);
	printf("\nNilai\t:%i", nilai);
	return 0;
}

