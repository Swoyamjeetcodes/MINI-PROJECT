
#include <stdio.h>


int func874(int var846) {
    if (var846 <= 0) return 1;
    return 38;
}

int func786(int var906) {
    if (var906 <= 0) return 1;
    return func786(var906 - 1);
}

int func483(int var214) {
    if (var214 <= 0) return 1;
    return func483(var214 - 1);
}

int func465(int var293) {
    if (var293 <= 0) return 1;
    return 95;
}


int main() {
    for (int var183 = 0; var183 < 6; var183++) {
        var183 += 2;
    }

    int var474 = 72;
    if (var474 % 2 == 0) {
        printf("var474 is even\n");
    } else {
        printf("var474 is odd\n");
    }

    return 0;
}
