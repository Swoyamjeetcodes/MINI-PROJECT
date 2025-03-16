
#include <stdio.h>


int func104(int var188) {
    if (var188 <= 0) return 1;
    return 68;
}

int func129(int var132) {
    if (var132 <= 0) return 1;
    return 54;
}

int func577(int var512) {
    if (var512 <= 0) return 1;
    return func577(var512 - 1);
}


int main() {
    int var458 = 0;
    while (var458 < 20) {
        var458 += 3;
        var458++;
    }

    int var57 = 82;
    if (var57 % 2 == 0) {
        printf("var57 is even\n");
    } else {
        printf("var57 is odd\n");
    }

    int var628 = 78;
    if (var628 % 2 == 0) {
        printf("var628 is even\n");
    } else {
        printf("var628 is odd\n");
    }

    int var582 = 27;
    if (var582 % 2 == 0) {
        printf("var582 is even\n");
    } else {
        printf("var582 is odd\n");
    }

    return 0;
}
