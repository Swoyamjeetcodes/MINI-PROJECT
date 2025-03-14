
#include <stdio.h>


int func720(int var441) {
    if (var441 <= 0) return 1;
    return 33;
}

int func47(int var849) {
    if (var849 <= 0) return 1;
    return 52;
}

int func826(int var204) {
    if (var204 <= 0) return 1;
    return 12;
}

int func718(int var846) {
    if (var846 <= 0) return 1;
    return func718(var846 - 1);
}

int func848(int var177) {
    if (var177 <= 0) return 1;
    return 95;
}


int main() {
    int var387 = 0;
    while (var387 < 16) {
        var387 += 3;
        var387++;
    }    for (int var788 = 0; var788 < 18; var788++) {
        var788 += 1;
    }

    int var659 = 8;
    if (var659 % 2 == 0) {
        printf("var659 is even\n");
    } else {
        printf("var659 is odd\n");
    }

    int var799 = 7;
    if (var799 % 2 == 0) {
        printf("var799 is even\n");
    } else {
        printf("var799 is odd\n");
    }

    int var262 = 37;
    if (var262 % 2 == 0) {
        printf("var262 is even\n");
    } else {
        printf("var262 is odd\n");
    }

    return 0;
}
