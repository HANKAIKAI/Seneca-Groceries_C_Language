// ----------------------------------------------------------------------------
// DO NOT remove the below 2 lines.
// The below two lines is needed to ensure only one copy
// of this header file is included when compiling the project.
// (it is referred to as "safeguarding")
// You will learn about this in C++ (OOP244/BTP200)
// For now, simply leave this code in!
#ifndef CONTACTS_H_
#define CONTACTS_H_
// ----------------------------------------------------------------------------

//==============================================
// Name:           Yuankai Han
// Student Number: 154477194
// Email:          yhan77@myseneca.ca
// Section:        NOO
// Date:           
//==============================================
// Assignment:     2
// Milestone:      4
//==============================================

// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-3 |
// |        contents below...                        |
// +-------------------------------------------------+

//--------------------------------
// Structure Types
//--------------------------------
struct Name
{
    char firstName[31];
    char middleInitial[7];
    char lastName[36];
};

struct Address
{
    int streetNumber;
    char street[41];
    int apartmentNumber;
    char postalCode[8];
    char city[41];
};

struct Numbers
{
    char cell[11];
    char home[11];
    char business[11];
};

struct Contact
{
    struct Name name;
    struct Address address;
    struct Numbers numbers;
};

// --------------------------------
// Function Prototypes
//--------------------------------

// Get and store from standard input the values for Name
void getName(struct Name* name);

// Get and store from standard input the values for Address
void getAddress(struct Address* address);

// Get and store from standard input the values for Numbers
void getNumbers(struct Numbers* numbers);

void getContact(struct Contact* contact);




// ----------------------------------------------------------------------------
// DO NOT remove the below line (closing of the "safeguard" condition)
#endif // !CONTACTS_H_
