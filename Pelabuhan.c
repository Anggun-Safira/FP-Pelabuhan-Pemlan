#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct penumpang{
	int nomorTiket;
	int nomorKendaraan;
	int bobotKendaraan;
	char jenisKendaraan[30];
};

struct data{
	char tujuanPelabuhan[30];
	int tanggal;
	int bulan;
	int tahun;
	struct penumpang pnpg;
};
typedef struct data dat;
dat dt[100];


int searchNomor(dat arr[], int n, int x) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
        if (dt[i].pnpg.nomorKendaraan==x)
        	return i;
    return -1;	
}

int searchBobot(dat arr[], int n, int x) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
        if (dt[i].pnpg.bobotKendaraan==x) 
            return i; 
    return -1; 
}

int searchTiket(dat arr[], int n, int x)
{
	int i;
	for (i = 0; i < n; i++)
		if (dt[i].pnpg.nomorTiket==x)
			return i;
	return -1;	
}

   
void CocktailBobot(dat a[], int n)  
{
	dat temp;  
    int is_swapped = 1;  
    int begin = 0,i;  
    int end = n - 1;  
   
    while (is_swapped) {  
        is_swapped = 0;  
     for (i = begin; i < end; ++i) {  
            if (a[i].pnpg.bobotKendaraan > a[i + 1].pnpg.bobotKendaraan) {  
            temp = a[i];  
        a[i]=a[i+1];  
        a[i+1]=temp;                  
        is_swapped = 1;  
            }  
        }  
 if (!is_swapped)  
            break;  
 is_swapped = 0;  
 for (i = end - 1; i >= begin; --i) {  
     if (a[i].pnpg.bobotKendaraan > a[i + 1].pnpg.bobotKendaraan)   
    {  
          temp = a[i];  
      a[i]=a[i+1];  
      a[i+1]=temp;  
      is_swapped = 1;  
         }  
      }  
        ++begin;  
    }  
}  

void CocktailTiket(dat a[], int n)  
{
	dat temp;  
    int is_swapped = 1;  
    int begin = 0,i;  
    int end = n - 1;  
   
    while (is_swapped) {  
        is_swapped = 0;  
     for (i = begin; i < end; ++i) {  
            if (a[i].pnpg.nomorTiket > a[i + 1].pnpg.nomorTiket) {  
            temp = a[i];  
        a[i]=a[i+1];  
        a[i+1]=temp;                  
        is_swapped = 1;  
            }  
        }  
 if (!is_swapped)  
            break;  
 is_swapped = 0;  
 for (i = end - 1; i >= begin; --i) {  
     if (a[i].pnpg.nomorTiket > a[i + 1].pnpg.nomorTiket)   
    {  
          temp = a[i];  
      a[i]=a[i+1];  
      a[i+1]=temp;  
      is_swapped = 1;  
         }  
      }  
        ++begin;  
    }  
}  
void CocktailTujuan(struct data a[], int n)
{
	dat temp;  
    int is_swapped = 1;  
    int begin = 0,i;  
    int end = n - 1;  
   
    while (is_swapped) {  
        is_swapped = 0;  
     for (i = begin; i < end; ++i) {  
            if (strcmp((a[i].tujuanPelabuhan),(a[i + 1].tujuanPelabuhan))<0) {  
            temp = a[i];  
        a[i]=a[i+1];  
        a[i+1]=temp;                  
        is_swapped = 1;  
            }  
        }  
 if (!is_swapped)  
            break;  
 is_swapped = 0;  
 for (i = end - 1; i >= begin; --i) {  
     if (strcmp((a[i].tujuanPelabuhan),(a[i + 1].tujuanPelabuhan))<0)   
    {  
        temp = a[i];  
      a[i]=a[i+1];  
      a[i+1]=temp;  
      is_swapped = 1;  
         }  
      }  
        ++begin;  
    }  
}


void CocktailNopol(dat a[], int n)  
{
	dat temp;  
    int is_swapped = 1;  
    int begin = 0,i;  
    int end = n - 1;  
   
    while (is_swapped) {  
        is_swapped = 0;  
     for (i = begin; i < end; ++i) {  
            if (strcmp((a[i].pnpg.nomorKendaraan),(a[i + 1].pnpg.nomorKendaraan))<0) {  
            temp = a[i];  
        a[i]=a[i+1];  
        a[i+1]=temp;                  
        is_swapped = 1;  
            }  
        }  
 if (!is_swapped)  
            break;  
 is_swapped = 0;  
 for (i = end - 1; i >= begin; --i) {  
     if (strcmp((a[i].pnpg.nomorKendaraan),(a[i + 1].pnpg.nomorKendaraan))<0)   
    {  
        temp = a[i];  
      a[i]=a[i+1];  
      a[i+1]=temp;  
      is_swapped = 1;  
         }  
      }  
        ++begin;  
    }  
}  

