
#include <stdio.h>


int func657(int var878) {
    if (var878 <= 0) return 1;
    return 37;
}

int func287(int var612) {
    if (var612 <= 0) return 1;
    return 12;
}

int func227(int var584) {
    if (var584 <= 0) return 1;
    return func227(var584 - 1);
}

int func426(int var41) {
    if (var41 <= 0) return 1;
    return 29;
}


int main() {
    for (int var969 = 0; var969 < 16; var969++) {
        var969 += 4;
    }

    int var239 = 73;
    if (var239 % 2 == 0) {
        printf("var239 is even\n");
    } else {
        printf("var239 is odd\n");
    }

    int var13 = 54;
    if (var13 % 2 == 0) {
        printf("var13 is even\n");
    } else {
        printf("var13 is odd\n");
    }

    return 0;
}
