
#include <stdio.h>


int func726(int var961) {
    if (var961 <= 0) return 1;
    return func726(var961 - 1);
}


int main() {
    for (int var350 = 0; var350 < 11; var350++) {
        var350 += 5;
    }

    int var463 = 68;
    if (var463 % 2 == 0) {
        printf("var463 is even\n");
    } else {
        printf("var463 is odd\n");
    }

    return 0;
}