void CocktailJenis(dat a[], int n)  
{
	dat temp;  
    int is_swapped = 1;  
    int begin = 0,i;  
    int end = n - 1;  
   
    while (is_swapped) {  
        is_swapped = 0;  
     for (i = begin; i < end; ++i) {  
            if (strcmp((a[i].pnpg.jenisKendaraan),(a[i + 1].pnpg.jenisKendaraan))<0) {  
            temp = a[i];  
        a[i]=a[i+1];  
        a[i+1]=temp;                  
        is_swapped = 1;  
            }  
        }  
 if (!is_swapped)  
            break;  
 is_swapped = 0;  
 for (i = end - 1; i >= begin; --i) {  
     if (strcmp((a[i].pnpg.jenisKendaraan),(a[i + 1].pnpg.jenisKendaraan))<0)   
    {  
        temp = a[i];  
      a[i]=a[i+1];  
      a[i+1]=temp;  
      is_swapped = 1;  
         }  
      }  
        ++begin;  
    }  
}

void CocktailTanggal(struct data a[], int n)  
{
	dat temp;  
    int is_swapped = 1;  
    int begin = 0,i;  
    int end = n - 1;  
   
    while (is_swapped) {  
        is_swapped = 0;  
     for (i = begin; i < end; ++i) {  
            if (a[i].tanggal&a[i].bulan&a[i].tahun > a[i + 1].tanggal&a[i + 1].bulan&a[i + 1].tahun) {  
            temp = a[i];  
        a[i]=a[i+1];  
        a[i+1]=temp;                  
        is_swapped = 1;  
            }  
        }  
 if (!is_swapped)  
            break;  
 is_swapped = 0;  
 for (i = end - 1; i >= begin; --i) {  
     if (a[i].tanggal&a[i].bulan&a[i].tahun > a[i + 1].tanggal&a[i + 1].bulan&a[i + 1].tahun)   
    {  
          temp = a[i];  
      a[i]=a[i+1];  
      a[i+1]=temp;  
      is_swapped = 1;  
         }  
      }  
        ++begin;  
    }  
}
int main() {
	

	int pilih;
	int banyak=0,a=0,i;
	int b,c=0;
	
	while (pilih !=12)
	{
		printf("\n\n********************SELAMAT DATANG DI APLIKASI PELABUHAN********************\n\n");
		printf("|=======================================================|\n");
		printf("|                         MENU                          |\n");
		printf("|_______________________________________________________|\n");
		printf("|_______________________________________________________|\n");
		printf("|1.  INPUT DATA                                         |\n");
		printf("|2.  TAMPILKAN SEMUA DATA                               |\n");
		printf("|3.  TAMBAH DATA                                        |\n");
		printf("|4.  UBAH DATA                                          |\n");
		printf("|5.  SEARCHING BERDASARKAN NOMOR KENDARAAN              |\n");
		printf("|6.  SEARCHING BERDASARKAN BOBOT KENDARAAN              |\n");
		printf("|7.  SEARCHING BERDASARKAN NOMOR TIKET                  |\n");
		printf("|8.  SORTING BERDASARKAN NOMOR TIKET                    |\n");
		printf("|9.  SORTING BERDASARKAN NOMOR KENDARAAN                |\n");
		printf("|10. SORTING BERDASARKAN JENIS KENDARAAN                |\n");
		printf("|11. SORTING BERDASARKAN  BOBOT KENDARAAN               |\n");
		printf("|12. SORTING BERDASARKAN  TANGGAL KEBERANGKATAN         |\n");
		printf("|13. SORTING BERDASARKAN  TUJUAN PELABUHAN              |\n");
		printf("|14. EXIT                                               |\n");
		printf("|=======================================================|\n");
		printf("pilih menu : ");
		scanf("%d",&pilih);
		system("cls");
		
	if(pilih==1){
			printf("\n1.Masukan nomer Tiket  : ");fflush(stdin);
			scanf("%d",&dt[a].pnpg.nomorTiket);
			
			printf("\n2.Masukan nomor Kendaraan : ");
			scanf ("%d",&dt[a].pnpg.nomorKendaraan);
			
			printf("\n3.Masukan Jenis Kendaraan : ");fflush(stdin);
			scanf("%s",&dt[a].pnpg.jenisKendaraan);
			
			printf("\n4.Masukan Bobot Kendaraan (TON) : ");fflush(stdin);
			scanf("%d",&dt[a].pnpg.bobotKendaraan);
			
			printf("\n5.Masukan Tujuan Pelabuhan : ");fflush(stdin);
			scanf("%s",&dt[a].tujuanPelabuhan);
			
			printf("\n6.Masukan Tanggal Tiket : ");fflush(stdin);
			scanf("%d",&dt[a].tanggal);
			
			printf("\n7.Masukan bulan tiket : ");fflush(stdin);
			scanf("%d",&dt[a].bulan);
			
			printf("\n8.Masukan Tahun : ");fflush(stdin);
			scanf("%d",&dt[a].tahun);
			a++;
			getch();
			system("cls");
	}
	else if (pilih==2){
			//int banyak,a;
			system("cls");
			printf("\n Tampilkan Semua Data yang telah diinputkan\n\n");
			if(a==0){
				printf("Masukkan data terlebih dahulu!!\n");
			}else{
				for(i=0;i<a;i++){
				printf("\n");
				printf("Nomor Tiket      = %d\n",dt[i].pnpg.nomorTiket);
				printf("Nomor Kendaraan  = %d\n",dt[i].pnpg.nomorKendaraan);
				printf("Jenis Kendaraan  = %s\n",dt[i].pnpg.jenisKendaraan);
				printf("Bobot Kendaraan  = %d ton\n",dt[i].pnpg.bobotKendaraan);
				printf("Tujuan Pelabuhan = %s\n",dt[i].tujuanPelabuhan);
				printf("Tanggal Tiket    = %d-%d-%d",dt[i].tanggal,dt[i].bulan,dt[i].tahun);
				printf("\n");
			//	{Sleep(5000);}
			//	system("cls");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
				}
			}

	}
	else if (pilih==3){
		int banyak,a;
		printf(" Masukan jumlah data yang akan diinputkan :  ");
		scanf("%d", &banyak);
		for (a=0 ;a<=banyak;a++)
		{
			printf("\n1.Masukan nomer Tiket  : ");fflush(stdin);
			scanf("%d",&dt[a].pnpg.nomorTiket);
			
			printf("\n2.Masukan nomor Kendaraan : ");
			scanf ("%d",&dt[a].pnpg.nomorKendaraan);
			
			printf("\n3.Masukan Jenis Kendaraan : ");fflush(stdin);
			scanf("%s",&dt[a].pnpg.jenisKendaraan);
			
			printf("\n4.Masukan Bobot Kendaraan (TON) : ");fflush(stdin);
			scanf("%d",&dt[a].pnpg.bobotKendaraan);
			
			printf("\n5.Masukan Tujuan Pelabuhan : ");fflush(stdin);
			scanf("%s",&dt[a].tujuanPelabuhan);
			
			printf("\n6.Masukan Tanggal Tiket : ");fflush(stdin);
			scanf("%d",&dt[a].tanggal);
			
			printf("\n7.Masukan bulan tiket : ");fflush(stdin);
			scanf("%d",&dt[a].bulan);
			
			printf("\n8.Masukan Tahun : ");fflush(stdin);
			scanf("%d",&dt[a].tahun);;
			a++;
			system("cls");
		}
	}
	  else if (pilih==4){
		
		int cari_tiket; 
		printf("Masukkan nomor Tiket : ");
		scanf("%d", &cari_tiket);
		
		int c;
		c=searchTiket(dt,a,cari_tiket);
		if(c==-1){
			printf("Data tidak ditemukan\n");
			Sleep(5000);	
			system("cls");
	}
		else{
			printf("\n1.Masukan nomer Tiket  : ");fflush(stdin);
			scanf("%d",&dt[c].pnpg.nomorTiket);
			
			printf("\n2.Masukan nomor Kendaraan : ");
			scanf ("%d",&dt[c].pnpg.nomorKendaraan);
			
			printf("\n3.Masukan Jenis Kendaraan : ");fflush(stdin);
			scanf("%s",&dt[c].pnpg.jenisKendaraan);
			
			printf("\n4.Masukan Bobot Kendaraan (TON) : ");fflush(stdin);
			scanf("%d",&dt[c].pnpg.bobotKendaraan);
			
			printf("\n5.Masukan Tujuan Pelabuhan : ");fflush(stdin);
			scanf("%s",&dt[c].tujuanPelabuhan);
			
			printf("\n6.Masukan Tanggal Tiket : ");fflush(stdin);
			scanf("%d",&dt[c].tanggal);
			
			printf("\n7.Masukan bulan tiket : ");fflush(stdin);
			scanf("%d",&dt[c].bulan);
			
			printf("\n8.Masukan Tahun : ");fflush(stdin);
			scanf("%d",&dt[c].tahun);
			
			printf("\n===================================\n");
			printf("\n");
			printf("Nomor Tiket      = %d\n",dt[c].pnpg.nomorTiket);
			printf("Nomor Kendaraan  = %d\n",dt[c].pnpg.nomorKendaraan);
			printf("Jenis Kendaraan  = %s\n",dt[c].pnpg.jenisKendaraan);
			printf("Bobot Kendaraan  = %d ton\n",dt[c].pnpg.bobotKendaraan);
			printf("Tujuan Pelabuhan = %s\n",dt[c].tujuanPelabuhan);
			printf("Tanggal Tiket    = %d-%d-%d",dt[c].tanggal,dt[c].bulan,dt[c].tahun);
			printf("\n");
			system("cls");
		}
	}
	else if (pilih==5){
		
		int y;
		int cari_nopol; 
		printf("Masukkan nomor kendaraan : ");
		scanf("%d", &cari_nopol);
		
		
		y=searchNomor(dt,a,cari_nopol);
			if(y==-1){
				printf("Data tidak ditemukan\n");
			}
			else{
				printf("\n");
				printf("Nomor Tiket      = %d\n",dt[y].pnpg.nomorTiket);
				printf("Nomor Kendaraan  = %d\n",dt[y].pnpg.nomorKendaraan);
				printf("Jenis Kendaraan  = %s\n",dt[y].pnpg.jenisKendaraan);
				printf("Bobot Kendaraan  = %d ton\n",dt[y].pnpg.bobotKendaraan);
				printf("Tujuan Pelabuhan = %s\n",dt[y].tujuanPelabuhan);
				printf("Tanggal Tiket    = %d-%d-%d",dt[y].tanggal,dt[y].bulan,dt[y].tahun);
				{Sleep(5000);}
				system("cls");
				
		}

	}
	else if (pilih==6){

		int cari_bobot;
		int z; 
		printf("Masukkan bobot kendaraan (TON) : ");
		scanf("%d", &cari_bobot);
		
		z=searchBobot(dt,a,cari_bobot);
			if(z==-1){
				printf("Data tidak ditemukan\n");
			}
			else{
				printf("\n");
				printf("Nomor Tiket      = %d\n",dt[z].pnpg.nomorTiket);
				printf("Nomor Kendaraan  = %d\n",dt[z].pnpg.nomorKendaraan);
				printf("Jenis Kendaraan  = %s\n",dt[z].pnpg.jenisKendaraan);
				printf("Bobot Kendaraan  = %d ton\n",dt[z].pnpg.bobotKendaraan);
				printf("Tujuan Pelabuhan = %s\n",dt[z].tujuanPelabuhan);
				printf("Tanggal Tiket    = %d-%d-%d",dt[z].tanggal,dt[z].bulan,dt[z].tahun);
				printf("\n");
				printf("\n");
				system("cls");
				
		}
	}
	else if(pilih==7){
		
		int cari_tiket;
		printf("Masukkan nomor tiket : ");
		scanf("%d", &cari_tiket);
		
		int w;
		w=searchTiket(dt,a,cari_tiket);
			if(w==-1){
				printf("Data tidak ditemukan\n");
			}
			else{
				printf("\n");
				printf("Nomor Tiket		= %d\n",dt[w].pnpg.nomorTiket);
				printf("Nomor Kendaraan	= %d\n",dt[w].pnpg.nomorKendaraan);
				printf("Jenis Kendaraan	= %s\n",dt[w].pnpg.jenisKendaraan);
				printf("Bobot Kendaraan	= %d ton\n",dt[w].pnpg.bobotKendaraan);
				printf("Tujuan Pelabuhan= %s\n",dt[w].tujuanPelabuhan);
				printf("Tanggal Tiket	= %d-%d-%d",dt[w].tanggal,dt[w].bulan,dt[w].tahun);
				printf("\n");
				getch();
				system("cls");
		}
	}
	else if (pilih==8){
		CocktailTiket(dt, a);
		for(i=0;i<a;i++){
				printf("\n\n");
				printf("Bobot Kendaraan	= %d ton\n",dt[i].pnpg.bobotKendaraan);
				printf("Nomor Kendaraan	= %d\n",dt[i].pnpg.nomorKendaraan);
				printf("Nomor Tiket		= %d\n",dt[i].pnpg.nomorTiket);
				printf("Jenis Kendaraan	= %s\n",dt[i].pnpg.jenisKendaraan);
				printf("Tujuan Pelabuhan= %s\n",dt[i].tujuanPelabuhan);
				printf("Tanggal Tiket	= %d-%d-%d",dt[i].tanggal,dt[i].bulan,dt[i].tahun);	
		
		}	
}

	else if (pilih==9)	{
		CocktailNopol(dt, a);
		for(i=0;i<a;i++){
				printf("\n\n");
				printf("Bobot Kendaraan	= %d ton\n",dt[i].pnpg.bobotKendaraan);
				printf("Nomor Kendaraan	= %d\n",dt[i].pnpg.nomorKendaraan);
				printf("Nomor Tiket		= %d\n",dt[i].pnpg.nomorTiket);
				printf("Jenis Kendaraan	= %s\n",dt[i].pnpg.jenisKendaraan);
				printf("Tujuan Pelabuhan= %s\n",dt[i].tujuanPelabuhan);
				printf("Tanggal Tiket	= %d-%d-%d",dt[i].tanggal,dt[i].bulan,dt[i].tahun);	
		}

}
	else if (pilih==10)	{
		CocktailJenis(dt, a);
		for(i=0;i<a;i++){
				printf("\n\n");
				printf("Bobot Kendaraan	= %d ton\n",dt[i].pnpg.bobotKendaraan);
				printf("Nomor Kendaraan	= %d\n",dt[i].pnpg.nomorKendaraan);
				printf("Nomor Tiket		= %d\n",dt[i].pnpg.nomorTiket);
				printf("Jenis Kendaraan	= %s\n",dt[i].pnpg.jenisKendaraan);
				printf("Tujuan Pelabuhan= %s\n",dt[i].tujuanPelabuhan);
				printf("Tanggal Tiket	= %d-%d-%d",dt[i].tanggal,dt[i].bulan,dt[i].tahun);	
		}

}
	else if (pilih==11)	{
	CocktailBobot(dt , a);
	for(i=0;i<a;i++){
				printf("\n\n");
				printf("Bobot Kendaraan	= %d ton\n",dt[i].pnpg.bobotKendaraan);
				printf("Nomor Kendaraan	= %d\n",dt[i].pnpg.nomorKendaraan);
				printf("Nomor Tiket		= %d\n",dt[i].pnpg.nomorTiket);
				printf("Jenis Kendaraan	= %s\n",dt[i].pnpg.jenisKendaraan);
				printf("Tujuan Pelabuhan= %s\n",dt[i].tujuanPelabuhan);
				printf("Tanggal Tiket	= %d-%d-%d",dt[i].tanggal,dt[i].bulan,dt[i].tahun);	
		
	}
}
		else if (pilih==12){
		CocktailTanggal(dt, a);
		for(i=0;i<a;i++){
				printf("\n\n");
				printf("Bobot Kendaraan	= %d ton\n",dt[i].pnpg.bobotKendaraan);
				printf("Nomor Kendaraan	= %d\n",dt[i].pnpg.nomorKendaraan);
				printf("Nomor Tiket		= %d\n",dt[i].pnpg.nomorTiket);
				printf("Jenis Kendaraan	= %s\n",dt[i].pnpg.jenisKendaraan);
				printf("Tujuan Pelabuhan= %s\n",dt[i].tujuanPelabuhan);
				printf("Tanggal Tiket	= %d-%d-%d",dt[i].tanggal,dt[i].bulan,dt[i].tahun);	
		
		}	
}
	else if (pilih==13)	{
		CocktailJenis(dt, a);
		for(i=0;i<a;i++){
				printf("\n\n");
				printf("Bobot Kendaraan	= %d ton\n",dt[i].pnpg.bobotKendaraan);
				printf("Nomor Kendaraan	= %d\n",dt[i].pnpg.nomorKendaraan);
				printf("Nomor Tiket		= %d\n",dt[i].pnpg.nomorTiket);
				printf("Jenis Kendaraan	= %s\n",dt[i].pnpg.jenisKendaraan);
				printf("Tujuan Pelabuhan= %s\n",dt[i].tujuanPelabuhan);
				printf("Tanggal Tiket	= %d-%d-%d",dt[i].tanggal,dt[i].bulan,dt[i].tahun);	
		}

}
	else if(pilih==14){
		system("cls");
		printf("Terimakasih, selamat datang kembali");
	}
}

	return 0;
}
