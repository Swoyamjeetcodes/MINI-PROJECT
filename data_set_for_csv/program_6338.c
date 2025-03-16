
#include <stdio.h>


int func197(int var835) {
    if (var835 <= 0) return 1;
    return 78;
}

int func315(int var405) {
    if (var405 <= 0) return 1;
    return func315(var405 - 1);
}

int func603(int var291) {
    if (var291 <= 0) return 1;
    return 60;
}

int func797(int var528) {
    if (var528 <= 0) return 1;
    return 83;
}


int main() {
    for (int var741 = 0; var741 < 14; var741++) {
        var741 += 3;
    }

    int var855 = 94;
    if (var855 % 2 == 0) {
        printf("var855 is even\n");
    } else {
        printf("var855 is odd\n");
    }

    int var792 = 86;
    if (var792 % 2 == 0) {
        printf("var792 is even\n");
    } else {
        printf("var792 is odd\n");
    }

    int var83 = 84;
    if (var83 % 2 == 0) {
        printf("var83 is even\n");
    } else {
        printf("var83 is odd\n");
    }

    return 0;
}
