
#include <stdio.h>


int func339(int var875) {
    if (var875 <= 0) return 1;
    return func339(var875 - 1);
}

int func211(int var936) {
    if (var936 <= 0) return 1;
    return func211(var936 - 1);
}

int func669(int var11) {
    if (var11 <= 0) return 1;
    return 22;
}

int func81(int var804) {
    if (var804 <= 0) return 1;
    return 48;
}

int func914(int var509) {
    if (var509 <= 0) return 1;
    return func914(var509 - 1);
}


int main() {
    int var711 = 0;
    while (var711 < 6) {
        var711 += 5;
        var711++;
    }

    int var518 = 24;
    if (var518 % 2 == 0) {
        printf("var518 is even\n");
    } else {
        printf("var518 is odd\n");
    }

    int var582 = 5;
    if (var582 % 2 == 0) {
        printf("var582 is even\n");
    } else {
        printf("var582 is odd\n");
    }

    int var753 = 65;
    if (var753 % 2 == 0) {
        printf("var753 is even\n");
    } else {
        printf("var753 is odd\n");
    }

    return 0;
}
