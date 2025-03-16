
#include <stdio.h>


int func167(int var173) {
    if (var173 <= 0) return 1;
    return 11;
}

int func391(int var382) {
    if (var382 <= 0) return 1;
    return func391(var382 - 1);
}

int func852(int var555) {
    if (var555 <= 0) return 1;
    return func852(var555 - 1);
}


int main() {
    int var233 = 0;
    while (var233 < 8) {
        var233 += 4;
        var233++;
    }    for (int var132 = 0; var132 < 10; var132++) {
        var132 += 2;
    }    int var28 = 0;
    while (var28 < 18) {
        var28 += 4;
        var28++;
    }

    int var197 = 53;
    if (var197 % 2 == 0) {
        printf("var197 is even\n");
    } else {
        printf("var197 is odd\n");
    }

    return 0;
}
