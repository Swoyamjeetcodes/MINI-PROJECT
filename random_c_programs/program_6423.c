
#include <stdio.h>


int func120(int var645) {
    if (var645 <= 0) return 1;
    return func120(var645 - 1);
}

int func842(int var631) {
    if (var631 <= 0) return 1;
    return func842(var631 - 1);
}

int func580(int var582) {
    if (var582 <= 0) return 1;
    return func580(var582 - 1);
}

int func189(int var383) {
    if (var383 <= 0) return 1;
    return 69;
}


int main() {
    for (int var940 = 0; var940 < 6; var940++) {
        var940 += 5;
    }    for (int var553 = 0; var553 < 18; var553++) {
        var553 += 4;
    }

    int var908 = 0;
    if (var908 % 2 == 0) {
        printf("var908 is even\n");
    } else {
        printf("var908 is odd\n");
    }

    int var690 = 52;
    if (var690 % 2 == 0) {
        printf("var690 is even\n");
    } else {
        printf("var690 is odd\n");
    }

    int var807 = 63;
    if (var807 % 2 == 0) {
        printf("var807 is even\n");
    } else {
        printf("var807 is odd\n");
    }

    return 0;
}
