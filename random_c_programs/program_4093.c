
#include <stdio.h>


int func948(int var153) {
    if (var153 <= 0) return 1;
    return func948(var153 - 1);
}

int func823(int var722) {
    if (var722 <= 0) return 1;
    return func823(var722 - 1);
}

int func574(int var908) {
    if (var908 <= 0) return 1;
    return 6;
}

int func977(int var971) {
    if (var971 <= 0) return 1;
    return func977(var971 - 1);
}


int main() {
    for (int var740 = 0; var740 < 18; var740++) {
        var740 += 5;
    }

    int var31 = 15;
    if (var31 % 2 == 0) {
        printf("var31 is even\n");
    } else {
        printf("var31 is odd\n");
    }

    int var553 = 20;
    if (var553 % 2 == 0) {
        printf("var553 is even\n");
    } else {
        printf("var553 is odd\n");
    }

    return 0;
}
