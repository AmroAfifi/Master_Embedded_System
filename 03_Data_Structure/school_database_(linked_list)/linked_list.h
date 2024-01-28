
#ifndef LINKED_LIST_H_
#define LINKED_LIST_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

// effective data 
struct SData {
	int ID ;
	char name[40] ;  
	float height ;
};

//linked list node
struct SStudent {
	struct SData student ; // effective data for each student
	struct SStudent* pNextStudent ;//pointing to the next data structure
};

//head (base)
struct SStudent* gpFirstStudent =NULL;//global pinter pointing to the first student

void fill_the_record(struct SStudent* new_student);
void add_student ();
int delete_student();
void view_student();
void delete_all();

void value_of_item();
int get_count(struct ssudent* Pslectedstudent);
void node_valuo_from_end();
void get_middle();
void detect_loop();
void reverse();

#endif /* LINKED_LIST_H_ */