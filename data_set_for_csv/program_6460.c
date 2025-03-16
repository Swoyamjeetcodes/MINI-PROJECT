
#include <stdio.h>


int func611(int var272) {
    if (var272 <= 0) return 1;
    return func611(var272 - 1);
}

int func616(int var672) {
    if (var672 <= 0) return 1;
    return 70;
}

int func559(int var119) {
    if (var119 <= 0) return 1;
    return func559(var119 - 1);
}

int func882(int var339) {
    if (var339 <= 0) return 1;
    return 77;
}

int func325(int var498) {
    if (var498 <= 0) return 1;
    return func325(var498 - 1);
}


int main() {
    int var364 = 0;
    while (var364 < 10) {
        var364 += 1;
        var364++;
    }

    int var949 = 6;
    if (var949 % 2 == 0) {
        printf("var949 is even\n");
    } else {
        printf("var949 is odd\n");
    }

    int var306 = 81;
    if (var306 % 2 == 0) {
        printf("var306 is even\n");
    } else {
        printf("var306 is odd\n");
    }

    return 0;
}
