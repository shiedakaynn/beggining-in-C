#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char * FullName(char s){
    if (s == 'c'){
        return "scissors";
    }
    if (s == 'p'){
        return "paper";
    }
    if (s == 'r'){
        return "rock";
    }
    return "saisie invalide";
}
int winner(char a, char b) {
    if (a == b) {
        printf("you choosed %s computer choosed %s\n",FullName(a),FullName(b));
        printf("tie, play again \n");
        return -1;
    }
    if (a == 'c' && b == 'p') {
        printf("you choosed %s computer choosed %s\n",FullName(a),FullName(b));
        printf("player 1 wins\n");
        return 1;
    }
    if (a == 'c' && b == 'r') {
        printf("you choosed %s computer choosed %s\n",FullName(a),FullName(b));
        printf("player 2 wins\n");
        return 2;
    }   
    if (a == 'r' && b == 'c') {
        printf("you choosed %s computer choosed %s\n",FullName(a),FullName(b));
        printf("player 1 wins\n");
        return 1;
    }   
    if (a == 'r' && b == 'p') {
        printf("you choosed %s computer choosed %s\n",FullName(a),FullName(b));
        printf("player 2 wins\n");
        return 2;
    }
    if (a == 'p' && b == 'r') {
        printf("you choosed %s computer choosed %s\n",FullName(a),FullName(b));
        printf("player 1 wins\n");
        return 1;
    } 
    if (a == 'p' && b == 'c') {
        printf("you choosed %s computer choosed %s\n",FullName(a),FullName(b));
        printf("player 2 wins\n");
        return 2;
    }
    else{
        printf("you choosed %s computer choosed %s\n",FullName(a),FullName(b));
        return -1;   
    }
}
void NumToLet(char *b, int r) {
    if (r < 33) {
        *b = 'c';
    }
    if (r >= 33 && r < 66) {
        *b = 'p';
    }
    if (r >= 66 && r <= 100) {
        *b = 'r';
    }
}

void Core(void) {
    char a, b;
    int r,result;
    srand(time(NULL));
    do {
        printf("player 1 choose a move : (c,p,r) \n");
        scanf(" %c", &a);
        r = rand() % 100;
        NumToLet(&b, r);
        result = winner(a, b);
    } while (result == -1);
}
int main(void){
    char choice='y';
    do{
        Core();    
        printf("Play again ? (y/n) \n");
        scanf("%s",&choice);
    }while (choice =='y');
    return 0;
}