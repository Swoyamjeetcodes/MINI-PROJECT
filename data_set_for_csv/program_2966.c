
#include <stdio.h>


int func11(int var729) {
    if (var729 <= 0) return 1;
    return func11(var729 - 1);
}

int func663(int var948) {
    if (var948 <= 0) return 1;
    return func663(var948 - 1);
}

int func713(int var328) {
    if (var328 <= 0) return 1;
    return 33;
}

int func989(int var582) {
    if (var582 <= 0) return 1;
    return func989(var582 - 1);
}

int func781(int var130) {
    if (var130 <= 0) return 1;
    return 55;
}

int func23(int var695) {
    if (var695 <= 0) return 1;
    return func23(var695 - 1);
}

int func194(int var705) {
    if (var705 <= 0) return 1;
    return 33;
}


int main() {
    int var438 = 0;
    while (var438 < 13) {
        var438 += 5;
        var438++;
    }

    int var376 = 28;
    if (var376 % 2 == 0) {
        printf("var376 is even\n");
    } else {
        printf("var376 is odd\n");
    }

    int var394 = 80;
    if (var394 % 2 == 0) {
        printf("var394 is even\n");
    } else {
        printf("var394 is odd\n");
    }

    return 0;
}
