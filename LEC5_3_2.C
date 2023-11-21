#include<stdio.h>
#include<conio.h>
void main(){
	int choice,eng,guj,hin;
	clrscr();
	printf("====Jhakaas Telecom Service====\n\n");
	printf("Press 1 for English..\n");
	printf("Press 2 for Hindi..\n");
	printf("Press 3 for Gujarati..\n");
	printf("Enter Your Choice: ");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("\n\n\nPress 1 for Internet Recharge..\n");
			printf("Press 2 for Top-up Recharge..\n");
			printf("Press 3 for Special Recharge..\n");
			printf("Enter Your Choice: ");
			scanf("%d",&eng);
			switch(eng){
				case 1:
					printf("You have successfully done Internet Recharge..\n");
					break;
				case 2:
					printf("You have successfully done Top-Up Recharge..\n");
					break;
				case 3:
					printf("You have successfully done Special Recharge..\n");
					break;
				default:
					printf("Enter Valid Choice..");
					break;
			}
			break;
		case 2:
			printf("\n\n\nInternet Recharge ke liye 1 dabaiye\n");
			printf("Top-Up Recharge ke liye 2 dabaiye\n");
			printf("Special Recharge ke liye 3 dabaiye\n");
			printf("Enter your Choice: ");
			scanf("%d",&hin);
			switch(hin){
				case 1:
					printf("Aapne safaltapurvak Internet Recharge kar liya he..\n");
					break;
				case 2:
					printf("Aapne safaltapurvak Top-Up Recharge kar liya he..\n");
					break;
				case 3:
					printf("Aapne safaltapurvak Special Recharge kar liya he..\n");
					break;
				default:
					printf("Sahi choice chuniye..\n");
					break;
			}
			break;
		case 3:
			printf("\n\n\nInternet Recharge mate 1 dabavo..\n");
			printf("Top-Up Recharge mate 2 dabavo..\n");
			printf("Special Recharge mate 3 dabavo..\n");
			printf("Enter your Choice: ");
			scanf("%d",&guj);
			switch(guj){
				case 1:
					printf("Tame safaltapurvak Internet Recharge karyu chhe..\n");
					break;
				case 2:
					printf("Tame safaltapurvak Top-Up Recharge karyu chhe..\n");
					break;
				case 3:
					printf("Tame safaltapurvak Special Recharge karyu chhr..\n");
					break;
				default:
					printf("Invalid Choice..\n");
					break;
			}
			break;
	}
	getch();
}