
#include <stdio.h>


int func247(int var667) {
    if (var667 <= 0) return 1;
    return 78;
}

int func482(int var486) {
    if (var486 <= 0) return 1;
    return func482(var486 - 1);
}

int func561(int var941) {
    if (var941 <= 0) return 1;
    return func561(var941 - 1);
}


int main() {
    int var194 = 0;
    while (var194 < 20) {
        var194 += 5;
        var194++;
    }

    int var287 = 65;
    if (var287 % 2 == 0) {
        printf("var287 is even\n");
    } else {
        printf("var287 is odd\n");
    }

    int var435 = 7;
    if (var435 % 2 == 0) {
        printf("var435 is even\n");
    } else {
        printf("var435 is odd\n");
    }

    return 0;
}
