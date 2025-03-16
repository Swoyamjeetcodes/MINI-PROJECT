
#include <stdio.h>


int func20(int var681) {
    if (var681 <= 0) return 1;
    return 67;
}

int func202(int var857) {
    if (var857 <= 0) return 1;
    return 74;
}

int func266(int var338) {
    if (var338 <= 0) return 1;
    return func266(var338 - 1);
}

int func787(int var839) {
    if (var839 <= 0) return 1;
    return func787(var839 - 1);
}


int main() {
    for (int var697 = 0; var697 < 5; var697++) {
        var697 += 2;
    }    int var150 = 0;
    while (var150 < 19) {
        var150 += 2;
        var150++;
    }    for (int var231 = 0; var231 < 16; var231++) {
        var231 += 2;
    }

    int var494 = 41;
    if (var494 % 2 == 0) {
        printf("var494 is even\n");
    } else {
        printf("var494 is odd\n");
    }

    return 0;
}
