> This project was developed as part of the 2024 Summer Institutional Training assignment.

# Medical Store Inventory Management System

This is a C++ project developed as part of the 2024 Summer Institutional Training assignment. The project is designed to manage the inventory of a medical store, allowing the user to add, view, and search for medicines.

## Features

- **Add Medicine**: Add new medicines to the store inventory.
- **View All Medicines**: Display all the medicines available in the store.
- **Search Medicine**: Search for a medicine by its name.
- **Purchase Medicine**: Reduce the quantity of a medicine when it is purchased.

## Project Structure

The project is divided into several files for better organization:

- **main.cpp**: The entry point of the application.
- **interface.cpp & interface.h**: Handles user interaction and displays menus.
- **store.cpp & store.h**: Manages the storage and retrieval of medicines, including file operations.

## Getting Started

### Prerequisites

- A C++ compiler (e.g., g++)
- A Unix-like environment (Linux, macOS) for the `compile.sh` script to work, or adjust the script for your environment.

### Installation

1. Clone the repository:

   ```sh
   git clone github.com/2SSK/institutional-training-assignment/
   cd institutional-training-assignment
   ```

2. Give execute permission to the `compile.sh` script:

   ```sh
   chmod +x compile.sh
   ```

3. Compile the project using the provided script:

   ```
   ./compile.sh
   ```

   > This script will automatically compile and execute the program.

### Usage

1. The application will display a menu with the following options:

   - Add Medicine
   - View All Medicines
   - Search Medicine by Name
   - Purchase Medicine
   - Exit

2. Enter the number corresponding to the action you wnat to perform and follow the onscreen instructions.

### File Storage

The application uses a text file name `medicines.txt` to store medicine data. This file is read when the application starts and when changes are made.

### Code Overview

- #### main.cpp

The main file that initializes the `Store` and `Interface` objects adn handles the main loop for user interaction.

- #### interface.cpp & interface.h

Contains the `Interface` class responsible for displaying menus and handling user input for various actions.

- #### store.cpp & store.h

Contains the `store` class responsible for managing the list of medicines, including adding, viewing, and searching for medicines. It also handles loading from and saving to the `medicines.txt` file.
