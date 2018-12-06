#include <stdlib.h>
#include <stdio.h> 
typedef struct linknode{
	int data;
	//void *next;

	struct linknd *next;

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
 
 void addTail(int value){
 	linknd_t *ndPtr, *newPtr;
 	if (list == NULL)
 	{
 		return; 
	 } /* 방어 코드 */
	 else 
	 {
	 	ndPtr = list;
	 	while (ndPtr -> next != NULL){
	 		ndPtr = ndPtr -> next;
		 }
		 
		 newPtr = create_node(value);
		 ndPtr -> next = newPtr; /* 마지막노드가 새로운 노드 가르키는거 끝에 데이터 붙임 */ 
	  } 
 }

void genList(void){
 	list = create_node(0); /* list가 노드 가리키게 전역변수 list로 데이터가 없으므로 괄호안에 0 */ 
 	
 	return; 
} 
 
