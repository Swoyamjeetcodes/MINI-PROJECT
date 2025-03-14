
#include <stdio.h>


int func847(int var739) {
    if (var739 <= 0) return 1;
    return func847(var739 - 1);
}

int func264(int var950) {
    if (var950 <= 0) return 1;
    return func264(var950 - 1);
}

int func148(int var486) {
    if (var486 <= 0) return 1;
    return func148(var486 - 1);
}

int func768(int var471) {
    if (var471 <= 0) return 1;
    return func768(var471 - 1);
}

int func555(int var231) {
    if (var231 <= 0) return 1;
    return func555(var231 - 1);
}


int main() {
    for (int var479 = 0; var479 < 14; var479++) {
        var479 += 1;
    }    for (int var680 = 0; var680 < 17; var680++) {
        var680 += 3;
    }    for (int var636 = 0; var636 < 7; var636++) {
        var636 += 3;
    }

    int var381 = 75;
    if (var381 % 2 == 0) {
        printf("var381 is even\n");
    } else {
        printf("var381 is odd\n");
    }

    int var269 = 26;
    if (var269 % 2 == 0) {
        printf("var269 is even\n");
    } else {
        printf("var269 is odd\n");
    }

    int var216 = 5;
    if (var216 % 2 == 0) {
        printf("var216 is even\n");
    } else {
        printf("var216 is odd\n");
    }

    return 0;
}
