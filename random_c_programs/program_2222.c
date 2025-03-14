
#include <stdio.h>


int func303(int var649) {
    if (var649 <= 0) return 1;
    return func303(var649 - 1);
}


int main() {
    for (int var815 = 0; var815 < 18; var815++) {
        var815 += 2;
    }

    int var894 = 40;
    if (var894 % 2 == 0) {
        printf("var894 is even\n");
    } else {
        printf("var894 is odd\n");
    }

    return 0;
}
