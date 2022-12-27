#include <stdio.h>
#include <string.h>

void karsilamametni(int isim){
	
  
  char ad[50];
	printf("             Merhaba, sistemimize Hosgeldiniz.. \n             Dilerseniz sizi taniyalim:\n             Adiniz ve Soyadiniz nedir? \n");
	gets(ad);	


}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main() 
{
	int bilet=150;
	int ilce;
	int kisisayisi;
	int konser;
	int deger;
	int secim;
	
	
	 karsilamametni(404);
     printf("Mugla ilinde bulunan bir ilce giriniz.(1,2,3,4,5,6 gibi)\n");
     scanf("%d",&ilce);
	
	if(ilce==1)
	   
	    printf("Bodrum ilcesinde yaklasan konserler asagidaki gibidir.\na-10 Aralik Teoman konseri\nb-12 Aralik Tarkan konseri\nc-16 Aralik Buyuk Ev Ablukada konseri\nd-31 Aralik Sibel Can Yilbasi konseri\n");
	   
	
	if(ilce==2)
	    
		printf("Dalaman ilcesinde yaklasan konserler asagidaki gibidir.\ne-13 Aralik Pilli Bebek konseri\nf-14 Aralik Redd konseri\ng-15 Aralik Pinhani konseri\nh-19 Aralik Duman konseri\n");
	   
	
	if(ilce==3)
	   
	    printf("Datca ilcesinde yaklasan konserler asagidaki gibidir.\nj-8 Aralik Bagzilari konseri\nk-9 Aralik Umut Kaya konseri\nl-11 Aralik Ebru Gundes konseri\nm-31 Aralik Serdar Ortac konseri\n");
	   
	
	if(ilce==4)
	    
		printf("Fethiye ilcesinde yaklasan konserler asagidaki gibidir.\nn-7 Aralik Manga konseri\no-10 Aralik No.1 konseri\np-15 Aralik Yedinci Ev konseri\nr-16 Aralik Sehinsah konseri\n");
	    
	
	if(ilce==5)
	    
		printf("Marmaris ilcesinde yaklasan konserler asagidaki gibidir.\ns-12 Aralik Anil piyanci konseri\nt-14 Aralik Sezen Aksu konseri\ny-30 Aralik Dj Dogus Cabakcor konseri\nz-31 Aralik Hadise yilbasi konseri\n");
	    
	
	if(ilce==6)
	      printf("Mentese ilcesinde yaklasan konserler asagidaki gibiir.\nx-27 Aralik Son Feci Bisiklet konseri\nq-28 Aralik Sebnem Ferah konseri\nw-30 Aralik Mor Ve Otesi konseri\nu-31 Aralik Edis konseri\n");
	      
	    
		int dizib[2][2]={150,170,  110,120};
        int dizidl[2][2]={60,75,    90,100};
        int dizidc[2][2]={80,90,   100,150};
        int dizif[2][2]={75,85,     95,150};
        int dizima[2][2]={65,95,   105,150};
        int dizime[2][2]={60,70,    55,150};
        int i1,j;
        int durum=0;
         printf("--------------bodrum ilcesindeki konser fiyatlari----------- \n");
         
          for(i1=0;i1<2;i1++)
		  {
	      for(j=0;j<2;j++)
	            printf("%4d",dizib[i1][j]);
	            printf("\n");
          }
    
	         printf("--------------dalaman ilcesindeki konser fiyatlari----------- \n");
               for(i1=0;i1<2;i1++)
			   {
	             for(j=0;j<2;j++)
	                 printf("%4d",dizidl[i1][j]);
	                 printf("\n");
               }
                     printf("--------------datca ilcesindeki konser fiyatlari----------- \n");
                 for(i1=0;i1<2;i1++)
				 {
	                 for(j=0;j<2;j++)
	                   printf("%4d",dizidc[i1][j]);
	                   printf("\n");
                 }
                     printf("--------------fethiye ilcesindeki konser fiyatlari----------- \n");
                    for(i1=0;i1<2;i1++)
					{
	                    for(j=0;j<2;j++)
	                  printf("%4d",dizif[i1][j]);
	                   printf("\n");
                    }
                      printf("--------------marmaris ilcesindeki konser fiyatlari-----------\n");
                    for(i1=0;i1<2;i1++)
                     {
	                    for(j=0;j<2;j++)
	                     printf("%4d",dizima[i1][j]);
	                     printf("\n");
                     }
                         printf("--------------mentese ilcesindeki konser fiyatlari----------- \n");
                             for(i1=0;i1<2;i1++)
							 {
	                            for(j=0;j<2;j++)
	                                 printf("%4d",dizime[i1][j]);
	                                 printf("\n");
	
                             }
    
	   int musterikodu1;
	   
	    printf("1 Adet 8 haneli musteri kodu olusturunuz:\n \n--------\n");
	    scanf("%d",&musterikodu1);
	
	
		char kullaniciadi[50];
		char kullanicikodu[50];
		char kullaniciyasi[50];
		
		
		   printf("Adinizi giriniz:\n");
		gets(kullaniciadi);
		   printf("kullanici kodunuzu giriniz:(HULYA YORUK 12345678 gibi..)\n");
	    gets(kullanicikodu);
	       printf("yasinizi giriniz:\n");
	    gets(kullaniciyasi);
	    
	    
	    char veri[25]="12345678";
        int uzunluk =strlen(veri);
        int i2;
        
           FILE *filep = fopen("kullaniciadlari.txt","w");
        
              if(filep == NULL)
                 {
           	
           	        printf("DOSYA OLUSTURULAMADI.\n");
           	
		         }
		       else
		         {
		   	
		   	        for(i2=0;i2<uzunluk;i2++) 
					   {
					   	
					   	fputc(veri[i2],filep);
					   	
					   	
					   }
			        fclose(filep);
		         }
         
    int secim2;
    int yatirilacakTutar;
    int bakiye=110;
    int odeme;

    while(secim2)
    {
        printf("1-Guncel bakiyeniz\n");
        printf("2-Para Yatir\n");
        printf("3-Odeme yap\n");
        printf("0-Cikis\n");
        printf("Lutfen Bir Secim Yapiniz : ");
        
		   scanf("%d",&secim2);
        
		switch(secim2)
        {
        case 0:
            break;
        case 1:
            printf("Bakiyeniz : %d\n",bakiye);
            break;
        case 2:
            printf("Lutfen Yatirmak Istediginiz Tutari Giriniz : \n");
            scanf("%d",&yatirilacakTutar);
            printf("Yatirma islemi basarili.\n");
            bakiye=bakiye+yatirilacakTutar;
            printf("Son Bakiyeniz : %d\n",bakiye);
            break;
        case 3:
        	printf("Odeme yapmak istediginiz konserin fiyatini giriniz:\n");
        	scanf("%d",&bilet);
        	odeme=bakiye-bilet;
        	printf("Odemeniz basariyla alinmistir.\n Islem sonrasi bakiyeniz: %d dir.\n",odeme);
            break;

            }
            
        }
        
         
            
        
        printf("....BIZI TERCIH ETTIGINIZ ICIN TESEKKUR EDERIZ.....");


	return 0;
}
