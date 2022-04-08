#include <stdio.h>

 int
main ()
{
  
int a, number;
  
 
printf ("In the range form 0 to..");
  
scanf ("%d", &number);
  
 
printf ("The number divisible by 3 and 5 from 0 to %d are: \n", number);
  
for (a = 1; a <= number; a++)
    {
      
if (a % 3 == 0 && a % 5 == 0)
	{
	  
printf ("%d", a);
	
}
    
}
  
printf ("\n");
  
return 0;

}
