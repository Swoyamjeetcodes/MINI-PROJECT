
#include <stdio.h>


int func752(int var309) {
    if (var309 <= 0) return 1;
    return func752(var309 - 1);
}

int func342(int var645) {
    if (var645 <= 0) return 1;
    return func342(var645 - 1);
}


int main() {
    for (int var29 = 0; var29 < 16; var29++) {
        var29 += 4;
    }    int var530 = 0;
    while (var530 < 9) {
        var530 += 5;
        var530++;
    }

    int var468 = 47;
    if (var468 % 2 == 0) {
        printf("var468 is even\n");
    } else {
        printf("var468 is odd\n");
    }

    int var486 = 89;
    if (var486 % 2 == 0) {
        printf("var486 is even\n");
    } else {
        printf("var486 is odd\n");
    }

    int var772 = 27;
    if (var772 % 2 == 0) {
        printf("var772 is even\n");
    } else {
        printf("var772 is odd\n");
    }

    return 0;
}
