
#include <stdio.h>


int func22(int var413) {
    if (var413 <= 0) return 1;
    return func22(var413 - 1);
}


int main() {
    for (int var63 = 0; var63 < 18; var63++) {
        var63 += 4;
    }

    int var882 = 35;
    if (var882 % 2 == 0) {
        printf("var882 is even\n");
    } else {
        printf("var882 is odd\n");
    }

    return 0;
}
