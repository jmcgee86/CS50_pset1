#include <stdio.h>
#include <cs50.h>

int main(void){
    int height;
do {
    height = get_int("enter height between 0 and 23:");
}
while
 (height < 0 || height > 23);
    for (int row = 0; row < height; row++){
        for (int spaces = 0; spaces<(height-row - 1); spaces++){
            printf(" ");
        }
        for (int hashes = 0; hashes<(row+2); hashes++){
            printf("#");
        }
        printf("\n");
   }
}