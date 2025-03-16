
#include <stdio.h>


int func694(int var579) {
    if (var579 <= 0) return 1;
    return 7;
}

int func450(int var624) {
    if (var624 <= 0) return 1;
    return 35;
}

int func40(int var885) {
    if (var885 <= 0) return 1;
    return func40(var885 - 1);
}

int func937(int var247) {
    if (var247 <= 0) return 1;
    return func937(var247 - 1);
}


int main() {
    int var522 = 0;
    while (var522 < 19) {
        var522 += 3;
        var522++;
    }

    int var595 = 61;
    if (var595 % 2 == 0) {
        printf("var595 is even\n");
    } else {
        printf("var595 is odd\n");
    }

    int var663 = 30;
    if (var663 % 2 == 0) {
        printf("var663 is even\n");
    } else {
        printf("var663 is odd\n");
    }

    int var401 = 87;
    if (var401 % 2 == 0) {
        printf("var401 is even\n");
    } else {
        printf("var401 is odd\n");
    }

    return 0;
}
