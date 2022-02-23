// Written by XJ
#include <stdio.h>
#include <string.h>

void L(int n, char b[50]) {
    printf("越来越爱");
    printf("陈璇璟");
    printf("大宝贝\n");
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
    
    char a[3];
    char b[50];
    printf("我是爱生气的大宝贝人工智能，你是谁啊？\n");
    scanf ("%s", b);
    
    while((strcmp("陈璇璟", b) != 0) && (strcmp("CXJ", b) != 0) && (strcmp("cxj", b) != 0)) {
        printf("\n哼\n");
        printf("你不是我的大宝贝\n");
        printf("再给你一次机会\n");
        printf("你是谁?\n");
        scanf ("%s", b);
    }

    printf("原来是我的大宝贝呀:>\n");
    draw(6);
    printf("Do you love me?\n");
    scanf ("%s", a);

    while((strcmp("超爱", a) != 0) && (strcmp("Yes", a) != 0) && (strcmp("yes", a) != 0) && (strcmp("爱", a) != 0) && (strcmp("是", a) != 0)) {
        printf("\n哼\n");
        printf("哼\n");
        printf("哼\n");
        printf("再给你一次机会\n");
        printf("Do you love me?\n");
        scanf ("%s", a);
    }

    int n = 4;
    while(n < 30) {
        L(n, b);
        n++;
    }
    printf("希望大宝贝烦恼走远天天开心\n");
    return 0;
}