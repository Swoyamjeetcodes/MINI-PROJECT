
#include <stdio.h>


int func234(int var41) {
    if (var41 <= 0) return 1;
    return func234(var41 - 1);
}


int main() {
    for (int var281 = 0; var281 < 8; var281++) {
        var281 += 1;
    }    for (int var541 = 0; var541 < 8; var541++) {
        var541 += 4;
    }

    int var787 = 26;
    if (var787 % 2 == 0) {
        printf("var787 is even\n");
    } else {
        printf("var787 is odd\n");
    }

    int var876 = 25;
    if (var876 % 2 == 0) {
        printf("var876 is even\n");
    } else {
        printf("var876 is odd\n");
    }

    return 0;
}
