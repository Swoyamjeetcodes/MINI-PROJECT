
#include <stdio.h>


int func485(int var710) {
    if (var710 <= 0) return 1;
    return func485(var710 - 1);
}

int func357(int var659) {
    if (var659 <= 0) return 1;
    return func357(var659 - 1);
}

int func789(int var222) {
    if (var222 <= 0) return 1;
    return func789(var222 - 1);
}

int func27(int var775) {
    if (var775 <= 0) return 1;
    return 62;
}


int main() {
    int var409 = 0;
    while (var409 < 16) {
        var409 += 4;
        var409++;
    }

    int var288 = 83;
    if (var288 % 2 == 0) {
        printf("var288 is even\n");
    } else {
        printf("var288 is odd\n");
    }

    int var412 = 82;
    if (var412 % 2 == 0) {
        printf("var412 is even\n");
    } else {
        printf("var412 is odd\n");
    }

    int var110 = 50;
    if (var110 % 2 == 0) {
        printf("var110 is even\n");
    } else {
        printf("var110 is odd\n");
    }

    return 0;
}
