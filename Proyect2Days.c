#include <stdio.h>                     

int main() {
            
            
            
    int a,b,c,d; 
    
 for (int b = 1; b<=12; b++){
    printf("Mes:%d\n",b);
if(b == 2){
for(int a=1; a<=29; a++){
    printf("\tDia: %d\n",a);  
                }
            }else{
 if (b==4 || b==6 || b==9 || b==11){
     for (c=1;c<=30; c++){
     printf("\tDia: %d\n",c);
                    }
                        
            }else{
 if (b==1 || b==3 || b==5 || b==7 || b==8|| b==10|| b==12){
for (d=1;d<=31; d++){
    printf("\tDia: %d\n",d);
                                }
                    }
                }
            }                 
        }   

    return 0;
}