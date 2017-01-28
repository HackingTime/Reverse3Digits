#include <stdio.h>


int main()

{
int i;
int j;
int k;
int l;
int m;
printf("Enter digits to be reversed(Three only!): ");
scanf("%d", &i);

j = i % 10; 
l = i / 100; 
k = i / 10; 
m = k % 10; 

printf("%d%d%d\n", j, m, l);

}
