
#include <stdio.h>


int func548(int var815) {
    if (var815 <= 0) return 1;
    return func548(var815 - 1);
}


int main() {
    int var409 = 0;
    while (var409 < 5) {
        var409 += 3;
        var409++;
    }

    int var714 = 74;
    if (var714 % 2 == 0) {
        printf("var714 is even\n");
    } else {
        printf("var714 is odd\n");
    }

    return 0;
}
