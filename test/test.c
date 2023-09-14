#include<stdio.h>
#include<stdlib.h>
#include"test.h"
#include <string.h>
#include <ctype.h>

int lenght;
char *name;
int write;
int read;


int main(){
	
	struct ringbuffer *head;
	head = (struct ringbuffer *)malloc(sizeof(struct ringbuffer));
	lenght  = head->size = 8;
	char arr[8] = {'1',2,'3','cs','5','6.2','7','8'};
	head->ch = arr;
	head->next=NULL;
	for(int i = 0 ; i < lenght ; i++){
		if(!isdigit(arr[i])){
			
			printf("please insert char not enything do you fix it ? Y or N \n");
			char fix ='h' ;
			printf("char is [%d] %c \n",i,fix);
			
	}else{
			printf("char is [%d] %c \n",i,arr[i]);
		}

			
	}
	
	 		
}


