
#include <stdio.h>


int func757(int var376) {
    if (var376 <= 0) return 1;
    return func757(var376 - 1);
}

int func224(int var962) {
    if (var962 <= 0) return 1;
    return 46;
}

int func427(int var670) {
    if (var670 <= 0) return 1;
    return 44;
}


int main() {
    for (int var813 = 0; var813 < 20; var813++) {
        var813 += 3;
    }    for (int var756 = 0; var756 < 14; var756++) {
        var756 += 4;
    }

    int var673 = 46;
    if (var673 % 2 == 0) {
        printf("var673 is even\n");
    } else {
        printf("var673 is odd\n");
    }

    int var596 = 34;
    if (var596 % 2 == 0) {
        printf("var596 is even\n");
    } else {
        printf("var596 is odd\n");
    }

    int var39 = 3;
    if (var39 % 2 == 0) {
        printf("var39 is even\n");
    } else {
        printf("var39 is odd\n");
    }

    return 0;
}
