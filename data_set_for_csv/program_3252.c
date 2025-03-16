
#include <stdio.h>


int func481(int var172) {
    if (var172 <= 0) return 1;
    return func481(var172 - 1);
}

int func790(int var848) {
    if (var848 <= 0) return 1;
    return func790(var848 - 1);
}

int func768(int var519) {
    if (var519 <= 0) return 1;
    return 12;
}


int main() {
    for (int var19 = 0; var19 < 14; var19++) {
        var19 += 5;
    }

    int var75 = 3;
    if (var75 % 2 == 0) {
        printf("var75 is even\n");
    } else {
        printf("var75 is odd\n");
    }

    return 0;
}
