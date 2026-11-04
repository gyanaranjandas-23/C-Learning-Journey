#include <stdio.h>
int main(){
    int year;

    printf("Enter any year: ");
    if(scanf("%d", &year) != 1){
        printf("Somthing went wrong!");
        return 0;
    }
    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
        printf("a leap year");
    }
    else{
        printf("not a leap year");
    }
    return 0;
}