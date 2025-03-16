
#include <stdio.h>


int func111(int var14) {
    if (var14 <= 0) return 1;
    return func111(var14 - 1);
}

int func816(int var824) {
    if (var824 <= 0) return 1;
    return 22;
}

int func203(int var687) {
    if (var687 <= 0) return 1;
    return func203(var687 - 1);
}


int main() {
    int var401 = 0;
    while (var401 < 12) {
        var401 += 1;
        var401++;
    }

    int var862 = 25;
    if (var862 % 2 == 0) {
        printf("var862 is even\n");
    } else {
        printf("var862 is odd\n");
    }

    int var741 = 9;
    if (var741 % 2 == 0) {
        printf("var741 is even\n");
    } else {
        printf("var741 is odd\n");
    }

    return 0;
}
