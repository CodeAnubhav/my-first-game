#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int numbers;
     srand(time(0));
     numbers=rand()%100+1;//random number between 100 to 1
   
    printf("the number is %d",numbers);
    return 0;
}