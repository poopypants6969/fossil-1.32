#include "config.h"
#include "poop.h"

#if INTERFACE
/*exported struct definitions or #defined go here */
#endif

void otterfact(int factID)
{
switch (factID)
{
case 1:
{
fossil_print("The otter mating season is from December to April.");
break;
}

case 2:
{
fossil_print("Otters have a pocket of skin under their forearms where they keep their favorite rock.\n");
break;
}

case 3:
{ 
fossil_print("River otters can stay underwater for up to eight minutes and can close their ears and nostrils to keep water out. They can also dive to a depth of 60 feet!\n");
break;
}

case 4:
{
fossil_print("River otters eat fish, crustaceans, mollusks, insects, birds, oysters, crabs, frogs, rodents, turtles, and aquatic invertebrates.\n"); 
break;
}

case 5:
{
fossil_print("Otters have a luscious, waterproof pelt that they use to regulate body temperature. The otter pelt was also a staple of the french fur trade in the 18th and 19th centuries!\n");
break;
}
}
}

void poop_cmd(void)
{

int choice;

fossil_print("Please enter a number from 1 to 5.\n");

do {
stdin >> choice;
} while (choice < 1 || choice > 5)

otterfact(choice);
}

//code
