#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int win(int x,int y)
{
    int AI_Score,player_Score,Remaining_Players,TURN;
    if(AI_Score<player_Score || TURN <=6)
    {
        return 1;
    }
    else if(Remaining_Players == 0 || TURN <=6)
    {
        return 0;
    }
    else if (AI_Score == player_Score || TURN <=6)
    {
        return 0;
    }
    else
    {
        return -1;
    }
}
int Score_Board()
{
    printf("/xcd/xcd/xcd/xcd/xcd/xcd/xcd/xcd/xcd/xcd/xcd/xcd\n");
    printf("/xcd/xcd/xcd SCORE BOARD xcd/xcd/xcd/xcd/xcd\n");
    printf("/xcd/xcd/xcd/xcd/xcd/xcd/xcd/xcd/xcd/xcd/xcd/xcd/xcd");
    printf("\n");
    printf("RUN:%d\t\t",Score_Run);
    printf("WICKET:%d\t\n",Score_Wicket);
    printf("REMAINING RUNS:%d",Remaining_Runs);
}
int run()
{
    int points;
    time_t t2;
    srand((unsigned)time(&t2));
    points = rand()%6;
    return points;
}
int Wicket()
{
    int out;
    time_t t1;
    srand((unsigned)time(&t1));
    out = rand()%4;
    return out;
}

int main()
{
    time_t t;
    int Runs[10]={0,1,2,4,6},AI_SCORE,PLAYER_SCORE;
    char out[20]={"RunOut","BOLD","Catch"};
    int R,O,hit;
    srand((unsigned)time(&t));
    printf("Player turn:");
    hit = rand()%3;
    switch (hit)
    {
    case 1:
        while (AI_SCORE>PLAYER_SCORE)
        {
            printf("");
            R=rand()%6;
            int Total_Score =Runs[R];
        }
        
        break;
    case 2:

        break;
    default:
        break;
    }
    return 0;
}
