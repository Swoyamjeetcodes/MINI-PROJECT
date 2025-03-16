
#include <stdio.h>


int func70(int var248) {
    if (var248 <= 0) return 1;
    return func70(var248 - 1);
}


int main() {
    for (int var873 = 0; var873 < 13; var873++) {
        var873 += 2;
    }

    int var766 = 49;
    if (var766 % 2 == 0) {
        printf("var766 is even\n");
    } else {
        printf("var766 is odd\n");
    }

    return 0;
}
