
#include <stdio.h>


int func654(int var958) {
    if (var958 <= 0) return 1;
    return func654(var958 - 1);
}

int func926(int var984) {
    if (var984 <= 0) return 1;
    return func926(var984 - 1);
}


int main() {
    for (int var610 = 0; var610 < 8; var610++) {
        var610 += 4;
    }    for (int var140 = 0; var140 < 17; var140++) {
        var140 += 3;
    }    int var416 = 0;
    while (var416 < 10) {
        var416 += 5;
        var416++;
    }    int var393 = 0;
    while (var393 < 11) {
        var393 += 2;
        var393++;
    }

    int var813 = 69;
    if (var813 % 2 == 0) {
        printf("var813 is even\n");
    } else {
        printf("var813 is odd\n");
    }

    int var506 = 71;
    if (var506 % 2 == 0) {
        printf("var506 is even\n");
    } else {
        printf("var506 is odd\n");
    }

    return 0;
}
