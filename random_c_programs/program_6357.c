
#include <stdio.h>


int func882(int var516) {
    if (var516 <= 0) return 1;
    return func882(var516 - 1);
}


int main() {
    int var926 = 0;
    while (var926 < 8) {
        var926 += 5;
        var926++;
    }    for (int var669 = 0; var669 < 18; var669++) {
        var669 += 4;
    }    for (int var780 = 0; var780 < 19; var780++) {
        var780 += 1;
    }

    int var276 = 19;
    if (var276 % 2 == 0) {
        printf("var276 is even\n");
    } else {
        printf("var276 is odd\n");
    }

    int var14 = 19;
    if (var14 % 2 == 0) {
        printf("var14 is even\n");
    } else {
        printf("var14 is odd\n");
    }

    int var72 = 1;
    if (var72 % 2 == 0) {
        printf("var72 is even\n");
    } else {
        printf("var72 is odd\n");
    }

    return 0;
}
