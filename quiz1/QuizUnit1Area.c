#include<stdio.h>
#include<conio.h>

int main(){
int length,Width,area;

printf("\nEnter the Length of Rectangle: ");
scanf("%d", &length);

printf("\nEnter the Width of Rectangle: ");
scanf("%d", &Width);

area=length*Width;

if(length==Width){
    printf("\nArea: %d", area);
    printf("\nIt is a Square");
}
else{
    printf("\nArea of Rectangle: %d", area);
}
printf("\n---------------------------------------");

return (0);
}
