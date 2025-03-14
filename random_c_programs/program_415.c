
#include <stdio.h>


int func787(int var653) {
    if (var653 <= 0) return 1;
    return func787(var653 - 1);
}


int main() {
    for (int var504 = 0; var504 < 15; var504++) {
        var504 += 3;
    }

    int var980 = 6;
    if (var980 % 2 == 0) {
        printf("var980 is even\n");
    } else {
        printf("var980 is odd\n");
    }

    return 0;
}
