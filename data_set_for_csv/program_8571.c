
#include <stdio.h>


int func27(int var401) {
    if (var401 <= 0) return 1;
    return 22;
}

int func234(int var630) {
    if (var630 <= 0) return 1;
    return 98;
}

int func889(int var353) {
    if (var353 <= 0) return 1;
    return func889(var353 - 1);
}

int func796(int var237) {
    if (var237 <= 0) return 1;
    return func796(var237 - 1);
}


int main() {
    int var763 = 0;
    while (var763 < 11) {
        var763 += 1;
        var763++;
    }    int var654 = 0;
    while (var654 < 15) {
        var654 += 5;
        var654++;
    }

    int var245 = 32;
    if (var245 % 2 == 0) {
        printf("var245 is even\n");
    } else {
        printf("var245 is odd\n");
    }

    int var8 = 43;
    if (var8 % 2 == 0) {
        printf("var8 is even\n");
    } else {
        printf("var8 is odd\n");
    }

    return 0;
}
