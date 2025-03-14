
#include <stdio.h>


int func398(int var643) {
    if (var643 <= 0) return 1;
    return 48;
}

int func630(int var868) {
    if (var868 <= 0) return 1;
    return func630(var868 - 1);
}

int func385(int var509) {
    if (var509 <= 0) return 1;
    return func385(var509 - 1);
}

int func932(int var955) {
    if (var955 <= 0) return 1;
    return 88;
}


int main() {
    for (int var592 = 0; var592 < 16; var592++) {
        var592 += 2;
    }

    int var833 = 99;
    if (var833 % 2 == 0) {
        printf("var833 is even\n");
    } else {
        printf("var833 is odd\n");
    }

    int var64 = 48;
    if (var64 % 2 == 0) {
        printf("var64 is even\n");
    } else {
        printf("var64 is odd\n");
    }

    int var372 = 12;
    if (var372 % 2 == 0) {
        printf("var372 is even\n");
    } else {
        printf("var372 is odd\n");
    }

    return 0;
}
