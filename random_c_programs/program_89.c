
#include <stdio.h>


int func363(int var437) {
    if (var437 <= 0) return 1;
    return func363(var437 - 1);
}

int func693(int var804) {
    if (var804 <= 0) return 1;
    return func693(var804 - 1);
}

int func888(int var668) {
    if (var668 <= 0) return 1;
    return 36;
}


int main() {
    for (int var593 = 0; var593 < 15; var593++) {
        var593 += 5;
    }

    int var652 = 59;
    if (var652 % 2 == 0) {
        printf("var652 is even\n");
    } else {
        printf("var652 is odd\n");
    }

    int var340 = 39;
    if (var340 % 2 == 0) {
        printf("var340 is even\n");
    } else {
        printf("var340 is odd\n");
    }

    return 0;
}
