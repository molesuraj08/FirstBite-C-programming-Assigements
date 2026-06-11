#include <stdio.h>
int main(){int num=121,temp=num; int rev=(num%10)*100+((num/10)%10)*10+(num/100); if(temp==rev) printf("Palindrome Number"); else printf("Not Palindrome Number"); return 0;}