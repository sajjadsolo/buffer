#include<stdio.h>
#include<stdlib.h>

int lenght;
char *name;
int write;
int read;


void getLenght(){

	printf("please insert Number for lenght Buffer : \n");
	scanf(" %d",&lenght);

}

void getName(){

	name = (char *)malloc(lenght*sizeof(char));

	for(int i = 0 ; i < lenght; i++){
	
		printf("please insert name[%d] : \n",i);
		scanf(" %c",name+i);
		write++;

	}

	for(int i = 0 ; i < lenght; i++){
		
		printf("Name [%d] is %c \n",i,name[i]);
		read++;
	}

	if(lenght == write){
		char eq;
		printf("RingBuffer is Full lenght is [%d] for append is y or n \n",lenght);
		scanf(" %c",&eq);
		
		if(eq == 'y'){

			printf("please insert Number for lenght Buffer : \n");
			scanf(" %d",&lenght);

			name = (char *)realloc(name,lenght);
		
			for(int i = 0 ; i < lenght; i++){
	
				printf("please insert name[%d] : \n",i);
				scanf(" %c",name+i);
				write++;

			}

			for(int i = 0 ; i < lenght; i++){
		
			printf("Name [%d] is %c \n",i,name[i]);
			read++;
			
			}	

		}
	}

}


int main(){

	getLenght();
 	getName();		
}
