
#include <stdio.h>


int func155(int var45) {
    if (var45 <= 0) return 1;
    return func155(var45 - 1);
}

int func308(int var530) {
    if (var530 <= 0) return 1;
    return 63;
}


int main() {
    int var675 = 0;
    while (var675 < 19) {
        var675 += 5;
        var675++;
    }    int var356 = 0;
    while (var356 < 16) {
        var356 += 1;
        var356++;
    }    int var217 = 0;
    while (var217 < 6) {
        var217 += 2;
        var217++;
    }

    int var156 = 14;
    if (var156 % 2 == 0) {
        printf("var156 is even\n");
    } else {
        printf("var156 is odd\n");
    }

    int var133 = 58;
    if (var133 % 2 == 0) {
        printf("var133 is even\n");
    } else {
        printf("var133 is odd\n");
    }

    return 0;
}
