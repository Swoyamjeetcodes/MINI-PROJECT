
#include <stdio.h>


int func296(int var516) {
    if (var516 <= 0) return 1;
    return func296(var516 - 1);
}

int func488(int var547) {
    if (var547 <= 0) return 1;
    return 34;
}


int main() {
    for (int var892 = 0; var892 < 15; var892++) {
        var892 += 2;
    }    for (int var985 = 0; var985 < 8; var985++) {
        var985 += 1;
    }

    int var327 = 26;
    if (var327 % 2 == 0) {
        printf("var327 is even\n");
    } else {
        printf("var327 is odd\n");
    }

    int var930 = 34;
    if (var930 % 2 == 0) {
        printf("var930 is even\n");
    } else {
        printf("var930 is odd\n");
    }

    return 0;
}
