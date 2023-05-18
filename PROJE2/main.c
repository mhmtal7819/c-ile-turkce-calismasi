#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//en cok tekrar eden 5 kelime
int main(int argc, char *argv[]) {
	
    
	char cumle[1500];
	int harf[29]={0};
	int i=0;
	int encok;
	char harf1;
	
	
    printf("Bir cumle giriniz:\n");
    gets(cumle);
    
    int j;
    
        int sayac = 1,sayac2=1,sayac3=1;
        for (j=0; j < strlen(cumle); j++)
        {
           
            
            if(cumle[j] == ' '|| cumle[j]=='\t')
            {
                
                sayac++;
            }
            if(cumle[j]=='\t')
            {
            	sayac3++;
			}
        }
        printf("\nGirilen cumlede %d adet kelime vardir\n", sayac);
        printf("Girilen cumlede %d adet harf vardir\n",strlen(cumle)-(sayac-1));
        printf("Paragraf sayisi: %d\n",sayac3); 
        
        
    
	
	while(cumle[i])
	{
		if(cumle[i]>='a' && cumle[i]<='z')
		{
			harf[cumle[i]-'a']++;
		}
		i++;
	}
	encok=harf[0];
	for(i=1;i<29;i++)
	{
		if(harf[i]!=0)
		{
		
		if(harf[i]>encok)
		{
			encok=harf[i];
			harf1=i+'a';
		}
	   }
	}
	printf("En cok tekrar eden harf= %c",harf1);
        
        
        

	
	return 0;
}
