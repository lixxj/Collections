// Written by XJ
#include <stdio.h>

void L(void) {
    printf("越来越爱CXJ大宝贝\n");
}

void draw(int n)
{
int i,j;
for (i=1-(n>>1);i<=n;i++) 
if (i>=0) 
{ 
for (j=0;j<i;j++) printf("  "); 
for (j=1;j<=2*(n-i)+1;j++) printf(" *"); 
printf("\n"); 
} 
else 
{ 
for (j=i;j<0;j++) printf("  "); 
for (j=1;j<=n+2*i+1;j++) printf(" *"); 
for (j=1;j<=-1-2*i;j++) printf("  "); 
for (j=1;j<=n+2*i+1;j++) printf(" *"); 
printf("\n"); 
}
}

int main(void) {
    
    int n = 4;
    while(n < 30) {
        L();
        draw(n);
        n++;
    }
    return 0;
}