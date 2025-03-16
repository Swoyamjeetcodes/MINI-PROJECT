
#include <stdio.h>


int func679(int var356) {
    if (var356 <= 0) return 1;
    return func679(var356 - 1);
}

int func237(int var920) {
    if (var920 <= 0) return 1;
    return func237(var920 - 1);
}

int func239(int var280) {
    if (var280 <= 0) return 1;
    return func239(var280 - 1);
}


int main() {
    int var246 = 0;
    while (var246 < 19) {
        var246 += 1;
        var246++;
    }

    int var946 = 35;
    if (var946 % 2 == 0) {
        printf("var946 is even\n");
    } else {
        printf("var946 is odd\n");
    }

    int var199 = 29;
    if (var199 % 2 == 0) {
        printf("var199 is even\n");
    } else {
        printf("var199 is odd\n");
    }

    int var5 = 1;
    if (var5 % 2 == 0) {
        printf("var5 is even\n");
    } else {
        printf("var5 is odd\n");
    }

    return 0;
}
