
#include <stdio.h>


int func775(int var303) {
    if (var303 <= 0) return 1;
    return func775(var303 - 1);
}

int func291(int var395) {
    if (var395 <= 0) return 1;
    return func291(var395 - 1);
}

int func127(int var78) {
    if (var78 <= 0) return 1;
    return 51;
}

int func351(int var613) {
    if (var613 <= 0) return 1;
    return 58;
}


int main() {
    int var446 = 0;
    while (var446 < 19) {
        var446 += 2;
        var446++;
    }    int var230 = 0;
    while (var230 < 5) {
        var230 += 4;
        var230++;
    }

    int var794 = 64;
    if (var794 % 2 == 0) {
        printf("var794 is even\n");
    } else {
        printf("var794 is odd\n");
    }

    int var215 = 24;
    if (var215 % 2 == 0) {
        printf("var215 is even\n");
    } else {
        printf("var215 is odd\n");
    }

    int var111 = 87;
    if (var111 % 2 == 0) {
        printf("var111 is even\n");
    } else {
        printf("var111 is odd\n");
    }

    return 0;
}
