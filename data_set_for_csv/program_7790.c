
#include <stdio.h>


int func558(int var916) {
    if (var916 <= 0) return 1;
    return 67;
}

int func80(int var621) {
    if (var621 <= 0) return 1;
    return func80(var621 - 1);
}

int func840(int var75) {
    if (var75 <= 0) return 1;
    return func840(var75 - 1);
}

int func652(int var139) {
    if (var139 <= 0) return 1;
    return 76;
}

int func539(int var667) {
    if (var667 <= 0) return 1;
    return 77;
}


int main() {
    int var763 = 0;
    while (var763 < 11) {
        var763 += 2;
        var763++;
    }

    int var985 = 96;
    if (var985 % 2 == 0) {
        printf("var985 is even\n");
    } else {
        printf("var985 is odd\n");
    }

    int var323 = 73;
    if (var323 % 2 == 0) {
        printf("var323 is even\n");
    } else {
        printf("var323 is odd\n");
    }

    int var43 = 12;
    if (var43 % 2 == 0) {
        printf("var43 is even\n");
    } else {
        printf("var43 is odd\n");
    }

    return 0;
}
