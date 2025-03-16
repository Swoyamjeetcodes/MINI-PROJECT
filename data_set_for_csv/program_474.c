
#include <stdio.h>


int func706(int var899) {
    if (var899 <= 0) return 1;
    return func706(var899 - 1);
}

int func818(int var538) {
    if (var538 <= 0) return 1;
    return func818(var538 - 1);
}

int func822(int var115) {
    if (var115 <= 0) return 1;
    return func822(var115 - 1);
}

int func630(int var130) {
    if (var130 <= 0) return 1;
    return func630(var130 - 1);
}

int func325(int var532) {
    if (var532 <= 0) return 1;
    return func325(var532 - 1);
}


int main() {
    for (int var494 = 0; var494 < 12; var494++) {
        var494 += 1;
    }

    int var905 = 42;
    if (var905 % 2 == 0) {
        printf("var905 is even\n");
    } else {
        printf("var905 is odd\n");
    }

    return 0;
}
