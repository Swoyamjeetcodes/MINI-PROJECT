
#include <stdio.h>


int func535(int var387) {
    if (var387 <= 0) return 1;
    return func535(var387 - 1);
}


int main() {
    for (int var949 = 0; var949 < 8; var949++) {
        var949 += 1;
    }

    int var210 = 85;
    if (var210 % 2 == 0) {
        printf("var210 is even\n");
    } else {
        printf("var210 is odd\n");
    }

    return 0;
}
