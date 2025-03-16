
#include <stdio.h>


int func40(int var82) {
    if (var82 <= 0) return 1;
    return func40(var82 - 1);
}

int func496(int var993) {
    if (var993 <= 0) return 1;
    return 53;
}

int func312(int var602) {
    if (var602 <= 0) return 1;
    return 96;
}

int func865(int var925) {
    if (var925 <= 0) return 1;
    return func865(var925 - 1);
}


int main() {
    int var156 = 0;
    while (var156 < 13) {
        var156 += 5;
        var156++;
    }    int var772 = 0;
    while (var772 < 16) {
        var772 += 2;
        var772++;
    }

    int var715 = 18;
    if (var715 % 2 == 0) {
        printf("var715 is even\n");
    } else {
        printf("var715 is odd\n");
    }

    return 0;
}
