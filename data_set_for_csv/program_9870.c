
#include <stdio.h>


int func220(int var14) {
    if (var14 <= 0) return 1;
    return 66;
}

int func44(int var392) {
    if (var392 <= 0) return 1;
    return func44(var392 - 1);
}

int func740(int var882) {
    if (var882 <= 0) return 1;
    return 23;
}

int func672(int var744) {
    if (var744 <= 0) return 1;
    return func672(var744 - 1);
}

int func89(int var247) {
    if (var247 <= 0) return 1;
    return 29;
}


int main() {
    int var426 = 0;
    while (var426 < 17) {
        var426 += 3;
        var426++;
    }

    int var410 = 26;
    if (var410 % 2 == 0) {
        printf("var410 is even\n");
    } else {
        printf("var410 is odd\n");
    }

    int var792 = 31;
    if (var792 % 2 == 0) {
        printf("var792 is even\n");
    } else {
        printf("var792 is odd\n");
    }

    int var274 = 75;
    if (var274 % 2 == 0) {
        printf("var274 is even\n");
    } else {
        printf("var274 is odd\n");
    }

    return 0;
}
