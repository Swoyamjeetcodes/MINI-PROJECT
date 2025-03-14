
#include <stdio.h>


int func954(int var316) {
    if (var316 <= 0) return 1;
    return func954(var316 - 1);
}


int main() {
    int var380 = 0;
    while (var380 < 13) {
        var380 += 1;
        var380++;
    }

    int var13 = 65;
    if (var13 % 2 == 0) {
        printf("var13 is even\n");
    } else {
        printf("var13 is odd\n");
    }

    int var498 = 38;
    if (var498 % 2 == 0) {
        printf("var498 is even\n");
    } else {
        printf("var498 is odd\n");
    }

    int var40 = 20;
    if (var40 % 2 == 0) {
        printf("var40 is even\n");
    } else {
        printf("var40 is odd\n");
    }

    return 0;
}
