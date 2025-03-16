
#include <stdio.h>


int func904(int var476) {
    if (var476 <= 0) return 1;
    return 36;
}

int func590(int var682) {
    if (var682 <= 0) return 1;
    return func590(var682 - 1);
}

int func491(int var259) {
    if (var259 <= 0) return 1;
    return func491(var259 - 1);
}

int func540(int var52) {
    if (var52 <= 0) return 1;
    return func540(var52 - 1);
}

int func403(int var501) {
    if (var501 <= 0) return 1;
    return 19;
}


int main() {
    int var47 = 0;
    while (var47 < 20) {
        var47 += 1;
        var47++;
    }    int var845 = 0;
    while (var845 < 15) {
        var845 += 4;
        var845++;
    }

    int var78 = 20;
    if (var78 % 2 == 0) {
        printf("var78 is even\n");
    } else {
        printf("var78 is odd\n");
    }

    int var349 = 5;
    if (var349 % 2 == 0) {
        printf("var349 is even\n");
    } else {
        printf("var349 is odd\n");
    }

    return 0;
}
