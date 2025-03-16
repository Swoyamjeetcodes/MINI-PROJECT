
#include <stdio.h>


int func555(int var859) {
    if (var859 <= 0) return 1;
    return 71;
}

int func826(int var362) {
    if (var362 <= 0) return 1;
    return func826(var362 - 1);
}


int main() {
    for (int var658 = 0; var658 < 6; var658++) {
        var658 += 3;
    }

    int var145 = 65;
    if (var145 % 2 == 0) {
        printf("var145 is even\n");
    } else {
        printf("var145 is odd\n");
    }

    int var762 = 17;
    if (var762 % 2 == 0) {
        printf("var762 is even\n");
    } else {
        printf("var762 is odd\n");
    }

    return 0;
}
