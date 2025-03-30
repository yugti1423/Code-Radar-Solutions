#include<stdio.h>

void trackPlayerRanks(int n, int leaderboard[], int m, int gameScores[]) {
    
    int uniqueLeaderboard[n];
    int uniqueSize = 0;
    
    for (int i = 0; i < n; i++) {
        if (i == 0 || leaderboard[i] != leaderboard[i - 1]) {
            uniqueLeaderboard[uniqueSize++] = leaderboard[i];
        }
    }
    
    int index = uniqueSize - 1;
    for (int i = 0; i < m; i++) {

        while (index >= 0 && gameScores[i] >= uniqueLeaderboard[index]) {
            index--;
        }
            
            printf("%d\n", index + 2);
    }
}

int main(){
    //n=leaderboard size...
    //m=number of games played...
    int n,m;
    scanf("%d",&n);
    int ranked[2000000];
    for(int i=0 ;i<n; i++){scanf("%d",ranked[i]);
    }
    scanf("%d",&m);
    int player[2000000];
    for(int i=0; i < m; i++){scanf("%d",&player[i]);
    }
    int result[2000000];
    trackPlayerRanks(n,player,m,result);
    for(int i=0; i<m; i++) printf("%d\n",result[i]);

    return 0;
}