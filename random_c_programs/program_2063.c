
#include <stdio.h>


int func982(int var928) {
    if (var928 <= 0) return 1;
    return func982(var928 - 1);
}

int func222(int var625) {
    if (var625 <= 0) return 1;
    return func222(var625 - 1);
}

int func660(int var258) {
    if (var258 <= 0) return 1;
    return func660(var258 - 1);
}


int main() {
    int var524 = 0;
    while (var524 < 15) {
        var524 += 2;
        var524++;
    }    for (int var336 = 0; var336 < 13; var336++) {
        var336 += 1;
    }

    int var570 = 18;
    if (var570 % 2 == 0) {
        printf("var570 is even\n");
    } else {
        printf("var570 is odd\n");
    }

    int var95 = 81;
    if (var95 % 2 == 0) {
        printf("var95 is even\n");
    } else {
        printf("var95 is odd\n");
    }

    return 0;
}
