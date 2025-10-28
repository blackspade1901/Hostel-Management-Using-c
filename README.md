🏠 Hostel Management System

A simple C project for managing hostel operations like student registration, room allocation, and fee invoice generation.
It demonstrates structures, file handling, modular programming, and menu-driven logic in C.

📁 Project Files

main.c – Controls the main menu and program flow

student.c / student.h – Handles student registration, room allocation, viewing, and searching

hostel.c / hostel.h – Manages hostel details, available and occupied rooms

invoice.c / invoice.h – Generates invoices for students

menu.c / menu.h – Displays the weekly food menu

utils.c / utils.h – Handles saving and loading student data using file operations

⚙️ Features

Register new students with auto-generated IDs

Allocate or remove rooms

Track hostel occupancy (available and occupied rooms)

Generate invoices with tax calculation

View all registered students

Search students by hostel

Display weekly food menu

Save and load records from file

🧠 Concepts Used

Structures

File handling (fwrite, fread)

Functions and pointers

Modular programming

Conditional logic

Menu-driven approach

🖥️ How to Run

Compile the program:

gcc main.c student.c hostel.c invoice.c menu.c utils.c -o hostel_mgmt


Run the executable:

./hostel_mgmt

💡 Example Output
===== HOSTEL MANAGEMENT SYSTEM =====
1. Register Student
2. Allocate Room
3. View Hostel Info
4. View All Students
5. Generate Invoice
6. Remove Student
7. View Food Menu
8. Search Students by Hostel
9. Exit
