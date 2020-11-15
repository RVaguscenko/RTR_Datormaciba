int main()
{
  char skaitlis;
  int i, result;

  printf("Ievadiet skaitli \n");
  scanf("%d", &skaitlis);
  i = 8;
  while (i >= 0){
    result = skaitlis >> i;

    if (result & 1)
      printf("1");
    else
      printf("0");
  
     i--;
  }

  printf("\n");

  return 0;
}