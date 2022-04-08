

int main (void) {
  int numero;
 printf("Good morning my job is to know if your number is even or odd\n");
  printf("Please insert your number:\n");
  scanf("%d", &numero);
  if (numero % 2 == 0) {
    printf("The number is pair");
  } else {
    printf("The number is odd");
  }
  return 0;
}