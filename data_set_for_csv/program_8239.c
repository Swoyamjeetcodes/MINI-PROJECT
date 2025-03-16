
#include <stdio.h>


int func144(int var472) {
    if (var472 <= 0) return 1;
    return func144(var472 - 1);
}

int func674(int var4) {
    if (var4 <= 0) return 1;
    return 9;
}


int main() {
    int var277 = 0;
    while (var277 < 13) {
        var277 += 4;
        var277++;
    }    for (int var457 = 0; var457 < 8; var457++) {
        var457 += 3;
    }    for (int var538 = 0; var538 < 7; var538++) {
        var538 += 2;
    }

    int var779 = 96;
    if (var779 % 2 == 0) {
        printf("var779 is even\n");
    } else {
        printf("var779 is odd\n");
    }

    int var409 = 47;
    if (var409 % 2 == 0) {
        printf("var409 is even\n");
    } else {
        printf("var409 is odd\n");
    }

    int var519 = 68;
    if (var519 % 2 == 0) {
        printf("var519 is even\n");
    } else {
        printf("var519 is odd\n");
    }

    return 0;
}
