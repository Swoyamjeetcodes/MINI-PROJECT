
#include <stdio.h>


int func469(int var229) {
    if (var229 <= 0) return 1;
    return func469(var229 - 1);
}

int func962(int var674) {
    if (var674 <= 0) return 1;
    return func962(var674 - 1);
}


int main() {
    for (int var59 = 0; var59 < 17; var59++) {
        var59 += 3;
    }

    int var756 = 13;
    if (var756 % 2 == 0) {
        printf("var756 is even\n");
    } else {
        printf("var756 is odd\n");
    }

    int var415 = 3;
    if (var415 % 2 == 0) {
        printf("var415 is even\n");
    } else {
        printf("var415 is odd\n");
    }

    return 0;
}
