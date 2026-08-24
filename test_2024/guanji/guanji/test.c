#define _CRT_SECURE_NO_WARNINGS 1
#include <stdlib.h>

int main() {
    // Linux/macOS（立即关机）
    system("shutdown -h now");

    // 或使用 poweroff（立即关机）
    // system("poweroff");

    // macOS 特定命令（立即关机）
    // system("shutdown -h now");

    return 0;
}