#include <stdio.h>

void odd( int o){
  while(o){
    if(o%2)
      printf("%d ",o%10);
      o/=10;
  }printf("is Odd\n");
}
void even(o){
while(o){
      o%2==0?printf("%d ",o%10):0;
      o/=10;
    } printf("is Even\n");
}
int isprime( int m){
    for(int i=2;i<m;i++)
      if(m%i)
  return 0;
    return printf("%d ",m);
}
int main(void) {
  int o;
    printf("Enter a number: ");
      scanf("%d",&o);

    even(o);
    odd(o);
    while(o){
      isprime(o%10);
      o/=10;
    }printf("is prime\n");
  return 0;
}