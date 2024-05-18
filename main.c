// main.c
#include "stdio.h"
#include "windows.h"
#include "string.h"

#include "print_custom.h"
#include "print_basic.h"
#include "setup.h" // 包含setup.h

void doki() {
    //此函数旨在做演示
    title();//设置标题
    print_basic(L"晓美焰", L"现在的标题是纯游戏标题，这句话会说三次", "1-B", 1); // 主题 1-B
    print_basic(L"晓美焰", L"现在的标题是纯游戏标题，这句话会说三次", "1-B", 1); // 主题 1-B
    print_basic(L"晓美焰", L"现在的标题是纯游戏标题，这句话会说三次", "1-B", 1); // 主题 1-B
    printf("旁白\n"); //普通的printf仍适用于游戏系统与旁白
    print_basic(L"晓美焰", L"旁白END", "1-B", 1); // 主题 1-B
    ptitle("地名或场景");//游戏标题会设置为 “地名或场景 - PrintGfx Console Release”
    print_basic(L"晓美焰", L"游戏标题会设置为 “地名或场景 - PrintGfx Console Release”，这句话会说三次", "1-B", 1); // 主题 1-B
    print_basic(L"晓美焰", L"游戏标题会设置为 “地名或场景 - PrintGfx Console Release”，这句话会说三次", "1-B", 1); // 主题 1-B
    print_basic(L"晓美焰", L"游戏标题会设置为 “地名或场景 - PrintGfx Console Release”，这句话会说三次", "1-B", 1); // 主题 1-B
    set_title("地名 - Sss+ Gfx Console Release");//这种指令用于不带有原游戏标题的重置标题
    print_basic(L"晓美焰", L"现在的标题是“地名 - Sss+ Gfx Console Release”，这句话会说三次", "1-B", 1); // 主题 1-B
    print_basic(L"晓美焰", L"现在的标题是“地名 - Sss+ Gfx Console Release”，这句话会说三次", "1-B", 1); // 主题 1-B
    print_basic(L"晓美焰", L"现在的标题是“地名 - Sss+ Gfx Console Release”，这句话会说三次", "1-B", 1); // 主题 1-B
    print_basic(L"晓美焰", L"马上就要清屏", "1-B", 1); // 主题 1-B
    clear();
    print_basic(L"晓美焰", L"我要玩圆神", "1-B", 1); // 主题 1-B
    print_basic(L"晓美焰", L"我要玩源神", "1-B", 1); // 主题 1-B
    print_basic(L"晓美焰", L"我要玩缘神", "1-B", 1); // 主题 1-B
    Sleep(1000);  // 延迟指定的毫秒数后再继续
    Sleep(1000);  // 延迟指定的毫秒数后再继续
    Sleep(1000);  // 延迟指定的毫秒数后再继续

}
int main() {
    title();//设置标题
    //----------------------------------------------------------------
    //doki();//决定是否进行测试，不可删除。
 
    //---------------------------------------------------------------- 以上不宜编辑
    printf("PrintGfx Console Release 版本CN 1.0.0\n");
    printf("版权所有 IDEAMOND 2024\n\n");
    Sleep(3000);
    clear();
    ptitle("序章");
    Sleep(100);

    print_basic(L"晓美焰", L"又是你吗？你这个畜生！", "1-B", 0);
    Sleep(400);

    print_basic(L"巴麻美", L"那又怎样？你这个700PC才W2的废物！", "1-B", 0);
    Sleep(400);

    print_basic(L"鹿目圆香", L"焰！麻美姐！你们不要再打了好吗？", "1-B", 0);
    Sleep(400);

    print_basic(L"巴麻美", L"不关你的事，小圆，去上课，不要参与我们的争端了！", "1-B", 0);
    Sleep(1500);

    print_basic(L"鹿目圆香", L"可是......", "1-B", 1);
    Sleep(400);

    printf("\n\n鹿目圆香陷入了沉默");
    Sleep(1500);
    printf("...");
    Sleep(500);
    printf("...");
    Sleep(400);
    printf("...\n");
    Sleep(2500);

    clear();
    Sleep(4000);

    ptitle("测试章节");
    Sleep(2500);

    printf("------------------------");
    Sleep(300);
    printf("------------------------\n");

    printf("       ");
    Sleep(150);
    printf("第一章");
    Sleep(150);
    printf("       ");
    Sleep(150);
    printf("测 试 章 节\n");
    Sleep(150);

    Sleep(300);
    printf("------------------------");
    Sleep(300);
    printf("------------------------\n");
    Sleep(3000);
    clear();

    Sleep(1500);
    printf("44年3月17日\n");
    Sleep(400);
    ptitle("机厅");

    print_basic(L"晓美焰", L"DEMO END", "1-B", 1);

    //---------------------------------------------------------------- 以下不宜编辑
    dx_end();//游戏结束
    return 0;//退出程序
}
//----------------------------------------------------------------
