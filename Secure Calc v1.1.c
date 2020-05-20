#include <stdio.h>
#include <stdlib.h>
#include <dos.h>
#include <string.h>
#include <windows.h>
//------------------------------------------------INFORMATION--------------------------------------------------------------------
// This application is developed by basant karki. This is kind of Calculator which is used as to be secured.
//In the version of 1.0 this have lots of bug that it responced like a hanged if user input string ,char, or a symbols.
//Application will goes on unusable while user input unless keywords. v1.0 only supports integer value in its input form.
// So " I developed v1.1 " In this application all those bugs are filtred and accept only integer value.
// If any user inputs like useless keyworks symbols,string have capability to functionate better.
//In this application develper add new function called strcmp and added new header called string.h,
//with the help of those function new application of secure calc v1.1 has successfully developed.
// More functions will be added on v1.2. Thank you. -Basant karki
//--------------------------------------------------------------------------------------------------------------------------

main(){ //--------------------Starting of main function ------------------------------------
	
	SMALL_RECT windowSize = {0 , 0 , 80 , 20}; //change the values
    SetConsoleWindowInfo(GetStdHandle(STD_OUTPUT_HANDLE), TRUE, &windowSize);
	
	authentication();
	
// --------------------------Ending of main function---------------------------------------	
}authentication(){ // password authentication funtion
	
	
  char password[20];
	
	
do{
	
	system("title SECURE-CALCULATOR v1.0 , Developed by Basant Karki (mr.fake)");
	printf("Enter your password (Default: 1234): ");
	scanf("%s",&password);
	printf("Authenticating...............");
	sleep(1);
	system("cls");
		
}while(strcmp(password,"1234")!=0);{
		
		Menu_Function();
		
}

}Menu_Function(){

	char input[2];
	system("cls");
	printf("WELCOME-TO-SECURE-CALCULATOR v1.0");
	printf("\n--------------------------------");
	printf("\nEnter 1 for SUM");
	printf("\nEnter 2 for SUB");
	printf("\nEnter 3 for MUL");
	printf("\nEnter 4 for DIV");
	printf("\n--------------------------------");
	printf("\nEnter your options:");
	scanf("%s",&input);
	if(strcmp(input,"1")==0){
		
		sum_function();	
		
}else if(strcmp(input,"2")==0){
     		
        sub_function();	
     		
}else if (strcmp(input,"3")==0){
		 	
		 	
		mul_function();	 	
		 	
}else if(strcmp(input,"4")==0){
		 	
		 div_function();	
		 		
}else{
		system("cls");
		printf("Please enter vaild option!!!!");
		sleep(2);
		Menu_Function();
		 	
	}
     	 	
     	
 // --------------------------------Function Start---------------------------------------------------------------------------    	
	
}sum_function(){
	char option[2];
	int num1,num2,num3;
	        system("cls");
			printf("Enter your first number: ");
			scanf("%d",&num1);
			printf("Enter your second number: ");
			scanf("%d",&num2);
			num3 = (num1+num2);
			printf("The sum of two number is: %d",num3);
			system("pause>nul");
			system("cls");	
			printf("Do you want Menu, continue or exit the program: ");
			printf("\n-----------------------------------------------");
			printf("\nEnter 1 for Menu");
			printf("\nEnter 2 for Continue this program");
			printf("\nEnter 3 for exit");
			printf("\n----------------------------------------------");
			printf("\nEnter your options: ");
			scanf("%s",&option);
			
			system("cls");
			if(strcmp(option,"1")==0){
				
			system("cls");
			Menu_Function();//calling function of menu bar
			
			}else if(strcmp(option,"2")==0){
				
				// Here it have to use one more function for continue the program!
				sum_function(); // calling function of sum
				
			}else if(strcmp(option,"3")==0){
				
				printf("Thanks for using this Software");
				printf("\nExiting.............");
				system("exit"); // exiting the entire process
			
			}else{
				
				
				printf("you enter Invalid options");
				printf("\nIt seems suspectious & ");
				system("pause");
				system("cls");
				authentication();
			}
		

}sub_function(){//-----------------------------------------------sub function start ---------------------------------

			char option[20];
			int num1,num2,num3;
			system("cls");
			printf("Enter your first number: ");
			scanf("%d",&num1);
			printf("Enter your second number: ");
			scanf("%d",&num2);
			num3 = (num1-num2);
			printf("The sub of two number is: %d",num3);
			system("pause>nul");
			system("cls");	
			printf("Do you want Menu, continue or exit the program: ");
			printf("\n-----------------------------------------------");
			printf("\nEnter 1 for Menu");
			printf("\nEnter 2 for Continue this program");
			printf("\nEnter 3 for exit");
			printf("\n-----------------------------------------------");
			printf("\nEnter your options: ");
			scanf("%s",&option);
			
			system("cls");
			if(strcmp(option,"1")==0){
				
			system("cls");
			Menu_Function();//calling function of menu bar
			
			}else if(strcmp(option,"2")==0){
				
				// Here it have to use one more function for continue the program!
				sub_function();
				
			}else if(strcmp(option,"3")==0){
				
				printf("Thanks for using this Software");
				printf("\nExiting.............");
				system("exit");
			
			}else{
				
			
				printf("you enter Invalid options");
				printf("\nIt seems suspectious & ");
				system("pause");
				system("cls");
				authentication();
			}	

}mul_function(){ //--------------------------------------Mul function start-------------------------------------------

			char option[2];
			int num1,num2,num3;
			system("cls");
			printf("Enter your first number: ");
			scanf("%d",&num1);
			printf("Enter your second number: ");
			scanf("%d",&num2);
			num3 = (num1*num2);
			printf("The mul of two number is: %d",num3);
			system("pause>nul");
			system("cls");	
			printf("Do you want Menu, continue or exit the program: ");
			printf("\n-----------------------------------------------");
			printf("\nEnter 1 for Menu");
			printf("\nEnter 2 for Continue this program");
			printf("\nEnter 3 for exit");
			printf("\n-----------------------------------------------");
			printf("\nEnter your options: ");
			scanf("%s",&option);
			
			system("cls");
			if(strcmp(option,"1")==0){
				
			system("cls");
			Menu_Function();//calling function of menu bar
			
			}else if(strcmp(option,"2")==0){
				
				// Here it have to use one more function for continue the program!
				mul_function();
				
			}else if(strcmp(option,"3")==0){
				
				printf("Thanks for using this Software");
				printf("\nExiting.............");
				system("exit");
			
			}else{
				
				
				printf("you enter Invalid options");
				printf("\nIt seems suspectious & ");
				system("pause");
				system("cls");
				authentication();
			}

}div_function(){ //------------------------Div function start ---------------------------------------------------------
			
			char option[2];
			int num1,num2,num3;
			system("cls");
			printf("Enter your first number: ");
			scanf("%d",&num1);
			printf("Enter your second number: ");
			scanf("%d",&num2);
			num3 = (num1%num2);
			printf("The div of two number is: %d",num3);
			system("pause>nul");
			system("cls");	
			printf("Do you want Menu, continue or exit the program: ");
			printf("\n-----------------------------------------------");
			printf("\nEnter 1 for Menu");
			printf("\nEnter 2 for Continue this program");
			printf("\nEnter 3 for exit");
			printf("\n-----------------------------------------------");
			printf("\nEnter your options: ");
			scanf("%d",&option);
			
			system("cls");
			if(strcmp(option,"1")==0){
				
			system("cls");
			Menu_Function();//calling function of menu bar
			
			}else if(strcmp(option,"2")==0){
				
				// Here it have to use one more function for continue the program!
				div_function();
				
			}else if(strcmp(option,"3")==0){
				
				printf("Thanks for using this Software");
				printf("\nExiting.............");
				system("exit");
			
			}else{
				
				printf("you enter Invalid options");
				printf("\nIt seems suspectious & ");
				system("pause");
				system("cls");
				authentication();
			}

} //------------------------------- End of All functions--------------------------------------------
