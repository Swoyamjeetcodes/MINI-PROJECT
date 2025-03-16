
#include <stdio.h>


int func579(int var101) {
    if (var101 <= 0) return 1;
    return func579(var101 - 1);
}


int main() {
    for (int var955 = 0; var955 < 8; var955++) {
        var955 += 1;
    }    int var78 = 0;
    while (var78 < 18) {
        var78 += 3;
        var78++;
    }    for (int var678 = 0; var678 < 15; var678++) {
        var678 += 4;
    }

    int var322 = 80;
    if (var322 % 2 == 0) {
        printf("var322 is even\n");
    } else {
        printf("var322 is odd\n");
    }

    int var310 = 49;
    if (var310 % 2 == 0) {
        printf("var310 is even\n");
    } else {
        printf("var310 is odd\n");
    }

    return 0;
}
