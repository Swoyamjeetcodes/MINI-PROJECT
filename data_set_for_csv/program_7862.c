
#include <stdio.h>


int func413(int var552) {
    if (var552 <= 0) return 1;
    return func413(var552 - 1);
}

int func387(int var99) {
    if (var99 <= 0) return 1;
    return func387(var99 - 1);
}

int func837(int var680) {
    if (var680 <= 0) return 1;
    return func837(var680 - 1);
}


int main() {
    int var9 = 0;
    while (var9 < 5) {
        var9 += 4;
        var9++;
    }    for (int var900 = 0; var900 < 14; var900++) {
        var900 += 2;
    }    for (int var899 = 0; var899 < 12; var899++) {
        var899 += 5;
    }    int var224 = 0;
    while (var224 < 19) {
        var224 += 2;
        var224++;
    }    for (int var472 = 0; var472 < 18; var472++) {
        var472 += 3;
    }

    int var627 = 67;
    if (var627 % 2 == 0) {
        printf("var627 is even\n");
    } else {
        printf("var627 is odd\n");
    }

    int var540 = 98;
    if (var540 % 2 == 0) {
        printf("var540 is even\n");
    } else {
        printf("var540 is odd\n");
    }

    return 0;
}
