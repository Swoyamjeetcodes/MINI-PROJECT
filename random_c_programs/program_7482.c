
#include <stdio.h>


int func530(int var891) {
    if (var891 <= 0) return 1;
    return 16;
}

int func700(int var732) {
    if (var732 <= 0) return 1;
    return func700(var732 - 1);
}

int func365(int var109) {
    if (var109 <= 0) return 1;
    return func365(var109 - 1);
}


int main() {
    int var965 = 0;
    while (var965 < 7) {
        var965 += 1;
        var965++;
    }    int var13 = 0;
    while (var13 < 19) {
        var13 += 1;
        var13++;
    }

    int var238 = 54;
    if (var238 % 2 == 0) {
        printf("var238 is even\n");
    } else {
        printf("var238 is odd\n");
    }

    int var628 = 28;
    if (var628 % 2 == 0) {
        printf("var628 is even\n");
    } else {
        printf("var628 is odd\n");
    }

    int var497 = 79;
    if (var497 % 2 == 0) {
        printf("var497 is even\n");
    } else {
        printf("var497 is odd\n");
    }

    return 0;
}
