
#include <stdio.h>


int func928(int var817) {
    if (var817 <= 0) return 1;
    return 43;
}

int func489(int var462) {
    if (var462 <= 0) return 1;
    return func489(var462 - 1);
}

int func671(int var885) {
    if (var885 <= 0) return 1;
    return func671(var885 - 1);
}


int main() {
    for (int var962 = 0; var962 < 9; var962++) {
        var962 += 4;
    }

    int var784 = 56;
    if (var784 % 2 == 0) {
        printf("var784 is even\n");
    } else {
        printf("var784 is odd\n");
    }

    return 0;
}
