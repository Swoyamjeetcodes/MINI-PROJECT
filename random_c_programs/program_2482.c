
#include <stdio.h>


int func161(int var863) {
    if (var863 <= 0) return 1;
    return func161(var863 - 1);
}

int func156(int var895) {
    if (var895 <= 0) return 1;
    return 100;
}


int main() {
    for (int var6 = 0; var6 < 15; var6++) {
        var6 += 1;
    }    for (int var416 = 0; var416 < 16; var416++) {
        var416 += 3;
    }

    int var541 = 66;
    if (var541 % 2 == 0) {
        printf("var541 is even\n");
    } else {
        printf("var541 is odd\n");
    }

    int var585 = 89;
    if (var585 % 2 == 0) {
        printf("var585 is even\n");
    } else {
        printf("var585 is odd\n");
    }

    int var624 = 14;
    if (var624 % 2 == 0) {
        printf("var624 is even\n");
    } else {
        printf("var624 is odd\n");
    }

    return 0;
}
