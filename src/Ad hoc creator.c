#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<string.h>

char ss[32];
char key[50];
	

void doit(){
	system("netsh wlan show drivers");
		char create[512];
		sprintf(create, "netsh wlan set hostednetwork mode=allow ssid=%s key=%s",ss,key);
		system((char *)create);
		printf("Please wait.................\n\n");
		system("netsh wlan start hostednetwork");
		printf("\n*****************************************************************");
		printf("\nIf this software not working\n\t1) Switch on your Wi-Fi adapter before continue.\n\t1) Run this software as administrator.");
		printf("\n*****************************************************************\n");
		printf("\nThank you for using my software.\nPress any key to exit........");
	}
void start(){
   printf("\n\n\t************************************************************\n");
   printf("\t************************************************************\n");
   printf("\t******                                                ******\n");
   printf("\t******     Ad hoc Creator                             ******\n");
   printf("\t******                                                ******\n");
   printf("\t******                By Dilusha                      ******\n");
   printf("\t******                                                ******\n");
   printf("\t************************************************************\n");
   printf("\t************************************************************\n");
}
 void main()
 {
 system("color 03");
 	
 	start();
 	
	
	printf("\n\n\t********* Please Run This Software As Administrator ********\n\n");
 	
 	printf(" Network name : ");
	 scanf("%s",ss);
	 
	printf(" Security key (Required more than 7 character and case sensitive) : ");
		scanf("%s",key);	
 
 
 
	if(strlen(key)>7){
		doit();
	}

	if(strlen(key)<8){
		while(strlen(key)<8){
				printf(" Security key (Required more than 7 character and case sensitive) : ");
				scanf("%s",key);
				
				if(strlen(key)>7){
				doit();
				break;
		
	}
				
		}
		
	}
  
 getch();
 }
