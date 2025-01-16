# User Management System in C

## Project Report

### Introduction
The User Management System is a console-based application developed in C. It allows administrators to register the user and able to login again.

### Features
- **user_registration**: Allows the administrator to add a new user to the system.
- **user_login** : Allows the administrator to login the registered user.
- **exit** : Allows user to exit from the from program and delete all the users.

### Implementation Details
- **Programming Language**: C
- **Development Environment**: Any C compiler (e.g., GCC)
- **Data Storage**: File handling is used to store user information persistently.

### Modules
1. **Main Module**: The entry point of the application.
2. **User Module**: Contains functions for user operations such as add, login and exit.
3. **File Handling Module**: Manages reading from and writing to files.

### Functions
- `void register_user()`: Adds a new user to the system.
- `int login_user()`: login existing user.
- `void input_password()`: taking password input.
- `void fix_fget()`: it will fix the fget function.

### File Structure
- `main.c`: Contains the main function and menu-driven interface.

### Conclusion
The User Management System in C is a simple yet effective application for managing user information. It demonstrates the use of file handling, modular programming, and basic CRUD operations in C.

### Future Enhancements
- Implementing a graphical user interface (GUI).
- Adding user authentication and authorization.
- Enhancing data validation and error handling.
- implimanting the crud feature.

### Author
- **Name**: [Anurag Rajpoot]
- **Email**: [codewithanurag93@gmail.com]

### License
This project is licensed under the MIT License.
