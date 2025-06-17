# 📒 Simple Contact Book in C++

## 📌 Description

The **Simple Contact Book** is a C++ console application that allows users to manage their contact information. The system uses a fixed-size array of structs to store contact details, enabling the user to **add**, **view**, **delete**, and **search** for contacts.

This project demonstrates:
- Use of `struct` for custom data types
- Array manipulation
- Basic input/output and validation
- Modular code design using functions
- Command-line interaction

---
## 📸 Visual Appearance
```cpp
1. Add Contact
2. View Saved Contact
3. Search Contact
4. Delete Contact
5. Exit
};
```
## 📂 Features

- ➕ Add a new contact
- 📖 View all saved contacts
- ❌ Delete a contact by index
- 🔍 Search for a contact by name
- 🔐 Handles empty and full contact book conditions

---

## 🛠 Technologies Used

- C++17 or later
- Standard C++ Library (`<iostream>`, `<iomanip>`, `<string>`)
- Command-line interface

---

## 📦 How It Works

### Struct Definition

```cpp
struct Contact {
    std::string name;
    std::string phone;
    std::string email;
};
```

### Core Functionalities

- **Add Contact:** Takes user input for name, phone, and email and stores it in the array.
- **View Contacts:** Displays all saved contacts using formatted output.
- **Delete Contact:** Prompts user to enter the contact index and removes that contact.
- **Search Contact:** Performs a linear search by name.

### Entry Point

```cpp
int main() {
    // Entry point with menu to select options
}
//Fubctions
```

---

## ✅ Usage

1. Compile the code:

```bash
g++ contact_book.cpp -o contact_book
```

2. Run the executable:

```bash
./contact_book
```

3. Follow the on-screen prompts to add, view, delete, or search contacts.

---

## 🚧 Limitations

- The contact list is limited to a maximum of **100 entries**
- No persistent storage — data is lost once the program exits
- Search is case-sensitive and only by exact name match

---

## 💡 Future Improvements

- Add persistent storage using file handling
- Implement dynamic memory instead of fixed array
- Allow partial name search and case-insensitive match

---

## 👨‍💻 Author

**Boitumelo Clement Mkhondo**  
Aspiring Full Stack Developer & C++ Enthusiast

---

## 📜 License

This project is open-source and free to use for educational purposes.
