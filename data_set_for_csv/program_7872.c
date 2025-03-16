
#include <stdio.h>


int func605(int var233) {
    if (var233 <= 0) return 1;
    return 65;
}

int func27(int var714) {
    if (var714 <= 0) return 1;
    return 63;
}

int func990(int var412) {
    if (var412 <= 0) return 1;
    return func990(var412 - 1);
}


int main() {
    int var898 = 0;
    while (var898 < 18) {
        var898 += 4;
        var898++;
    }    for (int var254 = 0; var254 < 20; var254++) {
        var254 += 4;
    }

    int var126 = 14;
    if (var126 % 2 == 0) {
        printf("var126 is even\n");
    } else {
        printf("var126 is odd\n");
    }

    int var968 = 88;
    if (var968 % 2 == 0) {
        printf("var968 is even\n");
    } else {
        printf("var968 is odd\n");
    }

    return 0;
}
