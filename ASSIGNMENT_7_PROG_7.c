#include <stdio.h>
int main()
{
  int i, Number, count, Minimum, Maximum;

  printf("\nPlease Enter the Minimum & Maximum Values ::\nLower limit = ");
  scanf("%d", &Minimum);
  printf("Upper Limit = ");
  scanf("%d",&Maximum);
  if(Minimum>Maximum)
    printf("INPUT ERROR!!!!Please ensure that Lower limit is less than Upper limit");
  else
  {
  Number = Minimum;
  Number++;
  printf("Prime Numbers Between %d and %d are:\n", Minimum, Maximum);
  while(Number < Maximum)
  {
    count = 0;
    i = 2;
    while(i <= Number/2)
    {
      if(Number%i == 0)
      {
        count++;
	break;
      }
      i++;
    }
    if(count == 0 && Number != 1 )
    {
       printf(" %d ", Number);
    }
    Number++;
  }
  return 0;
}
}
