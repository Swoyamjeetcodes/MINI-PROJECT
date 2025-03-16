
#include <stdio.h>


int func262(int var22) {
    if (var22 <= 0) return 1;
    return func262(var22 - 1);
}

int func587(int var729) {
    if (var729 <= 0) return 1;
    return func587(var729 - 1);
}

int func56(int var792) {
    if (var792 <= 0) return 1;
    return func56(var792 - 1);
}

int func330(int var775) {
    if (var775 <= 0) return 1;
    return 100;
}

int func114(int var533) {
    if (var533 <= 0) return 1;
    return func114(var533 - 1);
}


int main() {
    for (int var743 = 0; var743 < 18; var743++) {
        var743 += 4;
    }

    int var907 = 88;
    if (var907 % 2 == 0) {
        printf("var907 is even\n");
    } else {
        printf("var907 is odd\n");
    }

    int var888 = 98;
    if (var888 % 2 == 0) {
        printf("var888 is even\n");
    } else {
        printf("var888 is odd\n");
    }

    int var375 = 56;
    if (var375 % 2 == 0) {
        printf("var375 is even\n");
    } else {
        printf("var375 is odd\n");
    }

    return 0;
}
