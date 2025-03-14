
#include <stdio.h>


int func761(int var833) {
    if (var833 <= 0) return 1;
    return func761(var833 - 1);
}

int func968(int var556) {
    if (var556 <= 0) return 1;
    return func968(var556 - 1);
}

int func890(int var912) {
    if (var912 <= 0) return 1;
    return func890(var912 - 1);
}

int func313(int var107) {
    if (var107 <= 0) return 1;
    return func313(var107 - 1);
}

int func547(int var4) {
    if (var4 <= 0) return 1;
    return 30;
}


int main() {
    int var835 = 0;
    while (var835 < 8) {
        var835 += 4;
        var835++;
    }

    int var426 = 80;
    if (var426 % 2 == 0) {
        printf("var426 is even\n");
    } else {
        printf("var426 is odd\n");
    }

    return 0;
}
