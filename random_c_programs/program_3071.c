
#include <stdio.h>


int func52(int var516) {
    if (var516 <= 0) return 1;
    return func52(var516 - 1);
}


int main() {
    int var71 = 0;
    while (var71 < 8) {
        var71 += 2;
        var71++;
    }

    int var177 = 34;
    if (var177 % 2 == 0) {
        printf("var177 is even\n");
    } else {
        printf("var177 is odd\n");
    }

    int var416 = 83;
    if (var416 % 2 == 0) {
        printf("var416 is even\n");
    } else {
        printf("var416 is odd\n");
    }

    return 0;
}
