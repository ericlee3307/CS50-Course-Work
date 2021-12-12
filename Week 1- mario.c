#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h = get_int("Enter height: \n");
    while(h < 1 || h > 8)
    {
    printf("Height exceeds range (please enter number between 1 to 8).\n");
    h = get_int("Enter height: \n");
    }
    int x = 0;
    do{
        for(int z = h; z > x+1; z--)
        {
            printf(" ");
        }
        for(int y = 0; y <= x; y++)
        {
            printf("#");
        }
        printf(" ");
        for(int y = 0; y <= x; y++)
        {
            printf("#");
        }
        for(int z = h; z > x+1; z--)
        {
            printf(" ");
        }
    printf("\n");
    x++;
    } while (x < h);
}