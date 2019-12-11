
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
