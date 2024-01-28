
//Eng. Amr_Afifi

#include "linked_list.h"

void main(){
	char temp_text[40];
	
	while (1){
		printf("\n ========================= ");
		printf("\n    choose one of the following options \n ");
		printf("\n 1:Add Student  ");
		printf("\n 2: Delete student ");
		printf("\n 3: View student  ");
		printf("\n 4: Delete all ");
		printf("\n Enter option number : ");
		
		gets(temp_text);
		printf("\n ========================= ");
		switch (atoi(temp_text) ){
			case 1: add_student();    break;
			case 2: delete_student(); break;
			case 3: view_student();   break;
			case 4: delete_all();     break;
			default: printf("\n wrong option ");
			break;
		}
	}
}






















