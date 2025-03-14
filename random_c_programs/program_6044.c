
#include <stdio.h>


int func85(int var250) {
    if (var250 <= 0) return 1;
    return func85(var250 - 1);
}

int func837(int var507) {
    if (var507 <= 0) return 1;
    return func837(var507 - 1);
}

int func131(int var318) {
    if (var318 <= 0) return 1;
    return 25;
}


int main() {
    for (int var874 = 0; var874 < 5; var874++) {
        var874 += 3;
    }

    int var486 = 8;
    if (var486 % 2 == 0) {
        printf("var486 is even\n");
    } else {
        printf("var486 is odd\n");
    }

    int var844 = 46;
    if (var844 % 2 == 0) {
        printf("var844 is even\n");
    } else {
        printf("var844 is odd\n");
    }

    return 0;
}
