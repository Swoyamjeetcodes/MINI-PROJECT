
#include <stdio.h>


int func154(int var538) {
    if (var538 <= 0) return 1;
    return 52;
}

int func71(int var251) {
    if (var251 <= 0) return 1;
    return func71(var251 - 1);
}

int func984(int var120) {
    if (var120 <= 0) return 1;
    return func984(var120 - 1);
}


int main() {
    int var768 = 0;
    while (var768 < 9) {
        var768 += 2;
        var768++;
    }    for (int var420 = 0; var420 < 12; var420++) {
        var420 += 3;
    }

    int var419 = 26;
    if (var419 % 2 == 0) {
        printf("var419 is even\n");
    } else {
        printf("var419 is odd\n");
    }

    int var184 = 31;
    if (var184 % 2 == 0) {
        printf("var184 is even\n");
    } else {
        printf("var184 is odd\n");
    }

    return 0;
}
