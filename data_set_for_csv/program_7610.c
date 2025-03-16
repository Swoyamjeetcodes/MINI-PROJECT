
#include <stdio.h>


int func414(int var982) {
    if (var982 <= 0) return 1;
    return func414(var982 - 1);
}


int main() {
    for (int var550 = 0; var550 < 12; var550++) {
        var550 += 5;
    }    for (int var829 = 0; var829 < 7; var829++) {
        var829 += 4;
    }

    int var686 = 34;
    if (var686 % 2 == 0) {
        printf("var686 is even\n");
    } else {
        printf("var686 is odd\n");
    }

    int var584 = 27;
    if (var584 % 2 == 0) {
        printf("var584 is even\n");
    } else {
        printf("var584 is odd\n");
    }

    return 0;
}
