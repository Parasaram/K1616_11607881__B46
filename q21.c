#include<stdio.h>
#include<conio.h>
int main()
{
	float fault_rate;
	int time,page_mod,time_mod,page_notmod,time_notmod;
	printf("Enter the time of Memory access :");
	scanf("%d",&time);
	printf("Enter the percentage of page modified :");
	scanf("%d",&page_mod);
	printf("Enter the time taken to modify page:");
	scanf("%d",&time_mod);
	printf("Enter the percentage of page not modified :");
	scanf("%d",&page_notmod);	
	printf("Enter the time  :");
	scanf("%d",&time_notmod);
	fault_rate=time*100/((page_mod*time_mod)+(page_notmod*time_notmod));
	printf("The page fault rate is :: %f",fault_rate);
	
}
