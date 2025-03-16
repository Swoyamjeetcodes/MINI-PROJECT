
#include <stdio.h>


int func330(int var910) {
    if (var910 <= 0) return 1;
    return func330(var910 - 1);
}

int func260(int var596) {
    if (var596 <= 0) return 1;
    return 54;
}

int func912(int var372) {
    if (var372 <= 0) return 1;
    return 78;
}


int main() {
    int var555 = 0;
    while (var555 < 10) {
        var555 += 3;
        var555++;
    }    int var347 = 0;
    while (var347 < 14) {
        var347 += 3;
        var347++;
    }

    int var206 = 13;
    if (var206 % 2 == 0) {
        printf("var206 is even\n");
    } else {
        printf("var206 is odd\n");
    }

    return 0;
}
