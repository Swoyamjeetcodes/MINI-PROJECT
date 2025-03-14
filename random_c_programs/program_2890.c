
#include <stdio.h>


int func729(int var707) {
    if (var707 <= 0) return 1;
    return func729(var707 - 1);
}

int func985(int var951) {
    if (var951 <= 0) return 1;
    return func985(var951 - 1);
}

int func755(int var415) {
    if (var415 <= 0) return 1;
    return func755(var415 - 1);
}

int func66(int var418) {
    if (var418 <= 0) return 1;
    return 24;
}


int main() {
    int var701 = 0;
    while (var701 < 20) {
        var701 += 3;
        var701++;
    }

    int var914 = 82;
    if (var914 % 2 == 0) {
        printf("var914 is even\n");
    } else {
        printf("var914 is odd\n");
    }

    return 0;
}
