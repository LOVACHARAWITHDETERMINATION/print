// setup.c

#include "setup.h"

//----------------------------------------------------------------
void set_title(const char* status) { //�˴���ּ����ȫ���ô��ڱ���
    SetConsoleTitleA(status);  // ���¿���̨�����Է�ӳ��ǰ״̬�����
}
//----------------------------------------------------------------
void ptitle(const char* location) { //�˴���ּ�ڴ���Ϸ�����ñ��⣬���ڵ����򳡾�
    char title[256];
    snprintf(title, sizeof(title), "%s - %s", location, GAME_NAME);
    SetConsoleTitleA(title);
}
//----------------------------------------------------------------
void title() { //���ñ��⣬��Ϊdefine����Ϸ��
    SetConsoleTitleA(GAME_NAME); //�趨�������
    return;
}
//---------------------------------------------------------------
void dx_end() { //��Ϸ��������main������ʹ��dx_end();����������
    SetConsoleTitleA(GAME_NAME); //�趨�������
    printf("Game processes have terminated\n");
    getchar();
    return;
}

void clear() { //��Ϸ��������main������ʹ��dx_end();����������
    system("cls");
    return;
}
