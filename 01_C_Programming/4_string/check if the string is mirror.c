//C function to check if a string is mirror or not: char check_mirror(char* arry)

#include <stdio.h>
typedef unsigned char uint8;
#define WAY 2 // choose 1 or 2 (ways of sol).
#if WAY == 2
///////////// way2 /////////////
// more optimise
uint8 check_mirror(uint8 * );
uint8 string_length(uint8 *);

int main (){
	uint8 string[50] ;
	while(1){
		printf ("enter the string: ");
	    scanf("%s",string);
	    uint8 flag =check_mirror(string );
	    if(1==flag){
            printf("NOT mirror\n");
	    }
	    else
            printf("MIRROR\n");
    }
}

uint8 check_mirror(uint8 *string ){
	uint8 i=0 ,flag=0;
	uint8 size = string_length(string);
	for(i=0; i<=size/2;i++){
        if(string[i] != string[size-i]){
        flag=1;
        break;
        }
	}
	return flag;
}
uint8 string_length(uint8 *string){
	uint8 count=0;
    while(string[count]!=0){
        count++;
    }
    return count-1;//the length without NULL
}
#elif WAY == 1
/*   ***********way1***********
check mirror is like amr --> rma  = not mirror
                     ama --> ama  = mirror
	1/ copy the string to another one
	2/ reverse one of them
	3/ compare the two strings and check mirror
*/

void reverse_str(uint8 * );
uint8 check_mirror(uint8 * );

int main (){
	uint8 str1[50] ;
	while(1){
		printf ("enter the string \n");
	    scanf("%s",str1);
	    if ( 1==check_mirror(str1) ){
	    	printf("not mirror\n\n");
	    }
	    else {
	    	printf(" mirror\n\n");
	    }
	}
}

void reverse_str(uint8 * s1){
	uint8 size=0 , i=0 ,temp=0;
	for(size=0 ; s1[size] !=0 ; size++ ){
	}
	for(i=0; i<size/2 ; i++){
		temp = s1[i];
		s1[i] = s1[size -1-i];
		s1[size -1-i] = temp ;
	}
}

uint8 check_mirror(uint8 *str1 ){
	uint8 str2[50] , *p1 ,*p2,flag=0;
	p1 = str1;
	p2 = str2;
	while (*p1 != 0){
		*p2 = *p1 ;
		p1++;
		p2++;
	}
	*p2=0;

	reverse_str(str1);// str1 reversed done

	// then return the pointers like it was
	p1 = str1;// p1 will point to the reversed str1
	p2 = str2;// p2 will point to the str2 which equall to str1 before reversed
	while(*p1 !=0 || *p2 !=0){
		if(*p1 != *p2){
			flag=1;
			break;
		}
		p1++;
		p2++;
	}
	return flag;
}
#endif
