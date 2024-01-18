# Book-Store-Management-System

<br>

Welcome to the Book Store, a simple console-based book store application written in C++. This program allows users to explore and purchase books from different genres. The purchased books are recorded, and a receipt is generated for the user.

<br>

## 1. FEATURES

<br>

Genre Selection: Users can choose from five genres: Fantasy, Fiction, Non-Fiction, Horror, and Biography.

Book Display: The program displays a list of books available in the selected genre.

Book Purchase: Users can select a book to purchase, and the program generates a receipt.

Receipt Generation: A detailed receipt is generated with the user's name, ID number, and the purchased books.

<br>

## 2. HOW TO USE

<br>

Run the program.

Choose a genre by entering the assigned number.

Select a book by entering the corresponding number.

Repeat the process to buy more books or proceed to generate a receipt.

Enter your name and ID number for the receipt.

A receipt file is generated in the format "receipt_name-ID.txt."

<br>

## 3. FILE DESCRIPTION

<br>

skull.txt : A file containing the initial welcome message.
receipt_name-ID.txt : Receipt files generated for each user.

<br>

## 4. CODE STRUCTURE

<br>

Main Function : The main function handles the main flow of the program, including genre selection, book display, and receipt generation.

Data Structures : Arrays and structures are used to store book information and record purchased books.

File Handling : The program reads the initial welcome message from "skull.txt" and generates receipt files.

<br>

## 5. HOW TO COMPILE

<br>

This program is written in C++ and can be compiled using a standard C++ compiler. Ensure all source files are in the same directory.


g++ bookstore.cpp -o bookstore
./bookstore

<br>

## 6. NOTES

<br>

The program includes error handling for invalid inputs during genre and book selection.

Ensure the "skull.txt" file is present for the initial welcome message.
