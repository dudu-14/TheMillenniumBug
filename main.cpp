#ifdef _MSC_VER
#pragma execution_character_set("utf-8")
#define _CRT_SECURE_NO_WARNINGS
#endif
// 原作者:Bilibili- SYSTEM-RAMOS-ZDY
// 搬运工:Bilibili- 我最牛逼克拉斯/GitHub- dudu-14
#include <cstdio>
#include <windows.h>
#include <time.h>
#include <conio.h>

int main()
{
    _getch();
    while (true)
    {
        SYSTEMTIME system_time = {0};
        GetLocalTime(&system_time);
        if (system_time.wYear >= 2000)
        {
            system_time.wYear -= 100;
        }
        SetLocalTime(&system_time);
        Sleep(100);
    }
    //还返回值干啥呀？死循环！
}
