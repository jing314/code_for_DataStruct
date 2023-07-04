#include <stdio.h>

typedef struct 
{
    unsigned char Data;
    unsigned char *next;
    /* data */
}DataStruct_1;
DataStruct_1 Data_Struct;

int main(void)
{
    printf("Hello World\n");
    return 0;
}



void DataStruct_Init(DataStruct_1 *Data_Struct)
{
    Data_Struct->Data = NULL;
}
