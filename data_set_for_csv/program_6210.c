
#include <stdio.h>


int func819(int var804) {
    if (var804 <= 0) return 1;
    return func819(var804 - 1);
}


int main() {
    for (int var152 = 0; var152 < 14; var152++) {
        var152 += 1;
    }

    int var79 = 39;
    if (var79 % 2 == 0) {
        printf("var79 is even\n");
    } else {
        printf("var79 is odd\n");
    }

    return 0;
}
