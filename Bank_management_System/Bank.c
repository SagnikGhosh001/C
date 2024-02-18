#include<stdio.h>
int store[10][7]={{7627782,3562,10000,1,0,3,1},{8398320,7582,16700,1,7890,2,3},{7447321,8941,90000,0,8900,5,2},{7368122,9087,110000,1,0,2,1},{9283981,8562,69000,0,9000,5,3},{5784795,8762,70000,1,780,7,2},{6237811,3210,11000,1,670,4,2},{6467546,98705,10000,0,0,3,1},{74528329,54723,50000,0,6670,2,3},{8733932,73231,10000,0,0,6,1}};
int i,acc,pin,dep,with,choice,loanChoice,balance=0;
float year,loanBalance=0;
void accountDisplay()
{
	printf("Account no:-%d\n",store[i][0]);
	if(store[i][3]==1)
		printf("Type:-Saving\n");
	else
		printf("Type:-Current\n");
}
void currentBalance()
{
	printf("Account no:-%d\nBalance:-%d\n",store[i][0],store[i][2]);
}
void withdraw()
{
	if(store[i][2]>=2000){
		printf("Enter ammount for withdrawl:-");
		scanf("%d",&with);
		if(with>store[i][2]){							
		printf("Insufficient Ammount\n");
		}
		else{
			balance=store[i][2]-with;
			store[i][2]=balance;
			printf("Final balance:-%d\n",store[i][2]);
		}
	}
	else{
		printf("You can't Withdrwal\n");
	}	
}
void deposit()
{
	printf("Enter ammount for deposite:-");
	scanf("%d",&dep);
	balance=dep+store[i][2];
	store[i][2]=balance;
	printf("Final balance:-%d\n",store[i][2]);
}
void loanInformation()
{
	printf("Your loan ammount is:-%d\n",store[i][4]);
	if(store[i][6]==1)
		printf("Type:-Home Loan\n");
	else if(store[i][6]==2)
		printf("Type:-Car Loan\n");
	else
		printf("Type:-Personal Loan\n");
	if(store[i][5]>2&&store[i][2]>50000){
		year=(float)store[i][5]/10;
		loanBalance=store[i][2]*year;
		printf("you can take loan:-%.2f\n",(loanBalance));
		printf("For accept loan press 1,otherwise press 0:-");
		scanf("%d",&loanChoice);
		if(loanChoice==1){
			balance=store[i][2]*year+store[i][4];
			store[i][4]=balance;
		}
	}
	else if(store[i][2]<50000)
		printf("You can't take loan,Minimum 50000rs required in account\n");
	else
		printf("You can't take loan, only more than 2 years account will get loan\n");
}
void main()
{
	printf("________WELCOME TO SEVA BANKING SYSTEM________\n");
	do{
		printf("Enter Your Account Number:-");
		scanf("%d",&acc);
		printf("Enter Pin Number:-");
		scanf("%d",&pin);
		for(i=0;i<10;i++){
			if(acc==store[i][0]&&pin==store[i][1]){
				do{
					printf("1. Display Account no and type of account\n2. Current Balance\n3. Withdraw\n4. Deposit\n5. Loan Information\n6. Exit\n");
					printf("Enter your choice:-");
					scanf("%d",&choice);
					switch(choice){
						case 1:
							accountDisplay();
							break;
						case 2:
							currentBalance();
							break;
						case 3:
							withdraw();
							break;
						case 4:
							deposit();
							break;
						case 5:
							loanInformation();
							break;
						case 6:
							exit(0);
						default:
							printf("INVALID INPUT\n");
					}
				}while(1);
			}
			else if(i==9){
				printf("WRONG INFORMATION\n");
				break;
			}
		}
	}while(1);
}
