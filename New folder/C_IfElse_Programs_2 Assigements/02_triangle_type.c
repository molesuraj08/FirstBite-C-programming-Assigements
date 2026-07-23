#include <stdio.h>
int main(){int a=5,b=5,c=5; if(a==b&&b==c) printf("Equilateral"); else if(a==b||b==c||a==c) printf("Isosceles"); else printf("Scalene"); return 0;}