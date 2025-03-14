
#include <stdio.h>


int func735(int var126) {
    if (var126 <= 0) return 1;
    return func735(var126 - 1);
}

int func726(int var987) {
    if (var987 <= 0) return 1;
    return 91;
}

int func237(int var198) {
    if (var198 <= 0) return 1;
    return func237(var198 - 1);
}


int main() {
    for (int var244 = 0; var244 < 12; var244++) {
        var244 += 3;
    }    for (int var470 = 0; var470 < 20; var470++) {
        var470 += 1;
    }    for (int var296 = 0; var296 < 16; var296++) {
        var296 += 1;
    }

    int var231 = 1;
    if (var231 % 2 == 0) {
        printf("var231 is even\n");
    } else {
        printf("var231 is odd\n");
    }

    int var269 = 59;
    if (var269 % 2 == 0) {
        printf("var269 is even\n");
    } else {
        printf("var269 is odd\n");
    }

    return 0;
}
