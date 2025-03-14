
#include <stdio.h>


int func107(int var956) {
    if (var956 <= 0) return 1;
    return 98;
}

int func365(int var653) {
    if (var653 <= 0) return 1;
    return func365(var653 - 1);
}

int func19(int var44) {
    if (var44 <= 0) return 1;
    return func19(var44 - 1);
}

int func915(int var290) {
    if (var290 <= 0) return 1;
    return func915(var290 - 1);
}

int func424(int var797) {
    if (var797 <= 0) return 1;
    return 97;
}

int func437(int var567) {
    if (var567 <= 0) return 1;
    return func437(var567 - 1);
}

int func447(int var120) {
    if (var120 <= 0) return 1;
    return func447(var120 - 1);
}

int func479(int var392) {
    if (var392 <= 0) return 1;
    return func479(var392 - 1);
}


int main() {
    int var684 = 0;
    while (var684 < 12) {
        var684 += 2;
        var684++;
    }

    int var614 = 3;
    if (var614 % 2 == 0) {
        printf("var614 is even\n");
    } else {
        printf("var614 is odd\n");
    }

    int var509 = 1;
    if (var509 % 2 == 0) {
        printf("var509 is even\n");
    } else {
        printf("var509 is odd\n");
    }

    int var215 = 43;
    if (var215 % 2 == 0) {
        printf("var215 is even\n");
    } else {
        printf("var215 is odd\n");
    }

    return 0;
}
