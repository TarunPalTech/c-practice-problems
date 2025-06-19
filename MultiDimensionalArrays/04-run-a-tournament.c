// Problem: Four players are playing a tournament of Chess with round robin method (each player will play with every other player). Each win has 2 points, draw has 1 point and loose has 0 points. Declare a score_board two dimensional array to store the scores of the players agains each player.
// Problem: For que-4, define a function to update score_board after each match result.
// Problem: For que-4, define a function to display score_board.
// Problem: For que-4, define a function which returns the score of a specific player
// Problem: For que-4, define a function to find the winner of the tournament.
// Problem: For que-4, define a function to display rank of the players.
// Problem: For que-4, define a function to run tournament, in which user has to enter result of each game and update score board using score_board function.

#include<stdio.h>

void run_tournament(int score_board[][4]);
void display_score_board(int score_board[][4]);
int get_score(int score_board[][4], int player);
int find_winner(int score_board[][4]);
void display_rank(int score_board[][4]);
void update_score(int score_board[][4], int score,int p1, int p2);
int main(){
    int score_board[4][4]= {0};
    run_tournament(score_board);
    printf("\n");
    for(int i=0;i<4;i++){
        printf("Score of player %d is %d!\n",i+1, get_score(score_board, i));
    }
    int winner = find_winner(score_board);
    printf("Winner is player %d and score is %d.",winner+1, get_score(score_board, winner));
    display_rank(score_board);
    return 0;
}
void run_tournament(int score_board[][4]){
    update_score(score_board, 1, 0, 3);
    update_score(score_board, 2, 1, 3);
    update_score(score_board, 0, 2, 3);
    update_score(score_board, 2, 4, 3);
    update_score(score_board, 1, 0, 2);
    update_score(score_board, 2, 1, 2);
    update_score(score_board, 2, 2, 2);
    update_score(score_board, 1, 3, 2);
    update_score(score_board, 1, 0, 1);
    update_score(score_board, 1, 1, 1);
    update_score(score_board, 2, 2, 1);
    update_score(score_board, 2, 3, 1);
    display_score_board(score_board);
}
void update_score(int score_board[][4], int score,int p1, int p2){
    score_board[p1][p2]=score;
    score_board[p2][p1]=2-score;
}
void display_score_board(int score_board[][4]){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("%d\t",score_board[i][j]);
        }
        printf("\n");
    }
}
int get_score(int score_board[][4], int player){
    int score=0;
    for(int i=0;i<4;i++){
        score+=score_board[player][i];
    }
    return score;
}
int find_winner(int score_board[][4]){
    int scores[4];
    for(int i=0;i<4;i++){
        scores[i]=get_score(score_board, i);
    }
    int winner=scores[0], player;
    for(int i=1;i<4;i++){
        if(winner<scores[i]){
            winner=scores[i];
            player=i;
        }
    }
    return player;
}
void display_rank(int score_board[][4]){
    printf("\n\nRanks:\n");
    int scores[4], players[4]={1,2,3,4};
    for(int i=0;i<4;i++){
        scores[i]=get_score(score_board,i);
    }
    int temp1, temp2;
    for(int round=1;round<4;round++){
        for(int i=0;i<4-round;i++){
            if(scores[i]<scores[i+1]){
                temp1=scores[i];
                scores[i]=scores[i+1];
                scores[i+1]=temp1;
                temp2=players[i];
                players[i]=players[i+1];
                players[i+1]=temp2;
            }
        }
    }
    for(int i=0;i<4;i++){
        printf("Player %d got rank - %d\n",i+1, players[i]);
    }
}