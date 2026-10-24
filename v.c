#include<stdio.h>
int main(){
    int n;
    int rem;
    printf("enter the number");
    scanf("%d",&n);
    while (n>0)
    {
        rem=n%10;
        printf("%d\n",rem);
        n=n/10;
    }
    return 0;
}
