
#include <stdio.h>


int func712(int var83) {
    if (var83 <= 0) return 1;
    return 9;
}

int func537(int var833) {
    if (var833 <= 0) return 1;
    return func537(var833 - 1);
}

int func538(int var685) {
    if (var685 <= 0) return 1;
    return func538(var685 - 1);
}


int main() {
    for (int var845 = 0; var845 < 12; var845++) {
        var845 += 3;
    }    for (int var584 = 0; var584 < 16; var584++) {
        var584 += 3;
    }    int var46 = 0;
    while (var46 < 6) {
        var46 += 1;
        var46++;
    }

    int var802 = 30;
    if (var802 % 2 == 0) {
        printf("var802 is even\n");
    } else {
        printf("var802 is odd\n");
    }

    return 0;
}
