# Car Rental Service Application

## Overview
This is a console-based Car Rental Service application written in C++. The application allows users to rent different types of cars (5-seater or 7-seater), select rental durations, and add optional services. It features a student discount system and generates detailed receipts and reports.

## Features
- **Car Selection System**:
  - Choice between 5-seater and 7-seater vehicles
  - Multiple car models for each category
  - Different pricing based on car model and rental duration
- **Flexible Rental Duration**:
  - Multiple time brackets (6h, 12h, 24h, 42h)
  - Additional hourly rates for extended rentals
- **Additional Services**:
  - Health Insurance (RM25)
  - Repair Coverage (RM50)
  - Air Bag Installation (RM350)
  - Full Tank Service (RM200)
- **Discount System**:
  - 10% discount for students with valid student ID
- **Reporting Features**:
  - Detailed receipt for each customer
  - Overall daily report showing:
    - Total profit
    - Total number of customers
    - Most and least chosen additional services
  - Customer history log

## Requirements
- C++ compiler (supporting C++11 or later)
- Windows OS (for the `windows.h` library used in the loading screen)

## How to Use
1. **Compile the Program**:
   ```
   g++ car_rental.cpp -o car_rental
   ```

2. **Run the Application**:
   ```
   ./car_rental
   ```

3. **Follow the Interactive Prompts**:
   - Enter your name and ID
   - Select car type (5-seater or 7-seater)
   - Choose specific car model using car code (e.g., F1, F2)
   - Specify rental duration in hours
   - Select any additional services
   - Indicate student status (for discount)
   - View receipt
   - Choose to add another customer or end the session

4. **Review Final Report**:
   - After entering all customer data, the program displays an overall report and customer history

## Code Structure
- `main()`: Main program execution
- `CalcDisc()`: Calculates discount for student users
- `display()`: Displays welcome message
- `loadingscreen()`: Shows loading animation at startup
- `Sum()`: Calculates total fees

## Car Models Available
### 5-Seater Cars:
- F1: Perodua Myvi 1.3L G MT (Manual)
- F2: Proton Saga Standard AT (Manual)
- F3: Proton X50 1.5T Standard (Manual)
- F4: Perodua Axia G AT (Automatic)
- F5: Nissan Almera 1.0L VLP (CVT)

### 7-Seater Cars:
- F6: 2021 Perodua Alza (Manual)
- F7: 2021 Proton Exora (Automatic)
- F8: 2021 Toyota Avanza (Automatic)
- F9: 2021 Honda BR-V (Automatic)
- F10: 2021 Mitsubishi Xpander (Automatic)

## Limitations
- The application currently supports a maximum of 100 customers
- Interface is console-based only
- Runs only on Windows due to dependency on Windows.h for loading screen
- Car codes must be entered exactly as shown (F1, F2, etc.)

## Future Improvements
- Graphical user interface
- Database integration for persistent storage
- Cross-platform compatibility
- Online booking system
- Payment processing integration

## License
This software is provided as-is without any explicit license. Contact the author for licensing information.

## Author
MalGamerz
