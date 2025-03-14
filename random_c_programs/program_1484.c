
#include <stdio.h>


int func490(int var863) {
    if (var863 <= 0) return 1;
    return 1;
}

int func176(int var345) {
    if (var345 <= 0) return 1;
    return func176(var345 - 1);
}

int func183(int var926) {
    if (var926 <= 0) return 1;
    return func183(var926 - 1);
}

int func306(int var268) {
    if (var268 <= 0) return 1;
    return 19;
}

int func833(int var668) {
    if (var668 <= 0) return 1;
    return 14;
}


int main() {
    for (int var665 = 0; var665 < 9; var665++) {
        var665 += 2;
    }

    int var363 = 40;
    if (var363 % 2 == 0) {
        printf("var363 is even\n");
    } else {
        printf("var363 is odd\n");
    }

    int var900 = 4;
    if (var900 % 2 == 0) {
        printf("var900 is even\n");
    } else {
        printf("var900 is odd\n");
    }

    int var609 = 77;
    if (var609 % 2 == 0) {
        printf("var609 is even\n");
    } else {
        printf("var609 is odd\n");
    }

    return 0;
}
