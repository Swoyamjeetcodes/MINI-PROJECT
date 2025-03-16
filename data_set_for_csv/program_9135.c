
#include <stdio.h>


int func887(int var589) {
    if (var589 <= 0) return 1;
    return 53;
}

int func687(int var378) {
    if (var378 <= 0) return 1;
    return func687(var378 - 1);
}


int main() {
    int var118 = 0;
    while (var118 < 13) {
        var118 += 4;
        var118++;
    }    int var871 = 0;
    while (var871 < 19) {
        var871 += 2;
        var871++;
    }    int var758 = 0;
    while (var758 < 17) {
        var758 += 5;
        var758++;
    }

    int var200 = 48;
    if (var200 % 2 == 0) {
        printf("var200 is even\n");
    } else {
        printf("var200 is odd\n");
    }

    return 0;
}
