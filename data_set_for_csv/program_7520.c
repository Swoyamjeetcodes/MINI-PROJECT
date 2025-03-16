
#include <stdio.h>


int func546(int var318) {
    if (var318 <= 0) return 1;
    return func546(var318 - 1);
}

int func229(int var55) {
    if (var55 <= 0) return 1;
    return 93;
}

int func452(int var426) {
    if (var426 <= 0) return 1;
    return 93;
}

int func174(int var520) {
    if (var520 <= 0) return 1;
    return 44;
}

int func678(int var646) {
    if (var646 <= 0) return 1;
    return func678(var646 - 1);
}


int main() {
    for (int var452 = 0; var452 < 19; var452++) {
        var452 += 3;
    }    int var136 = 0;
    while (var136 < 19) {
        var136 += 3;
        var136++;
    }

    int var965 = 55;
    if (var965 % 2 == 0) {
        printf("var965 is even\n");
    } else {
        printf("var965 is odd\n");
    }

    int var570 = 86;
    if (var570 % 2 == 0) {
        printf("var570 is even\n");
    } else {
        printf("var570 is odd\n");
    }

    return 0;
}
