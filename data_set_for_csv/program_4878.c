
#include <stdio.h>


int func795(int var82) {
    if (var82 <= 0) return 1;
    return func795(var82 - 1);
}

int func240(int var936) {
    if (var936 <= 0) return 1;
    return func240(var936 - 1);
}


int main() {
    int var765 = 0;
    while (var765 < 17) {
        var765 += 1;
        var765++;
    }    for (int var615 = 0; var615 < 10; var615++) {
        var615 += 4;
    }

    int var195 = 74;
    if (var195 % 2 == 0) {
        printf("var195 is even\n");
    } else {
        printf("var195 is odd\n");
    }

    int var576 = 95;
    if (var576 % 2 == 0) {
        printf("var576 is even\n");
    } else {
        printf("var576 is odd\n");
    }

    return 0;
}
