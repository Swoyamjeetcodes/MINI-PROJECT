
#include <stdio.h>


int func6(int var891) {
    if (var891 <= 0) return 1;
    return func6(var891 - 1);
}


int main() {
    for (int var900 = 0; var900 < 16; var900++) {
        var900 += 2;
    }

    int var420 = 20;
    if (var420 % 2 == 0) {
        printf("var420 is even\n");
    } else {
        printf("var420 is odd\n");
    }

    return 0;
}
