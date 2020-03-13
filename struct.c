/* 
	Program : To accept and Display a Structure 
	Programmer : Akash Seth
	Date : 16.12.19
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//System("clear")  -> Clear Command Prompt ,Unix 

struct laptop{
	char company_name[50],processor[50],os[50];
	float weight,height,width;
	int ram ,rom,hdd,ssd,vram;

};

int main(){
	struct laptop mac;
	strcpy(mac.company_name,"Apple 13 inch MacBook Pro 2018");
	strcpy(mac.processor,"Intel i5 8th  Gen");
	strcpy(mac.os,"MacOSX Mojave");
	mac.weight=1.2;
	mac.height=13.5;
	mac.width=1.5;
	mac.ram=8 ;
	mac.hdd=-1;
	mac.ssd=256;
	mac.vram=0;
	printf("%s\n",mac.company_name);
}
