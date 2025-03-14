
#include <stdio.h>


int func681(int var774) {
    if (var774 <= 0) return 1;
    return func681(var774 - 1);
}

int func145(int var308) {
    if (var308 <= 0) return 1;
    return func145(var308 - 1);
}

int func169(int var185) {
    if (var185 <= 0) return 1;
    return func169(var185 - 1);
}


int main() {
    int var35 = 0;
    while (var35 < 19) {
        var35 += 3;
        var35++;
    }    int var171 = 0;
    while (var171 < 10) {
        var171 += 4;
        var171++;
    }

    int var358 = 3;
    if (var358 % 2 == 0) {
        printf("var358 is even\n");
    } else {
        printf("var358 is odd\n");
    }

    return 0;
}
