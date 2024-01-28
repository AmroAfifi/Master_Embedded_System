
//Eng. Amr_Afifi

#include "linked_list.h"

//func to recieve the student data
void fill_the_record(struct SStudent* new_student){
	char temp_text[40];
	
	printf("\n Enter the ID : ");
	gets (temp_text);
	new_student->student.ID =atoi(temp_text);
	
	printf("\n Enter student full name : ");
	gets (new_student->student.name);
	
	printf("\n Enter student height : ");
	gets (temp_text);
	new_student->student.height =atof(temp_text);
}


void add_student (){
	struct SStudent* pLastStudent ;
	struct SStudent* pNewStudent ;
	//checking the list is empty 
	if (gpFirstStudent == NULL){
		//create the first record
		pNewStudent =(struct SStudent*)malloc(sizeof(struct SStudent) );
		// assign it to gpFirstStudent
		gpFirstStudent = pNewStudent;
	}
	//the list has records
	else{ 
		//navigate until reach to the last record
		pLastStudent = gpFirstStudent; 
		while (pLastStudent->pNextStudent){
			pLastStudent = pLastStudent->pNextStudent ;
		}
		
		//create new record
		pNewStudent =(struct SStudent*)malloc(sizeof(struct SStudent) );
		pLastStudent->pNextStudent = pNewStudent ;
		
	}
	fill_the_record(pNewStudent);
	pNewStudent->pNextStudent = NULL;
}

int delete_student(){
	char temp_text [40];
	int i , selected_id ;
	
	// taking the record id from the user 
	printf("\n enter the student ID to be deleted : ");
	gets(temp_text);
	selected_id = atoi(temp_text);
	
	if (gpFirstStudent){ // if records in the list
		struct SStudent* pPreviousStudent = NULL; 
		struct SStudent* pSelectedStudent = gpFirstStudent;
		
		//loop on all records starting from gpFirstStudent
		while(pSelectedStudent){
			// compairing the selected_id with the recorded one 
			if (pSelectedStudent->student.ID == selected_id){
				if (pPreviousStudent){
					pPreviousStudent->pNextStudent =pSelectedStudent->pNextStudent;
				}
				else{
					gpFirstStudent = pSelectedStudent->pNextStudent;
				}
				free (pSelectedStudent);
				return 1;
			}
			//store the previous recorded
			pPreviousStudent = pSelectedStudent ;
			pSelectedStudent = pSelectedStudent->pNextStudent;
		}
		// else done logically
		printf("\n can't find the student ID");
		return 0;
	}
}

void view_student(){
	int count =1; 
	struct SStudent* pCurrentStudent = gpFirstStudent;
	if (gpFirstStudent == NULL){
		printf("\n Empty list ");
	}
	while (pCurrentStudent){
		printf("\n record number %d",count );
		printf("\n ID : %d",pCurrentStudent->student.ID );
		printf("\n name : %s",pCurrentStudent->student.name  );
		printf("\n height : %f",pCurrentStudent->student.height);
		pCurrentStudent = pCurrentStudent->pNextStudent;
		count++;
	}
}

void delete_all(){
	struct SStudent* pCurrentStudent = gpFirstStudent;
	if (gpFirstStudent == NULL){
		printf("\n Empty list ");
	}
	while (pCurrentStudent){
		struct SStudent* pTempStudent = pCurrentStudent;
		pCurrentStudent = pCurrentStudent->pNextStudent;
		free(pTempStudent);
	}
	gpFirstStudent = NULL;
}
