#include <stdio.h>
void correctanswer(){
    printf("Correct answer\n");
    printf("You have scored 5 points\n\n");
    return;
}
void incorrectanswer(){
    printf("Incorrect answer\n");
    printf("You have scored 0 point\n\n");
    return;
}
int main() {
    int i, ans1, ans2, ans3, point1, point2, point3;
    printf("  Welcome to the game\n\n");
    printf("> Press 1 to start the game\n");
    printf("> Press 0 to quit the game\n");
    scanf("%d", &i);
    if (i==1){
        printf("The game has started\n\n");
    }
    else if (i==0){
        printf("The game has ended\n\n");
    }
    else{
        printf("Invalid input\n\n");
    }
    if (i==1){
        printf("1- Which one is the first search engine on the internet?\n\n");
        printf("1) Google\n");
        printf("2) Archie\n");
        printf("3) Wais\n");
        printf("4) Altavista\n");
        printf("Enter Your Answer : ");
        scanf("%d", &ans1);
        if(ans1 == 2){
            correctanswer();
            point1 = 5;
        }
        else{
            incorrectanswer();
            point1 = 0;
        }
        printf("2- Which one is the first web browser invented in 1990?\n\n");
        printf("1) Internet Explorer\n");
        printf("2) Mosaic\n");
        printf("3) Mozilla\n");
        printf("4) Nexus\n");
        printf("Enter Your Answer : ");
        scanf("%d", &ans2);
        if (ans2 == 4){
            correctanswer();
            point2 = 5;
        }
        else{
            incorrectanswer();
            point2 = 0;
        }
        printf("3- Firewall in computer is used for?\n\n");
        printf("1) Securit\n");
        printf("2) Data Transmission\n");
        printf("3) Monitoring\n");
        printf("4) Authentication\n");
        printf("Enter Your Answer : ");
        scanf("%d", &ans3);
        if (ans3 == 1){
            correctanswer();
            point3 = 5;
        }
        else{
            incorrectanswer();
            point3 = 0;
        }
        printf("Congratulations, You have scored %d points", point1+point2+point3);
    }

    return 0;
}
