
#include <stdio.h>


int func601(int var829) {
    if (var829 <= 0) return 1;
    return func601(var829 - 1);
}

int func51(int var193) {
    if (var193 <= 0) return 1;
    return func51(var193 - 1);
}


int main() {
    int var249 = 0;
    while (var249 < 18) {
        var249 += 2;
        var249++;
    }

    int var642 = 87;
    if (var642 % 2 == 0) {
        printf("var642 is even\n");
    } else {
        printf("var642 is odd\n");
    }

    return 0;
}
