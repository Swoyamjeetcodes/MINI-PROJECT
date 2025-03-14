
#include <stdio.h>


int func103(int var745) {
    if (var745 <= 0) return 1;
    return 96;
}

int func678(int var615) {
    if (var615 <= 0) return 1;
    return func678(var615 - 1);
}

int func495(int var74) {
    if (var74 <= 0) return 1;
    return 54;
}

int func393(int var578) {
    if (var578 <= 0) return 1;
    return 43;
}


int main() {
    for (int var689 = 0; var689 < 19; var689++) {
        var689 += 5;
    }

    int var9 = 58;
    if (var9 % 2 == 0) {
        printf("var9 is even\n");
    } else {
        printf("var9 is odd\n");
    }

    int var370 = 97;
    if (var370 % 2 == 0) {
        printf("var370 is even\n");
    } else {
        printf("var370 is odd\n");
    }

    int var849 = 17;
    if (var849 % 2 == 0) {
        printf("var849 is even\n");
    } else {
        printf("var849 is odd\n");
    }

    return 0;
}
