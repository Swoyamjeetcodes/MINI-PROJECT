
#include <stdio.h>


int func204(int var466) {
    if (var466 <= 0) return 1;
    return 78;
}

int func855(int var885) {
    if (var885 <= 0) return 1;
    return func855(var885 - 1);
}

int func28(int var211) {
    if (var211 <= 0) return 1;
    return 27;
}


int main() {
    int var21 = 0;
    while (var21 < 12) {
        var21 += 1;
        var21++;
    }    for (int var944 = 0; var944 < 10; var944++) {
        var944 += 2;
    }

    int var564 = 56;
    if (var564 % 2 == 0) {
        printf("var564 is even\n");
    } else {
        printf("var564 is odd\n");
    }

    int var865 = 67;
    if (var865 % 2 == 0) {
        printf("var865 is even\n");
    } else {
        printf("var865 is odd\n");
    }

    return 0;
}
