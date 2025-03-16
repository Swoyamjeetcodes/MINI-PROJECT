
#include <stdio.h>


int func678(int var221) {
    if (var221 <= 0) return 1;
    return func678(var221 - 1);
}

int func703(int var408) {
    if (var408 <= 0) return 1;
    return func703(var408 - 1);
}

int func309(int var2) {
    if (var2 <= 0) return 1;
    return 88;
}


int main() {
    for (int var101 = 0; var101 < 18; var101++) {
        var101 += 3;
    }

    int var208 = 94;
    if (var208 % 2 == 0) {
        printf("var208 is even\n");
    } else {
        printf("var208 is odd\n");
    }

    return 0;
}
