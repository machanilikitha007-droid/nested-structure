#include <stdio.h>

struct Address
{
    char city[30];
    int pincode;
};

struct Student
{
    int rollNo;
    char name[30];
    struct Address address;
};

int main()
{
    struct Student student = {
        101,
        "Likitha",
        {"Anantapur", 515001}
    };

    printf("Student Details\n");
    printf("Roll Number: %d\n", student.rollNo);
    printf("Name: %s\n", student.name);
    printf("City: %s\n", student.address.city);
    printf("Pincode: %d\n", student.address.pincode);

    return 0;
}
