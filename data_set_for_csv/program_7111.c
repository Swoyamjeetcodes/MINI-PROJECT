
#include <stdio.h>


int func141(int var934) {
    if (var934 <= 0) return 1;
    return func141(var934 - 1);
}

int func749(int var152) {
    if (var152 <= 0) return 1;
    return 46;
}

int func989(int var24) {
    if (var24 <= 0) return 1;
    return func989(var24 - 1);
}

int func431(int var754) {
    if (var754 <= 0) return 1;
    return 66;
}


int main() {
    int var129 = 0;
    while (var129 < 17) {
        var129 += 2;
        var129++;
    }

    int var620 = 59;
    if (var620 % 2 == 0) {
        printf("var620 is even\n");
    } else {
        printf("var620 is odd\n");
    }

    return 0;
}
