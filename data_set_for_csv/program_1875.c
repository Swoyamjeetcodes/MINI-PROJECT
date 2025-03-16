
#include <stdio.h>


int func373(int var893) {
    if (var893 <= 0) return 1;
    return func373(var893 - 1);
}

int func57(int var412) {
    if (var412 <= 0) return 1;
    return 40;
}

int func16(int var773) {
    if (var773 <= 0) return 1;
    return func16(var773 - 1);
}

int func902(int var994) {
    if (var994 <= 0) return 1;
    return func902(var994 - 1);
}

int func784(int var442) {
    if (var442 <= 0) return 1;
    return func784(var442 - 1);
}


int main() {
    for (int var459 = 0; var459 < 20; var459++) {
        var459 += 1;
    }    for (int var332 = 0; var332 < 14; var332++) {
        var332 += 1;
    }    for (int var511 = 0; var511 < 19; var511++) {
        var511 += 2;
    }

    int var51 = 57;
    if (var51 % 2 == 0) {
        printf("var51 is even\n");
    } else {
        printf("var51 is odd\n");
    }

    return 0;
}
