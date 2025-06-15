#include <iostream>
#include <iomanip>
struct Contact
{
    std::string name;
    std::string phone;
    std::string email;
};
const int MAX_USERS = 100;
void addContact(Contact book[], int &count);
void viewContacts(const Contact book[], int count);
void deleteContact(Contact book[], int &count);
void searchContact(const Contact book[], int count);

int main()
{
    int menuOption, userCount = 0;
    Contact contact[MAX_USERS];
    system("cls");
    std::cout << "Welcome To The Contact Book\nPress Enter To View Options...";
    std::cin.get();
    system("cls");
    do
    {
        std::cout << std::setw(50) << "Options\n1. Add Contact\n2. View Saved Contacts\n3. Delete Contact\n4. Search Contact\n5. Exit\nOption:";
        std::cin >> menuOption;
        std::cin.ignore();
        switch (menuOption)
        {
        case 1:
            addContact(contact, userCount);
            break;
        case 2:
            viewContacts(contact, userCount);
            break;
        case 3:
            deleteContact(contact, userCount);
            break;
        case 4:
            searchContact(contact, userCount);
            break;
        default:
            system("cls");
            std::cout << "Invalid Input.\nExiting Program...";
            return 0;
            break;
        }
    } while (menuOption <= 5 && menuOption > 0);

    return 0;
}
void addContact(Contact book[], int &count)
{
    system("cls");
    if (count > MAX_USERS)
    {
        std::cout << "Contact Book Is Full\nPress Enter To Exit Book...";
        std::cin.get();
    }
    else
    {
        std::cout << "Enter Contact Name   :";
        std::getline(std::cin, book[count].name);
        std::cout << "\nEnter Contact Number :";
        std::getline(std::cin, book[count].phone);
        std::cout << "\nEnter Contact Email  :";
        std::getline(std::cin, book[count].email);
        std::cout << "Press Enter To Save Contact Info...";
        std::cin.get();
        std::cout << "Contact Info Saved Successfully\nEnter To Proceed...";
        std::cin.get();
        system("cls");
        count++;
    }
}
void viewContacts(const Contact book[], int count)
{
    system("cls");
    if (count == 0)
    {
        std::cout << "There Are No Saved Contacts.\n";
        std::cout << "Press Enter To Close Book...";
        std::cin.get();
        system("cls");
    }
    else
    {
        for (int i = 0; i < count; i++)
        {

            std::cout << "Saved Contacts\n";
            std::cout << std::left << "1: " << (i + 1) << " " << std::setw(15) << book[i].name << std::setw(15) << book[i].phone << std::setw(15) << book[i].email;
            std::cout << std::endl;
        }
        std::cout << "Press Enter To Close Book...";
        std::cin.get();
        system("cls");
    }
}
void deleteContact(Contact book[], int &count)
{
    int deleteIndex;
    system("cls");

    if (count == 0)
    {
        std::cout << "There Are No Contacts To Delete.\n";
        std::cout << "Press Enter To Close Book...";
        std::cin.get();
        system("cls");
    }
    else
    {
        std::cout << "Enter the number of the contact you want to delete (1 to " << count << "): ";
        std::cin >> deleteIndex;
        std::cin.ignore();

        if (deleteIndex < 1 || deleteIndex > count)
        {
            std::cout << "Invalid contact number.\n";
            std::cout << "Press Enter To Close Book...";
            std::cin.get();
            system("cls");
            return;
        }

        for (int i = deleteIndex - 1; i < count - 1; i++)
        {
            book[i] = book[i + 1];
        }
        count--;
        std::cout << "Contact deleted successfully.\n";
        std::cout << "Press Enter To Close Book...";
        std::cin.get();
        system("cls");
    }
}
void searchContact(const Contact book[], int count)
{
    bool found;
    system("cls");
    if (count == 0)
    {
        std::cout << "There Are No Saved Contacts.\n";
        std::cout << "Press Enter To Close Book...";
        std::cin.get();
        system("cls");
    }
    else
    {
        std::cout << "Searching Contact\n";
        std::string searchKey;
        std::cout << "Search:";
        getline(std::cin, searchKey);
        for (int i = 0; i < count; i++)
        {
            if (searchKey == book[i].name)
            {

                std::cout << "The Contact Has Been Found At Number " << (i + 1) << ". And Available In The Book\n";
                std::cout << "Press Enter To Close Search ... ";
                std::cin.get();
                system("cls");
                break;
            }
            else
            {
                std::cout << "404 Not Found";
                break;
            }
        }
    }
}