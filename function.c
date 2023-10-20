#include<stdio.h>

int sum(int a, int b){

    int answer;
    answer = a+b;
    return answer;
}

int main(){

    int y = 2;
    int x = sum(5, y); //calling our new function

    printf("the sum of 5 and %d is %d\n", y, x);
}