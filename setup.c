// setup.c

#include "setup.h"

//----------------------------------------------------------------
void set_title(const char* status) { //此代码旨在完全设置窗口标题
    SetConsoleTitleA(status);  // 更新控制台标题以反映当前状态或进度
}
//----------------------------------------------------------------
void ptitle(const char* location) { //此代码旨在带游戏名设置标题，用于地名或场景
    char title[256];
    snprintf(title, sizeof(title), "%s - %s", location, GAME_NAME);
    SetConsoleTitleA(title);
}
//----------------------------------------------------------------
void title() { //设置标题，仅为define的游戏名
    SetConsoleTitleA(GAME_NAME); //设定具体标题
    return;
}
//---------------------------------------------------------------
void dx_end() { //游戏结束，在main函数中使用dx_end();来发挥作用
    SetConsoleTitleA(GAME_NAME); //设定具体标题
    printf("Game processes have terminated\n");
    getchar();
    return;
}

void clear() { //游戏结束，在main函数中使用dx_end();来发挥作用
    system("cls");
    return;
}
