
#include <stdio.h>


int func320(int var61) {
    if (var61 <= 0) return 1;
    return 50;
}

int func745(int var926) {
    if (var926 <= 0) return 1;
    return func745(var926 - 1);
}

int func485(int var530) {
    if (var530 <= 0) return 1;
    return 86;
}

int func442(int var545) {
    if (var545 <= 0) return 1;
    return 77;
}

int func516(int var857) {
    if (var857 <= 0) return 1;
    return func516(var857 - 1);
}


int main() {
    int var420 = 0;
    while (var420 < 9) {
        var420 += 5;
        var420++;
    }

    int var998 = 52;
    if (var998 % 2 == 0) {
        printf("var998 is even\n");
    } else {
        printf("var998 is odd\n");
    }

    int var876 = 88;
    if (var876 % 2 == 0) {
        printf("var876 is even\n");
    } else {
        printf("var876 is odd\n");
    }

    return 0;
}
