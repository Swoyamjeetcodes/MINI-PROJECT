
#include <stdio.h>


int func316(int var709) {
    if (var709 <= 0) return 1;
    return func316(var709 - 1);
}


int main() {
    for (int var852 = 0; var852 < 16; var852++) {
        var852 += 5;
    }    for (int var322 = 0; var322 < 10; var322++) {
        var322 += 1;
    }    for (int var45 = 0; var45 < 10; var45++) {
        var45 += 5;
    }

    int var998 = 95;
    if (var998 % 2 == 0) {
        printf("var998 is even\n");
    } else {
        printf("var998 is odd\n");
    }

    int var19 = 33;
    if (var19 % 2 == 0) {
        printf("var19 is even\n");
    } else {
        printf("var19 is odd\n");
    }

    return 0;
}
