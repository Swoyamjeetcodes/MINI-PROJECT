
#include <stdio.h>


int func612(int var669) {
    if (var669 <= 0) return 1;
    return func612(var669 - 1);
}


int main() {
    for (int var246 = 0; var246 < 15; var246++) {
        var246 += 4;
    }

    int var853 = 31;
    if (var853 % 2 == 0) {
        printf("var853 is even\n");
    } else {
        printf("var853 is odd\n");
    }

    int var793 = 2;
    if (var793 % 2 == 0) {
        printf("var793 is even\n");
    } else {
        printf("var793 is odd\n");
    }

    return 0;
}
