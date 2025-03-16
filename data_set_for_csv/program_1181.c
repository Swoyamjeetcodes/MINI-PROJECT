
#include <stdio.h>


int func231(int var792) {
    if (var792 <= 0) return 1;
    return 31;
}

int func521(int var462) {
    if (var462 <= 0) return 1;
    return func521(var462 - 1);
}


int main() {
    for (int var92 = 0; var92 < 17; var92++) {
        var92 += 2;
    }

    int var355 = 19;
    if (var355 % 2 == 0) {
        printf("var355 is even\n");
    } else {
        printf("var355 is odd\n");
    }

    return 0;
}
