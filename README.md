# online-billing-system
Abstract

The Online Billing System in C is a console-based application designed to simplify billing operations for small shops and businesses. It allows users to store customer details, manage products, generate invoices, calculate totals automatically, and maintain records using file handling. The project demonstrates core C programming concepts including structures, functions, arrays, pointers, file operations, and modular programming.


---

 Features

Add, view, update, and delete customer records

Add and manage product/item list

Generate bills with automatic calculation of:

Quantity

Price

Tax (optional)

Total amount


Save bills using file handling (text/binary files)

Search bills by ID or customer name

Daily / monthly sales summary (optional)

User-friendly console interface

Error handling for invalid input



---

🛠 Technical Requirements

Software/Tools

C Compiler (GCC recommended)

Any IDE/Editor:

Code::Blocks

Dev-C++

Visual Studio Code

Turbo C (not recommended but usable)



Language Standard

C89 / C99 / C11 compliant compiler


Libraries Used

<stdio.h>

<stdlib.h>

<string.h>

<ctype.h> (optional)



---

 File Handling Requirements

The project uses file handling to store and retrieve records.

Files Used

File Name	Purpose

customers.dat	Stores customer data structures (binary)
products.dat	Stores product list (binary)
bills.dat	Stores bill records
login.dat (optional)	Stores authentication credentials


File Operations

fopen(), fclose()

fread(), fwrite()

fprintf(), fscanf()

fseek(), rewind() for updates

Uses binary files for speed and security



---

Compilation Requirements

GCC (Linux/Mac/Windows)

gcc main.c billing.c customer.c product.c -o billing

Using Makefile (optional)

make

Using Code::Blocks/Dev-C++

Open project

Add all .c files into the project

Build & Run



---

 Fundamental Requirements

The system must provide:

Modular programming using multiple .c and .h files

Use of structures for customer, product, and bill data

Use of functions for each operation

Proper validations (no negative values, compulsory fields)

Persistent storage through files

Menu-driven interface

Ability to update and delete file records



---

 Project File Structure

Online-Billing-System/
│
├── src/
│   ├── main.c
│   ├── billing.c
│   ├── customer.c
│   ├── product.c
│   └── utils.c
│
├── include/
│   ├── billing.h
│   ├── customer.h
│   ├── product.h
│   └── utils.h
│
├── data/
│   ├── customers.dat
│   ├── products.dat
│   └── bills.dat
│
├── docs/
│   └── screenshots/
│
├── Makefile
└── README.md


---

 How to Compile and Run

 Using GCC

Navigate to your folder:

cd Online-Billing-System/src

Compile:

gcc main.c billing.c customer.c product.c utils.c -o billing

Run:

./billing

 Using Makefile

make
./billing

Using Windows (MinGW)

gcc main.c billing.c customer.c product.c utils.c -o billing.exe
billing.exe


---

 How to Use
1. Start application
2. Login (if enabled)
3. Access menu options:
Add Customer
Add Product
Generate Bill
View Existing Bills
Search/Update/Delete Records
4. Bill is generated and saved in bills.dat
5. Exit the programe
screenshots:main menu


