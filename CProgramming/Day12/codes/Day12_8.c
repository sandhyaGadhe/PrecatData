#include<stdio.h> 
void sumpro(int *a , int *b , int *ps , int *pp) 
{
        *ps = *a + *b; 
        *pp = *a * *b; 
}

int main() 
{
 int x = 10, y = 4, s, p;
 sumpro(&x, &y, &s, &p);
 printf("%d %d", s, p); // 14 40  
 return 0;
}
