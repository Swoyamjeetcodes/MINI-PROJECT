
#include <stdio.h>


int func685(int var428) {
    if (var428 <= 0) return 1;
    return 45;
}

int func250(int var385) {
    if (var385 <= 0) return 1;
    return func250(var385 - 1);
}

int func572(int var858) {
    if (var858 <= 0) return 1;
    return func572(var858 - 1);
}

int func367(int var129) {
    if (var129 <= 0) return 1;
    return func367(var129 - 1);
}


int main() {
    for (int var918 = 0; var918 < 8; var918++) {
        var918 += 1;
    }    int var555 = 0;
    while (var555 < 9) {
        var555 += 4;
        var555++;
    }

    int var818 = 53;
    if (var818 % 2 == 0) {
        printf("var818 is even\n");
    } else {
        printf("var818 is odd\n");
    }

    int var873 = 36;
    if (var873 % 2 == 0) {
        printf("var873 is even\n");
    } else {
        printf("var873 is odd\n");
    }

    int var301 = 19;
    if (var301 % 2 == 0) {
        printf("var301 is even\n");
    } else {
        printf("var301 is odd\n");
    }

    int var592 = 69;
    if (var592 % 2 == 0) {
        printf("var592 is even\n");
    } else {
        printf("var592 is odd\n");
    }

    return 0;
}
