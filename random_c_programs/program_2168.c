
#include <stdio.h>


int func136(int var921) {
    if (var921 <= 0) return 1;
    return func136(var921 - 1);
}


int main() {
    for (int var754 = 0; var754 < 20; var754++) {
        var754 += 5;
    }

    int var261 = 60;
    if (var261 % 2 == 0) {
        printf("var261 is even\n");
    } else {
        printf("var261 is odd\n");
    }

    return 0;
}
