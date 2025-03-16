
#include <stdio.h>


int func338(int var604) {
    if (var604 <= 0) return 1;
    return 73;
}

int func714(int var296) {
    if (var296 <= 0) return 1;
    return func714(var296 - 1);
}

int func82(int var294) {
    if (var294 <= 0) return 1;
    return func82(var294 - 1);
}

int func69(int var228) {
    if (var228 <= 0) return 1;
    return func69(var228 - 1);
}


int main() {
    int var631 = 0;
    while (var631 < 12) {
        var631 += 3;
        var631++;
    }    for (int var676 = 0; var676 < 11; var676++) {
        var676 += 2;
    }

    int var347 = 86;
    if (var347 % 2 == 0) {
        printf("var347 is even\n");
    } else {
        printf("var347 is odd\n");
    }

    int var956 = 66;
    if (var956 % 2 == 0) {
        printf("var956 is even\n");
    } else {
        printf("var956 is odd\n");
    }

    int var247 = 46;
    if (var247 % 2 == 0) {
        printf("var247 is even\n");
    } else {
        printf("var247 is odd\n");
    }

    return 0;
}
