
#include <stdio.h>


int func888(int var523) {
    if (var523 <= 0) return 1;
    return func888(var523 - 1);
}

int func508(int var675) {
    if (var675 <= 0) return 1;
    return func508(var675 - 1);
}

int func61(int var974) {
    if (var974 <= 0) return 1;
    return 30;
}


int main() {
    for (int var8 = 0; var8 < 17; var8++) {
        var8 += 5;
    }

    int var454 = 70;
    if (var454 % 2 == 0) {
        printf("var454 is even\n");
    } else {
        printf("var454 is odd\n");
    }

    int var613 = 96;
    if (var613 % 2 == 0) {
        printf("var613 is even\n");
    } else {
        printf("var613 is odd\n");
    }

    int var729 = 91;
    if (var729 % 2 == 0) {
        printf("var729 is even\n");
    } else {
        printf("var729 is odd\n");
    }

    return 0;
}
