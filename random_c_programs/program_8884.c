
#include <stdio.h>


int func180(int var834) {
    if (var834 <= 0) return 1;
    return 30;
}

int func707(int var205) {
    if (var205 <= 0) return 1;
    return 31;
}

int func613(int var434) {
    if (var434 <= 0) return 1;
    return func613(var434 - 1);
}

int func564(int var219) {
    if (var219 <= 0) return 1;
    return 18;
}


int main() {
    int var4 = 0;
    while (var4 < 10) {
        var4 += 2;
        var4++;
    }

    int var465 = 76;
    if (var465 % 2 == 0) {
        printf("var465 is even\n");
    } else {
        printf("var465 is odd\n");
    }

    int var389 = 100;
    if (var389 % 2 == 0) {
        printf("var389 is even\n");
    } else {
        printf("var389 is odd\n");
    }

    return 0;
}
