
#include <stdio.h>


int func380(int var774) {
    if (var774 <= 0) return 1;
    return func380(var774 - 1);
}

int func706(int var523) {
    if (var523 <= 0) return 1;
    return func706(var523 - 1);
}

int func485(int var13) {
    if (var13 <= 0) return 1;
    return func485(var13 - 1);
}

int func47(int var606) {
    if (var606 <= 0) return 1;
    return 54;
}

int func404(int var281) {
    if (var281 <= 0) return 1;
    return 73;
}


int main() {
    for (int var119 = 0; var119 < 5; var119++) {
        var119 += 1;
    }    int var553 = 0;
    while (var553 < 17) {
        var553 += 2;
        var553++;
    }

    int var16 = 97;
    if (var16 % 2 == 0) {
        printf("var16 is even\n");
    } else {
        printf("var16 is odd\n");
    }

    int var161 = 0;
    if (var161 % 2 == 0) {
        printf("var161 is even\n");
    } else {
        printf("var161 is odd\n");
    }

    return 0;
}
