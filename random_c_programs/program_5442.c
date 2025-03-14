
#include <stdio.h>


int func829(int var410) {
    if (var410 <= 0) return 1;
    return func829(var410 - 1);
}

int func98(int var888) {
    if (var888 <= 0) return 1;
    return func98(var888 - 1);
}


int main() {
    int var578 = 0;
    while (var578 < 13) {
        var578 += 5;
        var578++;
    }

    int var991 = 86;
    if (var991 % 2 == 0) {
        printf("var991 is even\n");
    } else {
        printf("var991 is odd\n");
    }

    return 0;
}
