#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int start_size; 
    do
    {
        start_size = get_int("Start size?: \n");
    }
    while (start_size <= 8);

    // TODO: Prompt for end size
    int end_size; 
    do
    {
        end_size = get_int("End size?: \n");
    }
    while (end_size <= start_size);
    
    // TODO: Calculate number of years until we reach threshold
    int total_llamas = start_size;
    int years = 0;
    do
    {
        int baby_llamas; 
        baby_llamas = total_llamas / 3;
        int dead_llamas; 
        dead_llamas = total_llamas / 4;
        total_llamas = total_llamas + baby_llamas - dead_llamas;
        years++;
        
    }
    while (total_llamas < end_size);


    // TODO: Print number of years
    printf("Years: %i  \n", years);
}