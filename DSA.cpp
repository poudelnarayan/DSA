/*
Arranging the data in the main memory during the execution of program is called data structure.

Arranging the data in Storage devices in form og tables is called Databases.

*/

int main()
{
    int *p;
    p = new int[5];

    delete[] p;
    p = nullptr;

    return 0;
}