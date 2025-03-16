
#include <stdio.h>


int func603(int var640) {
    if (var640 <= 0) return 1;
    return func603(var640 - 1);
}


int main() {
    for (int var656 = 0; var656 < 7; var656++) {
        var656 += 5;
    }

    int var766 = 60;
    if (var766 % 2 == 0) {
        printf("var766 is even\n");
    } else {
        printf("var766 is odd\n");
    }

    return 0;
}
