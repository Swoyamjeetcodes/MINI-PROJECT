
#include <stdio.h>


int func172(int var829) {
    if (var829 <= 0) return 1;
    return 26;
}

int func876(int var540) {
    if (var540 <= 0) return 1;
    return func876(var540 - 1);
}


int main() {
    for (int var14 = 0; var14 < 7; var14++) {
        var14 += 3;
    }

    int var802 = 68;
    if (var802 % 2 == 0) {
        printf("var802 is even\n");
    } else {
        printf("var802 is odd\n");
    }

    return 0;
}
