#include <stdio.h>

int main()
{
  int i, N, a[50];
  printf("Banyak data untuk deret fibonacci : ");
  scanf("%d", &N);
  
  for (i=1; i<=N; i++)
  {
    if(i<=2)
      a[i]=i;
    else
      a[i]=a[i-2]+a[i-1];
  }
  
  printf("\nMenampilkan Deret Fibonacci %d suku pertama\n",N);
  printf("1\t");
  for (i=1; i<N; i++)
  {
    printf("%d\t",a[i]);
  }
}
