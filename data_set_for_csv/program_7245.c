
#include <stdio.h>


int func373(int var666) {
    if (var666 <= 0) return 1;
    return 4;
}

int func780(int var752) {
    if (var752 <= 0) return 1;
    return 27;
}

int func52(int var363) {
    if (var363 <= 0) return 1;
    return func52(var363 - 1);
}


int main() {
    for (int var879 = 0; var879 < 14; var879++) {
        var879 += 5;
    }    for (int var64 = 0; var64 < 20; var64++) {
        var64 += 2;
    }

    int var741 = 39;
    if (var741 % 2 == 0) {
        printf("var741 is even\n");
    } else {
        printf("var741 is odd\n");
    }

    int var103 = 55;
    if (var103 % 2 == 0) {
        printf("var103 is even\n");
    } else {
        printf("var103 is odd\n");
    }

    return 0;
}
