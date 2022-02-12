#include <stdio.h> 

int main() {
    
    int score;
    scanf("%d",&score);

    switch (score){
        
    case 6:
        printf("you are good");
        break;
    
    case 7:
        printf("you are better");
        break;

    case 8:
        printf("you are best");
        break;

    case 9:
        printf("you are excellent");
        break;

    default:
        printf("try again, ALL THE BEST");
        break;
    }
    return 0;
}