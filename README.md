# 🔺 Triangle Management System  

## 📖 Description  
This project is designed to demonstrate **data structures** (such as **dynamic vectors**) through a **Triangle Management System**. It follows an **Object-Oriented Programming (OOP)** approach and provides various functionalities for handling **triangles and points in a 2D space**.  

---

## ✨ Key Features  

### 🔹 **1. Object-Oriented Design and Data Structures**  
- Implementation of **dynamic vectors** to efficiently store and manipulate triangles.  
- Definition of **custom data structures** (`Punct` for points, `Triunghi` for triangles) to model geometric entities.  
- Modular and structured architecture with encapsulated logic.  

### 🔹 **2. Triangle Operations and Functionalities**  
- 📌 **Define and manage triangles** using three points (`Punct`).  
- 📌 **Calculate triangle properties** such as **perimeter** and **area** using geometric formulas.  
- 📌 **Compare triangles** using **overloaded operators** (`==, <, >`).  
- 📌 **Filter triangles**:
  - Identify triangles **completely inside the first quadrant**.
  - Find the **largest triangle** (based on area).  
- 📌 **Detect sequences of identical triangles** in a list.  
- 📌 **Interactive Console Menu** for easy user interaction.  

### 🔹 **3. Modular Code Structure**  
The project is structured into well-defined modules:  
- 📂 **`Punct.h/.cpp`** – Defines the **Point** class, storing coordinates `(x, y)`.  
- 📂 **`Triunghi.h/.cpp`** – Defines the **Triangle** class, calculating perimeter and area.  
- 📂 **`logic.h/.cpp`** – Implements triangle filtering and processing logic.  
- 📂 **`ui.h/.cpp`** – Provides a **console-based interface** for interacting with the system.  
- 📂 **`tests.h/.cpp`** – Contains **unit tests** for ensuring system correctness.  
- 📂 **`main.cpp`** – The **entry point**, initializing and running the application.  

---

## 🚀 Advantages and Strengths  
✅ **Efficient use of dynamic data structures**, enabling flexibility in handling geometric entities.  
✅ **Modular and maintainable architecture**, allowing easy extension and modification.  
✅ **Encapsulation and OOP principles**, ensuring code reusability and clarity.  
✅ **Mathematical correctness**, with precise calculations for triangle properties.  
✅ **Comprehensive testing**, validating system accuracy.  
✅ **User-friendly interface**, providing clear options and outputs.  

---

## 🔬 Testing and Validation  
The system includes **unit tests** to verify:  
- **Point operations** (`Punct`) – Coordinate access, quadrant determination, equality comparison.  
- **Triangle operations** (`Triunghi`) – Calculation of perimeter and area, comparison operators.  
- **Logic functions** – Filtering, finding largest triangle, detecting identical sequences.  

---

## 🏆 Conclusion  
This project demonstrates **data structure implementation** in a **geometric computing scenario**. By combining **OOP principles** with **dynamic memory management**, it serves as an **efficient and structured** example of **modular programming** in C++. 🚀  
