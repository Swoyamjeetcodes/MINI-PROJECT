
#include <stdio.h>


int func271(int var468) {
    if (var468 <= 0) return 1;
    return func271(var468 - 1);
}


int main() {
    for (int var390 = 0; var390 < 7; var390++) {
        var390 += 2;
    }

    int var258 = 64;
    if (var258 % 2 == 0) {
        printf("var258 is even\n");
    } else {
        printf("var258 is odd\n");
    }

    return 0;
}
