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
int gagnant(char a, char b) {
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

int main(void) {
    char a, b;
    int r;
    srand(time(NULL));
    do {
        printf("player 1 choose a move : (c,p,r) \n");
        scanf(" %c", &a);
        r = rand() % 100;
        NumToLet(&b, r);
        gagnant(a, b);
    } while (gagnant(a, b) == -1);
    return 0;
}
