
#include <stdio.h>


int func520(int var201) {
    if (var201 <= 0) return 1;
    return func520(var201 - 1);
}


int main() {
    for (int var678 = 0; var678 < 14; var678++) {
        var678 += 5;
    }    for (int var154 = 0; var154 < 13; var154++) {
        var154 += 3;
    }

    int var829 = 48;
    if (var829 % 2 == 0) {
        printf("var829 is even\n");
    } else {
        printf("var829 is odd\n");
    }

    int var985 = 1;
    if (var985 % 2 == 0) {
        printf("var985 is even\n");
    } else {
        printf("var985 is odd\n");
    }

    return 0;
}
