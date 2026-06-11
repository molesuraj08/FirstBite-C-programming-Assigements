#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    for(int i=1; i<=n; i++) {
        int num=i, sum=0, rem;

        while(num>0) {
            rem=num%10;
            sum += rem*rem*rem;
            num/=10;
        }

        if(sum==i)
            printf("%d ", i);
    }

    return 0;
}