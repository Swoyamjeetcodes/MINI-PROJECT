
#include <stdio.h>


int func951(int var816) {
    if (var816 <= 0) return 1;
    return func951(var816 - 1);
}

int func861(int var695) {
    if (var695 <= 0) return 1;
    return func861(var695 - 1);
}


int main() {
    for (int var584 = 0; var584 < 13; var584++) {
        var584 += 1;
    }

    int var777 = 67;
    if (var777 % 2 == 0) {
        printf("var777 is even\n");
    } else {
        printf("var777 is odd\n");
    }

    int var759 = 62;
    if (var759 % 2 == 0) {
        printf("var759 is even\n");
    } else {
        printf("var759 is odd\n");
    }

    int var742 = 57;
    if (var742 % 2 == 0) {
        printf("var742 is even\n");
    } else {
        printf("var742 is odd\n");
    }

    return 0;
}
