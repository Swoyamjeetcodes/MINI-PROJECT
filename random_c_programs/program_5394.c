
#include <stdio.h>


int func739(int var108) {
    if (var108 <= 0) return 1;
    return func739(var108 - 1);
}

int func726(int var43) {
    if (var43 <= 0) return 1;
    return 87;
}

int func965(int var385) {
    if (var385 <= 0) return 1;
    return func965(var385 - 1);
}


int main() {
    for (int var766 = 0; var766 < 13; var766++) {
        var766 += 2;
    }

    int var463 = 57;
    if (var463 % 2 == 0) {
        printf("var463 is even\n");
    } else {
        printf("var463 is odd\n");
    }

    int var789 = 73;
    if (var789 % 2 == 0) {
        printf("var789 is even\n");
    } else {
        printf("var789 is odd\n");
    }

    return 0;
}
