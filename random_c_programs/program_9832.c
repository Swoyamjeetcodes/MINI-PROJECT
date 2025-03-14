
#include <stdio.h>


int func381(int var249) {
    if (var249 <= 0) return 1;
    return func381(var249 - 1);
}

int func302(int var251) {
    if (var251 <= 0) return 1;
    return 48;
}

int func465(int var865) {
    if (var865 <= 0) return 1;
    return func465(var865 - 1);
}

int func111(int var180) {
    if (var180 <= 0) return 1;
    return func111(var180 - 1);
}


int main() {
    for (int var292 = 0; var292 < 9; var292++) {
        var292 += 3;
    }

    int var572 = 2;
    if (var572 % 2 == 0) {
        printf("var572 is even\n");
    } else {
        printf("var572 is odd\n");
    }

    int var167 = 68;
    if (var167 % 2 == 0) {
        printf("var167 is even\n");
    } else {
        printf("var167 is odd\n");
    }

    return 0;
}
