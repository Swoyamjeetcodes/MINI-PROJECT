
#include <stdio.h>


int func852(int var872) {
    if (var872 <= 0) return 1;
    return 2;
}

int func306(int var785) {
    if (var785 <= 0) return 1;
    return 84;
}

int func472(int var658) {
    if (var658 <= 0) return 1;
    return func472(var658 - 1);
}


int main() {
    int var550 = 0;
    while (var550 < 19) {
        var550 += 3;
        var550++;
    }    int var353 = 0;
    while (var353 < 20) {
        var353 += 2;
        var353++;
    }

    int var686 = 23;
    if (var686 % 2 == 0) {
        printf("var686 is even\n");
    } else {
        printf("var686 is odd\n");
    }

    return 0;
}
