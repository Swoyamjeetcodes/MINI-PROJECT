
#include <stdio.h>


int func746(int var52) {
    if (var52 <= 0) return 1;
    return 20;
}

int func561(int var719) {
    if (var719 <= 0) return 1;
    return func561(var719 - 1);
}


int main() {
    int var844 = 0;
    while (var844 < 8) {
        var844 += 2;
        var844++;
    }

    int var296 = 88;
    if (var296 % 2 == 0) {
        printf("var296 is even\n");
    } else {
        printf("var296 is odd\n");
    }

    int var556 = 50;
    if (var556 % 2 == 0) {
        printf("var556 is even\n");
    } else {
        printf("var556 is odd\n");
    }

    int var753 = 30;
    if (var753 % 2 == 0) {
        printf("var753 is even\n");
    } else {
        printf("var753 is odd\n");
    }

    return 0;
}
