
#include <stdio.h>


int func349(int var573) {
    if (var573 <= 0) return 1;
    return 23;
}

int func446(int var384) {
    if (var384 <= 0) return 1;
    return func446(var384 - 1);
}


int main() {
    int var866 = 0;
    while (var866 < 19) {
        var866 += 3;
        var866++;
    }    for (int var949 = 0; var949 < 10; var949++) {
        var949 += 4;
    }    int var926 = 0;
    while (var926 < 8) {
        var926 += 5;
        var926++;
    }

    int var471 = 57;
    if (var471 % 2 == 0) {
        printf("var471 is even\n");
    } else {
        printf("var471 is odd\n");
    }

    int var780 = 20;
    if (var780 % 2 == 0) {
        printf("var780 is even\n");
    } else {
        printf("var780 is odd\n");
    }

    int var60 = 64;
    if (var60 % 2 == 0) {
        printf("var60 is even\n");
    } else {
        printf("var60 is odd\n");
    }

    return 0;
}
