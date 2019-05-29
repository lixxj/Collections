// Written by XJ
#include <stdio.h>

void A(void) {
    printf("     A\n");
    printf("    A A\n");
    printf("   A   A\n");
    printf("  AAAAAAA\n");
    printf(" A       A\n");
    printf("A         A\n");
    printf("\n");
}

void B(void) {
    printf("BBBBB\n");
    printf("B    B\n");
    printf("B     B\n");
    printf("BBBBBB\n");
    printf("B     B\n");
    printf("B    B\n");
    printf("BBBBB\n");
    printf("\n");
}

void C(void) {
    printf("   CCC\n");
    printf("  C   C\n");
    printf(" C     \n");
    printf("C\n");
    printf(" C     \n");
    printf("  C   C\n");
    printf("   CCC\n");
    printf("\n");
}

void D(void) {
    printf("DD\n");
    printf("D  D\n");
    printf("D    D\n");
    printf("D     D\n");
    printf("D    D\n");
    printf("D  D\n");
    printf("DD\n");
    printf("\n");
}

void V(void) {
    printf("V       V\n");
    printf(" V     V\n");
    printf("  V   V\n");
    printf("   V V\n");
    printf("    V\n");
    printf("\n");
}

int main(void) {
    A();
    B();
    C();
    D();
    V();
    return 0;
}

