#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    printf("\n ###### ONKAR'S GUESSING GAME ##### \n");
    int number,guess,nguesses;
    srand(time(0));
    number=rand()%100 + 1;
   
    for(nguesses=1;guess!=number;nguesses++){
    printf("enter your guess: \n");
    scanf("%d",&guess); 
        if(guess<number){
            printf("type higher number \n");
        }
        else if(guess>number){
            printf("type lower number \n");
        }
        else{
            printf("you guessed it right in %d attempts \n",nguesses);
        }
    }   
    return 0;
}