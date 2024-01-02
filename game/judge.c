// 此文件用于对局势进行分析判断
#include "gomoku.h"

// 判断是否有胜者出现：若黑棋获胜，返回 BLACK；白棋获胜，返回 WHITE；未出现胜者，返回 NOBODY
int judgeWin(void){
    // 判断是否有五子连珠
    for (int i = 0; i <= 3; i++){
        if (innerBoard[stepRecord[stepNum].x][stepRecord[stepNum].y].direction[i] + innerBoard[stepRecord[stepNum].x][stepRecord[stepNum].y].direction[i + 4] + 1 >= 5){
            return player;
        }
    }
    return NOBODY;
}