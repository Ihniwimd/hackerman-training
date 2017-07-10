#import <stdio.h>
#import <cs50.h>

int main(void)
{
    printf("Minutes spent showering: ");
    int minutes = get_int();
    printf("Bottles: %i \n", minutes * 12);
}
