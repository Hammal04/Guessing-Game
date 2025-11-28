# 🎮 **Guess Game – Advanced C++ Console Application**

A complete, fully documented **C++ console-based Guess Game with a virtual banking system**, designed to teach beginners how real programs handle **menus, functions, randomization, user input, balance management, and state tracking**.

This project goes beyond a simple game — it integrates multiple programming concepts such as:

* ✔ Functional decomposition
* ✔ Random number generation using `rand()` and `srand()`
* ✔ Modular programming
* ✔ Data validation
* ✔ Player balance simulation
* ✔ Game betting system
* ✔ Profit & loss analytics

---

# 📘 **1. Project Overview**

This project is a **menu-driven interactive Guess Game** where users can:

* Deposit virtual money
* Withdraw money
* Track profits
* Track losses
* Play a randomized number-guessing game
* Manage a simulated balance that affects gameplay

The program runs entirely inside the console using **standard C++** (no third-party libraries).

---

# 🧾 **2. Highlights of the Program**

### ✔ Fully menu-driven

Users interact through a clean, structured console interface.

### ✔ Complete banking system

Start with **100 units** and can deposit or withdraw anytime.

### ✔ Real-time profit & loss tracking

Automatically updated whenever you play.

### ✔ Randomized guessing game

Uses a fair random generator each round.

### ✔ Code organized into functions

Every section (menu, withdraw, profit, game, etc.) is a separate function.

### ✔ Beginner-friendly code

Uses simple logic so students can easily understand.

---

# 🧩 **3. Program Workflow**

Below is a detailed breakdown of how the entire program operates:

---

## 🔸 **3.1 Startup Screen**

When the program launches, it displays:

```
====================
     Guess Game
====================
```

Then it automatically loads the **main menu**.

---

## 🔸 **3.2 Main Menu Options**

The main menu includes:

```
 1 = Check Balance
 2 = Deposit
 3 = Withdraw
 4 = Profit
 5 = Loss
 6 = Play Game
 7 = Exit
```

The user enters a number to choose an action.

---

# 🏦 **4. Banking System**

### ### **4.1 Initial Balance**

You begin with:

```
int Initial_amount = 100;
```

### **4.2 Deposit Money**

Allows the user to increase their balance.

* Validates amount
* Adds to total
* Shows updated balance

### **4.3 Withdraw Money**

Deducts from balance.

Includes checks for:

* Invalid input
* Negative values
* Insufficient balance

### **4.4 Balance Inquiry**

Shows the currently available amount.

---

# 📈 **5. Profit & Loss Tracking**

These values update automatically during gameplay.

```
profit = total earned from winning
loss   = total lost from wrong guesses
```

Displayed using:

* `Profit()`
* `Loss()`

---

# 🎲 **6. Guess Game Mechanics**

This is the core gaming feature.

---

## 🎮 **6.1 How It Works**

1. The user enters a **bet amount**.
2. The system checks if balance is sufficient.
3. User chooses a number between **1 and 10**.
4. The system generates a **random number**:

```cpp
int target = rand() % 10 + 1;
```

5. If the user's guess matches → **WIN**
6. Otherwise → **LOSS**

---

## 🏆 **6.2 Win Scenario**

If the guessed number equals the random number:

* Bet amount multiplies with the number
* Profit increases
* Balance increases
* User gets congratulated

---

## 💀 **6.3 Loss Scenario**

If guess is wrong:

* Bet amount is subtracted
* Loss increases
* Balance decreases
* Correct number is revealed

---

# 🛠 **7. Technical Details**

This section is important for developers who want to understand internal logic.

---

## 🔧 **7.1 Header Files Used**

| Header        | Purpose                                  |
| ------------- | ---------------------------------------- |
| `<iostream>`  | Input/output                             |
| `<ctime>`     | Random seed                              |
| `<cstdlib>`   | `rand()` and `srand()`                   |
| `<windows.h>` | Windows-specific enhancements            |

---

## 🔧 **7.2 Functions Breakdown**

### `main_manu()`

Displays menu and takes user choice.

### `Balance()`

Shows current account balance.

### `deposite()`

Deposits valid amount.

### `Withdraw()`

Handles withdrawals with validation.

### `Profit()`

Displays recorded profit.

### `Loss()`

Shows recorded losses.

### `Game()`

Main game logic, bets, random generation.

### `endp()`

Displays game-over message.

---

# 📌 **8. Error Handling & Validation**

The program checks:

* Invalid (non-numeric) input
* Negative deposit/withdraw values
* Bet amount greater than balance
* Out-of-range guesses
* Re-entry options (Y/N choices)

Error messages include:

* `"***** Invalid amount *****"`
* `"***** Less balance *****"`
* `"******* Invalid Input *******"`

---

# 💻 **9. How to Compile & Run**

---

## ▶ **Using g++ on Windows / Linux**

### **Compile**

```
g++ main.cpp -o game
```

### **Run**

```
game
```

---

## ▶ **Using Visual Studio**

* Create new console project
* Replace the auto-generated code with game.cpp
* Run the debugger or start without debugging

---

## ▶ **Using CodeBlocks**

* Open CodeBlocks
* Create new console C++ project
* Paste code
* Build & Run

---

# 📚 **10. Complete Code (main.cpp)**

The code is added in the repository as:

```
main.cpp
```
