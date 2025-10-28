#🏠 Hostel Management System (C Project)#

A simple and efficient Hostel Management System built in C language to handle student records, room allocation, invoices, and hostel information — all through a user-friendly console interface.

🔹 Features

👩‍🎓 Student Registration — Add and manage student details with auto-generated Student IDs.

🏢 Room Allocation — Assign rooms to students across multiple hostels dynamically.

📊 Hostel Info View — Displays total, available, and occupied rooms per hostel.

🧾 Invoice Generation — Automatically calculates total fees with tax for each student.

🗑️ Remove Student — Deallocate rooms and update records when students leave.

🍛 Weekly Food Menu — Displays the hostel’s weekly meal plan.

🔍 Search by Hostel — Quickly view all students residing in a particular hostel.

💾 Data Persistence — All data is saved to and loaded from a binary file (data.txt).

⚙️ Tech Stack

Language: C

File Handling: Binary I/O for data storage

Modules: main.c, student.c, hostel.c, invoice.c, utils.c

Headers: student.h, utils.h

🧠 Learning Outcomes

Modular programming in C

File handling (read/write in binary)

Struct-based data management

Command-line UI design

🚀 How to Run
gcc main.c student.c hostel.c invoice.c utils.c -o hostel_mgmt
./hostel_mgmt
