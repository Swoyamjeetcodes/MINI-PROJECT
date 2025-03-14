
#include <stdio.h>


int func863(int var233) {
    if (var233 <= 0) return 1;
    return func863(var233 - 1);
}

int func764(int var575) {
    if (var575 <= 0) return 1;
    return func764(var575 - 1);
}

int func627(int var209) {
    if (var209 <= 0) return 1;
    return func627(var209 - 1);
}

int func519(int var556) {
    if (var556 <= 0) return 1;
    return func519(var556 - 1);
}


int main() {
    int var907 = 0;
    while (var907 < 8) {
        var907 += 4;
        var907++;
    }

    int var426 = 68;
    if (var426 % 2 == 0) {
        printf("var426 is even\n");
    } else {
        printf("var426 is odd\n");
    }

    int var432 = 18;
    if (var432 % 2 == 0) {
        printf("var432 is even\n");
    } else {
        printf("var432 is odd\n");
    }

    return 0;
}
