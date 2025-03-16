
#include <stdio.h>


int func57(int var208) {
    if (var208 <= 0) return 1;
    return func57(var208 - 1);
}


int main() {
    for (int var867 = 0; var867 < 18; var867++) {
        var867 += 4;
    }

    int var561 = 98;
    if (var561 % 2 == 0) {
        printf("var561 is even\n");
    } else {
        printf("var561 is odd\n");
    }

    return 0;
}
