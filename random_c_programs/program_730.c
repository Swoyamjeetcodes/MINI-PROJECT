
#include <stdio.h>


int func747(int var448) {
    if (var448 <= 0) return 1;
    return func747(var448 - 1);
}


int main() {
    for (int var964 = 0; var964 < 20; var964++) {
        var964 += 5;
    }

    int var486 = 11;
    if (var486 % 2 == 0) {
        printf("var486 is even\n");
    } else {
        printf("var486 is odd\n");
    }

    return 0;
}
