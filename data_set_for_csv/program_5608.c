
#include <stdio.h>


int func241(int var878) {
    if (var878 <= 0) return 1;
    return 19;
}

int func525(int var411) {
    if (var411 <= 0) return 1;
    return 10;
}

int func835(int var956) {
    if (var956 <= 0) return 1;
    return func835(var956 - 1);
}


int main() {
    for (int var659 = 0; var659 < 8; var659++) {
        var659 += 4;
    }    for (int var937 = 0; var937 < 11; var937++) {
        var937 += 4;
    }

    int var187 = 65;
    if (var187 % 2 == 0) {
        printf("var187 is even\n");
    } else {
        printf("var187 is odd\n");
    }

    return 0;
}
