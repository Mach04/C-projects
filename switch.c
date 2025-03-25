#include <stdio.h>

int main(){
    int grade = 4;
    switch(grade){
        case 2:
            printf("Very bad");
            break;
        case 3:
            printf("bad");
            break;
        case 4:
            printf("good");
            break;
        case 5:
            printf("the best");
        default:
            printf("Not suitable grade !");
    }
    return 0;
}