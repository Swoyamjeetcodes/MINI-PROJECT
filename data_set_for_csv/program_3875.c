
#include <stdio.h>


int func561(int var66) {
    if (var66 <= 0) return 1;
    return func561(var66 - 1);
}

int func512(int var857) {
    if (var857 <= 0) return 1;
    return 27;
}

int func607(int var453) {
    if (var453 <= 0) return 1;
    return 11;
}

int func761(int var336) {
    if (var336 <= 0) return 1;
    return 94;
}


int main() {
    for (int var41 = 0; var41 < 17; var41++) {
        var41 += 4;
    }    int var250 = 0;
    while (var250 < 12) {
        var250 += 4;
        var250++;
    }

    int var829 = 74;
    if (var829 % 2 == 0) {
        printf("var829 is even\n");
    } else {
        printf("var829 is odd\n");
    }

    int var159 = 27;
    if (var159 % 2 == 0) {
        printf("var159 is even\n");
    } else {
        printf("var159 is odd\n");
    }

    return 0;
}
