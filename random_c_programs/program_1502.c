
#include <stdio.h>


int func677(int var736) {
    if (var736 <= 0) return 1;
    return func677(var736 - 1);
}


int main() {
    for (int var791 = 0; var791 < 17; var791++) {
        var791 += 5;
    }

    int var164 = 34;
    if (var164 % 2 == 0) {
        printf("var164 is even\n");
    } else {
        printf("var164 is odd\n");
    }

    return 0;
}
