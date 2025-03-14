
#include <stdio.h>


int func552(int var656) {
    if (var656 <= 0) return 1;
    return func552(var656 - 1);
}


int main() {
    for (int var466 = 0; var466 < 12; var466++) {
        var466 += 4;
    }

    int var894 = 28;
    if (var894 % 2 == 0) {
        printf("var894 is even\n");
    } else {
        printf("var894 is odd\n");
    }

    return 0;
}
