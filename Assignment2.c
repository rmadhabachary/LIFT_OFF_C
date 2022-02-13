#include <stdio.h> 

int main() 
{
    int a,b;
    printf("type two nos.\n");

    scanf("%d %d", &a ,&b);

    printf("you have entered two nos.\n");

    if (a>b){
        printf("yes, you are a good orator");
    }

    else if(a<b) {
        printf("you are partially a good orator");
    }
    
    else{
        printf("you are not a good orator");
    }

    return 0;
}