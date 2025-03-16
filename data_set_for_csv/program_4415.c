
#include <stdio.h>


int func211(int var845) {
    if (var845 <= 0) return 1;
    return func211(var845 - 1);
}


int main() {
    int var220 = 0;
    while (var220 < 17) {
        var220 += 1;
        var220++;
    }

    int var163 = 69;
    if (var163 % 2 == 0) {
        printf("var163 is even\n");
    } else {
        printf("var163 is odd\n");
    }

    return 0;
}
