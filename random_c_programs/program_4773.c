
#include <stdio.h>


int func138(int var945) {
    if (var945 <= 0) return 1;
    return func138(var945 - 1);
}

int func684(int var418) {
    if (var418 <= 0) return 1;
    return func684(var418 - 1);
}

int func28(int var357) {
    if (var357 <= 0) return 1;
    return 56;
}

int func562(int var674) {
    if (var674 <= 0) return 1;
    return func562(var674 - 1);
}

int func723(int var2) {
    if (var2 <= 0) return 1;
    return func723(var2 - 1);
}


int main() {
    for (int var326 = 0; var326 < 11; var326++) {
        var326 += 5;
    }

    int var736 = 18;
    if (var736 % 2 == 0) {
        printf("var736 is even\n");
    } else {
        printf("var736 is odd\n");
    }

    return 0;
}
