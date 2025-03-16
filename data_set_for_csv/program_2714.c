
#include <stdio.h>


int func842(int var909) {
    if (var909 <= 0) return 1;
    return func842(var909 - 1);
}

int func615(int var316) {
    if (var316 <= 0) return 1;
    return 97;
}


int main() {
    int var976 = 0;
    while (var976 < 17) {
        var976 += 3;
        var976++;
    }    int var128 = 0;
    while (var128 < 18) {
        var128 += 2;
        var128++;
    }    for (int var696 = 0; var696 < 7; var696++) {
        var696 += 1;
    }

    int var198 = 27;
    if (var198 % 2 == 0) {
        printf("var198 is even\n");
    } else {
        printf("var198 is odd\n");
    }

    return 0;
}
