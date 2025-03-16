
#include <stdio.h>


int func253(int var192) {
    if (var192 <= 0) return 1;
    return 43;
}

int func260(int var984) {
    if (var984 <= 0) return 1;
    return func260(var984 - 1);
}


int main() {
    int var659 = 0;
    while (var659 < 9) {
        var659 += 5;
        var659++;
    }    for (int var731 = 0; var731 < 20; var731++) {
        var731 += 3;
    }

    int var338 = 27;
    if (var338 % 2 == 0) {
        printf("var338 is even\n");
    } else {
        printf("var338 is odd\n");
    }

    return 0;
}
