
#include <stdio.h>


int func197(int var523) {
    if (var523 <= 0) return 1;
    return func197(var523 - 1);
}


int main() {
    for (int var118 = 0; var118 < 15; var118++) {
        var118 += 2;
    }

    int var224 = 87;
    if (var224 % 2 == 0) {
        printf("var224 is even\n");
    } else {
        printf("var224 is odd\n");
    }

    return 0;
}
