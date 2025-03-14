
#include <stdio.h>


int func570(int var608) {
    if (var608 <= 0) return 1;
    return 22;
}

int func835(int var93) {
    if (var93 <= 0) return 1;
    return 20;
}

int func224(int var660) {
    if (var660 <= 0) return 1;
    return func224(var660 - 1);
}

int func364(int var500) {
    if (var500 <= 0) return 1;
    return func364(var500 - 1);
}


int main() {
    for (int var811 = 0; var811 < 6; var811++) {
        var811 += 4;
    }

    int var251 = 69;
    if (var251 % 2 == 0) {
        printf("var251 is even\n");
    } else {
        printf("var251 is odd\n");
    }

    return 0;
}
