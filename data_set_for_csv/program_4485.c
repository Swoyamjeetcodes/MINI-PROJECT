
#include <stdio.h>


int func914(int var176) {
    if (var176 <= 0) return 1;
    return func914(var176 - 1);
}


int main() {
    int var97 = 0;
    while (var97 < 12) {
        var97 += 2;
        var97++;
    }

    int var815 = 81;
    if (var815 % 2 == 0) {
        printf("var815 is even\n");
    } else {
        printf("var815 is odd\n");
    }

    return 0;
}
