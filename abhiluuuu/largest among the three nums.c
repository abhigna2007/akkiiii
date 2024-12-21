#include<stdio.h>
int main (){
    int x, y, z;
    printf("\n enter any three numbers\n");
    scanf("%D%D%D", &x, &y, &z);
  if(x>y && x>z)
       printf("the number %D is the largest among %D and %D , x, y, z");
  else if(y>z)
       printf("the number %D is the largest among %D and %D , y, x, z");
  else
       printf ("the number %D is the largest among %D and %D , z, x, y");






}
