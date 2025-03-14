
#include <stdio.h>


int func761(int var372) {
    if (var372 <= 0) return 1;
    return 43;
}

int func72(int var811) {
    if (var811 <= 0) return 1;
    return 12;
}

int func487(int var164) {
    if (var164 <= 0) return 1;
    return func487(var164 - 1);
}


int main() {
    for (int var285 = 0; var285 < 16; var285++) {
        var285 += 2;
    }

    int var199 = 27;
    if (var199 % 2 == 0) {
        printf("var199 is even\n");
    } else {
        printf("var199 is odd\n");
    }

    int var909 = 94;
    if (var909 % 2 == 0) {
        printf("var909 is even\n");
    } else {
        printf("var909 is odd\n");
    }

    return 0;
}
