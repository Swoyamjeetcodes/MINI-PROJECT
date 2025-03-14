
#include <stdio.h>


int func91(int var976) {
    if (var976 <= 0) return 1;
    return func91(var976 - 1);
}

int func196(int var71) {
    if (var71 <= 0) return 1;
    return func196(var71 - 1);
}

int func241(int var741) {
    if (var741 <= 0) return 1;
    return func241(var741 - 1);
}

int func535(int var569) {
    if (var569 <= 0) return 1;
    return 55;
}

int func943(int var158) {
    if (var158 <= 0) return 1;
    return 85;
}


int main() {
    for (int var95 = 0; var95 < 14; var95++) {
        var95 += 4;
    }    for (int var849 = 0; var849 < 6; var849++) {
        var849 += 1;
    }

    int var85 = 71;
    if (var85 % 2 == 0) {
        printf("var85 is even\n");
    } else {
        printf("var85 is odd\n");
    }

    int var44 = 95;
    if (var44 % 2 == 0) {
        printf("var44 is even\n");
    } else {
        printf("var44 is odd\n");
    }

    return 0;
}
