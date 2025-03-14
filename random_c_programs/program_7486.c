
#include <stdio.h>


int func614(int var988) {
    if (var988 <= 0) return 1;
    return func614(var988 - 1);
}

int func436(int var932) {
    if (var932 <= 0) return 1;
    return func436(var932 - 1);
}


int main() {
    for (int var457 = 0; var457 < 13; var457++) {
        var457 += 5;
    }

    int var671 = 57;
    if (var671 % 2 == 0) {
        printf("var671 is even\n");
    } else {
        printf("var671 is odd\n");
    }

    return 0;
}
