
#include <stdio.h>


int func982(int var445) {
    if (var445 <= 0) return 1;
    return func982(var445 - 1);
}

int func591(int var712) {
    if (var712 <= 0) return 1;
    return 92;
}

int func896(int var226) {
    if (var226 <= 0) return 1;
    return func896(var226 - 1);
}

int func285(int var92) {
    if (var92 <= 0) return 1;
    return func285(var92 - 1);
}

int func687(int var379) {
    if (var379 <= 0) return 1;
    return func687(var379 - 1);
}


int main() {
    for (int var224 = 0; var224 < 12; var224++) {
        var224 += 5;
    }

    int var678 = 17;
    if (var678 % 2 == 0) {
        printf("var678 is even\n");
    } else {
        printf("var678 is odd\n");
    }

    int var116 = 98;
    if (var116 % 2 == 0) {
        printf("var116 is even\n");
    } else {
        printf("var116 is odd\n");
    }

    return 0;
}
