
#include <stdio.h>


int func674(int var496) {
    if (var496 <= 0) return 1;
    return 91;
}

int func709(int var861) {
    if (var861 <= 0) return 1;
    return 89;
}

int func513(int var146) {
    if (var146 <= 0) return 1;
    return 76;
}

int func319(int var872) {
    if (var872 <= 0) return 1;
    return 4;
}

int func452(int var262) {
    if (var262 <= 0) return 1;
    return func452(var262 - 1);
}


int main() {
    for (int var42 = 0; var42 < 19; var42++) {
        var42 += 5;
    }

    int var859 = 30;
    if (var859 % 2 == 0) {
        printf("var859 is even\n");
    } else {
        printf("var859 is odd\n");
    }

    int var91 = 35;
    if (var91 % 2 == 0) {
        printf("var91 is even\n");
    } else {
        printf("var91 is odd\n");
    }

    return 0;
}
