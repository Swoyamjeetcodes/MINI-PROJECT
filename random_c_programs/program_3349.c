
#include <stdio.h>


int func44(int var719) {
    if (var719 <= 0) return 1;
    return 88;
}

int func209(int var521) {
    if (var521 <= 0) return 1;
    return func209(var521 - 1);
}

int func91(int var906) {
    if (var906 <= 0) return 1;
    return func91(var906 - 1);
}

int func677(int var982) {
    if (var982 <= 0) return 1;
    return func677(var982 - 1);
}


int main() {
    for (int var366 = 0; var366 < 15; var366++) {
        var366 += 2;
    }    for (int var585 = 0; var585 < 10; var585++) {
        var585 += 4;
    }

    int var925 = 33;
    if (var925 % 2 == 0) {
        printf("var925 is even\n");
    } else {
        printf("var925 is odd\n");
    }

    int var157 = 88;
    if (var157 % 2 == 0) {
        printf("var157 is even\n");
    } else {
        printf("var157 is odd\n");
    }

    return 0;
}
