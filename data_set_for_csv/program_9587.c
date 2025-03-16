
#include <stdio.h>


int func620(int var596) {
    if (var596 <= 0) return 1;
    return func620(var596 - 1);
}

int func520(int var474) {
    if (var474 <= 0) return 1;
    return 46;
}


int main() {
    for (int var994 = 0; var994 < 9; var994++) {
        var994 += 5;
    }    for (int var965 = 0; var965 < 10; var965++) {
        var965 += 1;
    }

    int var201 = 11;
    if (var201 % 2 == 0) {
        printf("var201 is even\n");
    } else {
        printf("var201 is odd\n");
    }

    int var379 = 58;
    if (var379 % 2 == 0) {
        printf("var379 is even\n");
    } else {
        printf("var379 is odd\n");
    }

    return 0;
}
