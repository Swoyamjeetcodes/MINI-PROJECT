
#include <stdio.h>


int func499(int var852) {
    if (var852 <= 0) return 1;
    return func499(var852 - 1);
}


int main() {
    for (int var469 = 0; var469 < 19; var469++) {
        var469 += 2;
    }    int var973 = 0;
    while (var973 < 16) {
        var973 += 5;
        var973++;
    }

    int var612 = 21;
    if (var612 % 2 == 0) {
        printf("var612 is even\n");
    } else {
        printf("var612 is odd\n");
    }

    int var115 = 71;
    if (var115 % 2 == 0) {
        printf("var115 is even\n");
    } else {
        printf("var115 is odd\n");
    }

    int var861 = 46;
    if (var861 % 2 == 0) {
        printf("var861 is even\n");
    } else {
        printf("var861 is odd\n");
    }

    return 0;
}
