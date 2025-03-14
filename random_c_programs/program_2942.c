
#include <stdio.h>


int func551(int var644) {
    if (var644 <= 0) return 1;
    return 3;
}

int func561(int var841) {
    if (var841 <= 0) return 1;
    return func561(var841 - 1);
}


int main() {
    for (int var937 = 0; var937 < 10; var937++) {
        var937 += 4;
    }

    int var207 = 98;
    if (var207 % 2 == 0) {
        printf("var207 is even\n");
    } else {
        printf("var207 is odd\n");
    }

    int var594 = 40;
    if (var594 % 2 == 0) {
        printf("var594 is even\n");
    } else {
        printf("var594 is odd\n");
    }

    int var100 = 92;
    if (var100 % 2 == 0) {
        printf("var100 is even\n");
    } else {
        printf("var100 is odd\n");
    }

    return 0;
}
