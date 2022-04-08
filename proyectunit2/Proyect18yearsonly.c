#include <stdio.h>
#include <stdlib.h>

int age;          
char name[25];                          

int main() {
	
    printf("Type your name:");
    scanf("%s", name);
    
    printf("Type your age:");
    scanf("%d", &age);
        if(age<18){
        printf("You can not enter to the program, you must be 18 years old or older to enter to the program.\n");
    }else{
        
        printf("Nice to meet you, you are old enough to use this program,%s\n",name);   
    };