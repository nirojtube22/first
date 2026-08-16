#include <stdio.h>
#include <locale.h>

#ifdef _WIN32
#include <windows.h>
#endif

int main() {
    // Fixes Windows terminal rendering issues
    #ifdef _WIN32
    SetConsoleOutputCP(65001);
    #else
    setlocale(LC_CTYPE, "");
    #endif

    printf("The symbol for square root is: \u221A\n");
    printf("\u221A16 = 4\n");

    return 0;
}
