
#include <stdio.h>


int func457(int var955) {
    if (var955 <= 0) return 1;
    return func457(var955 - 1);
}


int main() {
    for (int var166 = 0; var166 < 14; var166++) {
        var166 += 2;
    }

    int var882 = 41;
    if (var882 % 2 == 0) {
        printf("var882 is even\n");
    } else {
        printf("var882 is odd\n");
    }

    return 0;
}
