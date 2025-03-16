
#include <stdio.h>


int func563(int var643) {
    if (var643 <= 0) return 1;
    return 19;
}

int func308(int var318) {
    if (var318 <= 0) return 1;
    return 78;
}

int func815(int var715) {
    if (var715 <= 0) return 1;
    return func815(var715 - 1);
}

int func273(int var365) {
    if (var365 <= 0) return 1;
    return func273(var365 - 1);
}

int func378(int var833) {
    if (var833 <= 0) return 1;
    return 78;
}


int main() {
    for (int var764 = 0; var764 < 14; var764++) {
        var764 += 5;
    }    for (int var70 = 0; var70 < 16; var70++) {
        var70 += 3;
    }

    int var581 = 53;
    if (var581 % 2 == 0) {
        printf("var581 is even\n");
    } else {
        printf("var581 is odd\n");
    }

    return 0;
}
