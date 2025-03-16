
#include <stdio.h>


int func318(int var316) {
    if (var316 <= 0) return 1;
    return func318(var316 - 1);
}

int func623(int var394) {
    if (var394 <= 0) return 1;
    return 64;
}

int func218(int var122) {
    if (var122 <= 0) return 1;
    return 1;
}

int func216(int var272) {
    if (var272 <= 0) return 1;
    return func216(var272 - 1);
}

int func196(int var704) {
    if (var704 <= 0) return 1;
    return 5;
}


int main() {
    int var514 = 0;
    while (var514 < 14) {
        var514 += 1;
        var514++;
    }    int var261 = 0;
    while (var261 < 12) {
        var261 += 4;
        var261++;
    }    int var489 = 0;
    while (var489 < 7) {
        var489 += 4;
        var489++;
    }

    int var752 = 10;
    if (var752 % 2 == 0) {
        printf("var752 is even\n");
    } else {
        printf("var752 is odd\n");
    }

    return 0;
}
