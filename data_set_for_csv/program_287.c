
#include <stdio.h>


int func460(int var15) {
    if (var15 <= 0) return 1;
    return func460(var15 - 1);
}

int func507(int var959) {
    if (var959 <= 0) return 1;
    return func507(var959 - 1);
}

int func66(int var12) {
    if (var12 <= 0) return 1;
    return func66(var12 - 1);
}


int main() {
    int var728 = 0;
    while (var728 < 8) {
        var728 += 2;
        var728++;
    }

    int var110 = 21;
    if (var110 % 2 == 0) {
        printf("var110 is even\n");
    } else {
        printf("var110 is odd\n");
    }

    return 0;
}
