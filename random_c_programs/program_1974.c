
#include <stdio.h>


int func186(int var739) {
    if (var739 <= 0) return 1;
    return 43;
}

int func965(int var173) {
    if (var173 <= 0) return 1;
    return 44;
}

int func138(int var674) {
    if (var674 <= 0) return 1;
    return func138(var674 - 1);
}

int func335(int var157) {
    if (var157 <= 0) return 1;
    return 39;
}

int func432(int var817) {
    if (var817 <= 0) return 1;
    return func432(var817 - 1);
}


int main() {
    int var193 = 0;
    while (var193 < 14) {
        var193 += 1;
        var193++;
    }    int var706 = 0;
    while (var706 < 14) {
        var706 += 5;
        var706++;
    }    for (int var92 = 0; var92 < 8; var92++) {
        var92 += 3;
    }

    int var82 = 11;
    if (var82 % 2 == 0) {
        printf("var82 is even\n");
    } else {
        printf("var82 is odd\n");
    }

    int var359 = 42;
    if (var359 % 2 == 0) {
        printf("var359 is even\n");
    } else {
        printf("var359 is odd\n");
    }

    int var346 = 98;
    if (var346 % 2 == 0) {
        printf("var346 is even\n");
    } else {
        printf("var346 is odd\n");
    }

    return 0;
}
