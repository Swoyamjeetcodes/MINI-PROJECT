
#include <stdio.h>


int func258(int var149) {
    if (var149 <= 0) return 1;
    return func258(var149 - 1);
}


int main() {
    for (int var569 = 0; var569 < 18; var569++) {
        var569 += 3;
    }

    int var185 = 79;
    if (var185 % 2 == 0) {
        printf("var185 is even\n");
    } else {
        printf("var185 is odd\n");
    }

    return 0;
}
