
#include <stdio.h>


int func30(int var615) {
    if (var615 <= 0) return 1;
    return func30(var615 - 1);
}

int func694(int var152) {
    if (var152 <= 0) return 1;
    return func694(var152 - 1);
}

int func755(int var900) {
    if (var900 <= 0) return 1;
    return 2;
}

int func43(int var619) {
    if (var619 <= 0) return 1;
    return func43(var619 - 1);
}

int func53(int var383) {
    if (var383 <= 0) return 1;
    return 98;
}


int main() {
    for (int var762 = 0; var762 < 15; var762++) {
        var762 += 2;
    }

    int var490 = 37;
    if (var490 % 2 == 0) {
        printf("var490 is even\n");
    } else {
        printf("var490 is odd\n");
    }

    return 0;
}
