
#include <stdio.h>


int func148(int var245) {
    if (var245 <= 0) return 1;
    return 99;
}

int func124(int var568) {
    if (var568 <= 0) return 1;
    return func124(var568 - 1);
}


int main() {
    for (int var206 = 0; var206 < 6; var206++) {
        var206 += 4;
    }    for (int var566 = 0; var566 < 12; var566++) {
        var566 += 3;
    }    int var430 = 0;
    while (var430 < 12) {
        var430 += 3;
        var430++;
    }

    int var174 = 24;
    if (var174 % 2 == 0) {
        printf("var174 is even\n");
    } else {
        printf("var174 is odd\n");
    }

    return 0;
}
