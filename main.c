// main.c
#include "stdio.h"
#include "windows.h"
#include "string.h"

#include "print_custom.h"
#include "print_basic.h"
#include "setup.h" // ����setup.h

void doki() {
    //�˺���ּ������ʾ
    title();//���ñ���
    print_basic(L"������", L"���ڵı����Ǵ���Ϸ���⣬��仰��˵����", "1-B", 1); // ���� 1-B
    print_basic(L"������", L"���ڵı����Ǵ���Ϸ���⣬��仰��˵����", "1-B", 1); // ���� 1-B
    print_basic(L"������", L"���ڵı����Ǵ���Ϸ���⣬��仰��˵����", "1-B", 1); // ���� 1-B
    printf("�԰�\n"); //��ͨ��printf����������Ϸϵͳ���԰�
    print_basic(L"������", L"�԰�END", "1-B", 1); // ���� 1-B
    ptitle("�����򳡾�");//��Ϸ���������Ϊ �������򳡾� - PrintGfx Console Release��
    print_basic(L"������", L"��Ϸ���������Ϊ �������򳡾� - PrintGfx Console Release������仰��˵����", "1-B", 1); // ���� 1-B
    print_basic(L"������", L"��Ϸ���������Ϊ �������򳡾� - PrintGfx Console Release������仰��˵����", "1-B", 1); // ���� 1-B
    print_basic(L"������", L"��Ϸ���������Ϊ �������򳡾� - PrintGfx Console Release������仰��˵����", "1-B", 1); // ���� 1-B
    set_title("���� - Sss+ Gfx Console Release");//����ָ�����ڲ�����ԭ��Ϸ��������ñ���
    print_basic(L"������", L"���ڵı����ǡ����� - Sss+ Gfx Console Release������仰��˵����", "1-B", 1); // ���� 1-B
    print_basic(L"������", L"���ڵı����ǡ����� - Sss+ Gfx Console Release������仰��˵����", "1-B", 1); // ���� 1-B
    print_basic(L"������", L"���ڵı����ǡ����� - Sss+ Gfx Console Release������仰��˵����", "1-B", 1); // ���� 1-B
    print_basic(L"������", L"���Ͼ�Ҫ����", "1-B", 1); // ���� 1-B
    clear();
    print_basic(L"������", L"��Ҫ��Բ��", "1-B", 1); // ���� 1-B
    print_basic(L"������", L"��Ҫ��Դ��", "1-B", 1); // ���� 1-B
    print_basic(L"������", L"��Ҫ��Ե��", "1-B", 1); // ���� 1-B
    Sleep(1000);  // �ӳ�ָ���ĺ��������ټ���
    Sleep(1000);  // �ӳ�ָ���ĺ��������ټ���
    Sleep(1000);  // �ӳ�ָ���ĺ��������ټ���

}
int main() {
    title();//���ñ���
    //----------------------------------------------------------------
    //doki();//�����Ƿ���в��ԣ�����ɾ����
 
    //---------------------------------------------------------------- ���ϲ��˱༭
    printf("PrintGfx Console Release �汾CN 1.0.0\n");
    printf("��Ȩ���� IDEAMOND 2024\n\n");
    Sleep(3000);
    clear();
    ptitle("����");
    Sleep(100);

    print_basic(L"������", L"�������������������", "1-B", 0);
    Sleep(400);

    print_basic(L"������", L"���������������700PC��W2�ķ��", "1-B", 0);
    Sleep(400);

    print_basic(L"¹ĿԲ��", L"�棡�����㣡���ǲ�Ҫ�ٴ��˺���", "1-B", 0);
    Sleep(400);

    print_basic(L"������", L"��������£�СԲ��ȥ�ϿΣ���Ҫ�������ǵ������ˣ�", "1-B", 0);
    Sleep(1500);

    print_basic(L"¹ĿԲ��", L"����......", "1-B", 1);
    Sleep(400);

    printf("\n\n¹ĿԲ�������˳�Ĭ");
    Sleep(1500);
    printf("...");
    Sleep(500);
    printf("...");
    Sleep(400);
    printf("...\n");
    Sleep(2500);

    clear();
    Sleep(4000);

    ptitle("�����½�");
    Sleep(2500);

    printf("------------------------");
    Sleep(300);
    printf("------------------------\n");

    printf("       ");
    Sleep(150);
    printf("��һ��");
    Sleep(150);
    printf("       ");
    Sleep(150);
    printf("�� �� �� ��\n");
    Sleep(150);

    Sleep(300);
    printf("------------------------");
    Sleep(300);
    printf("------------------------\n");
    Sleep(3000);
    clear();

    Sleep(1500);
    printf("44��3��17��\n");
    Sleep(400);
    ptitle("����");

    print_basic(L"������", L"DEMO END", "1-B", 1);

    //---------------------------------------------------------------- ���²��˱༭
    dx_end();//��Ϸ����
    return 0;//�˳�����
}
//----------------------------------------------------------------
