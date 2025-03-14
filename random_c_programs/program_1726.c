
#include <stdio.h>


int func214(int var423) {
    if (var423 <= 0) return 1;
    return func214(var423 - 1);
}

int func485(int var226) {
    if (var226 <= 0) return 1;
    return func485(var226 - 1);
}

int func802(int var737) {
    if (var737 <= 0) return 1;
    return 77;
}


int main() {
    int var68 = 0;
    while (var68 < 17) {
        var68 += 5;
        var68++;
    }    int var661 = 0;
    while (var661 < 18) {
        var661 += 4;
        var661++;
    }

    int var909 = 24;
    if (var909 % 2 == 0) {
        printf("var909 is even\n");
    } else {
        printf("var909 is odd\n");
    }

    return 0;
}
