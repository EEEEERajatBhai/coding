#include<stdio.h>

int fibo(int a){
    if (a == 0 || a == 1){
        return a;
    }else{
        return fibo (a-1)+fibo (a-2);
    }
}

int main(){
    int a;
    printf("enter the number:");
    scanf("%d",&a);

    while (i<a)
    {
    printf("%d",fibo(i));
    i++;
        }
    return 0;
}
