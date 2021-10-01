#include <string.h>
#include "employee.h"

PtrToEmployee searchEmployeeByNumber(PtrToConstEmployee ptr, int tableSize, long targetNumber){
    const PtrToConstEmployee endPtr = ptr + tableSize;
    for(; ptr < endPtr; ptr++) //search until end of table ptr++ will increment by one
    {
        if(ptr->number == targetNumber)//check if it equals the employee number
            return (PtrToEmployee) ptr;
    }
    return NULL;
}

//Essentially the same functionality but comparing strings
PtrToEmployee searchEmployeeByName(PtrToConstEmployee ptr, int tableSize, char *  targetName){
    const PtrToConstEmployee endPtr = ptr + tableSize;
    for(; ptr < endPtr; ptr++)
    {
        if(strcmp(ptr->name,targetName) == 0)
            return (PtrToEmployee) ptr;
    }
    return NULL;
}