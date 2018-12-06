#include <stdlib.h>
#include <stdio.h> 
typedef struct linknode{
	int data;
	//void *next;

	struct linknd *next

}linknd_t; /* linkt node의 타입 */


 static linknd_t *list; // linked list 실체 */ 
 
 linknd_t* create_node(int value) {
 	linknd_t* ndPtr;
 	
 	// 동적 메모리 할당 & 정수값 저장 
	ndPtr = (linknd_t*)malloc( sizeof(linknd_t)); 
	if (ndPtr == NULL)
		{
			printf ("ERROR\n");
			return NULL;
		}
	
	// 정수 값 저장 
	ndPtr ->data = value;
	ndPtr -> next = NULL; 	 

	return ndPtr; 
 }
