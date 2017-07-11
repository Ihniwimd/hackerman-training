#import <stdio.h>
#import <cs50.h>

int main(void)
{
    int height = 24;
    while (height > 23 || height < 0)
    {
         printf("Height of the pyramid: ");
         height = get_int();
    }
    for (int y = 1; y < height + 1; y++)
    {
        for (int w = 0; w < height - y; w++)
        {
            printf(" ");
        }
        for (int x = 0; x < y; x++)
        {
            printf("#");
        }
        printf("  ");
        for (int x = 0; x < y; x++)
        {
            printf("#");
        }
        printf("\n");
    }
}
