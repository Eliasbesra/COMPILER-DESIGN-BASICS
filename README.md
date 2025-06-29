# COMPILER-DESIGN-BASICS

*COMPANY*: CODTECH IT SOLUTIONS

*NAME*: ELIAS BESRA

*INTERN ID*: CT04DF2337

*DOMAIN*: C PROGRAMMING

*DURATION*: 4 WEEKS

*MENTOR*: NEELA SANTHOSH KUMAR

# Lexical Analyzer in C

A **lexical analyzer** (also known as a **lexer** or **scanner**) is a fundamental component of a compiler that processes the source code of a program. Its primary task is to break down the input text into meaningful sequences called **tokens**, which are then passed to the subsequent phases of compilation (such as syntax analysis and semantic analysis). This program demonstrates a **simple lexical analyzer** written in **C** that identifies and categorizes **keywords, operators, and identifiers** from an input source file.

---

## **Task Overview**
The goal of this task is to develop a **C program** that:
1. **Reads** a source code file (e.g., a C program).
2. **Scans** the file character by character.
3. **Classifies** each token into one of the following categories:
   - **Keywords** (e.g., `int`, `if`, `return`).
   - **Operators** (e.g., `+`, `=`, `<`).
   - **Identifiers** (e.g., variable names like `count`, `sum`).
   - **Numbers** (integer literals like `10`, `42`).
4. **Outputs** the classified tokens in a structured format.

---

## **Tools and Platforms Used**
### **1. Programming Language: C**
- The program is implemented in **C** due to its efficiency and low-level control over character processing.
- C is widely used in compiler design because it allows direct memory manipulation and efficient string handling.

### **2. Development Environment**
- **Compiler:** `GCC` (GNU Compiler Collection) or any standard C compiler.
- **Editor/IDE:** 
  - **Visual Studio Code** (with C/C++ extensions)
  - **Code::Blocks**
  - **Dev-C++**
  - **Vim/Emacs** (for Linux environments)
- **Operating System:** Works on **Windows, Linux, and macOS**.

### **3. Input/Output Handling**
- **Input:** A text file containing source code (e.g., `input.c`).
- **Output:** Printed list of tokens with their classifications.

---

## **Key Components of the Program**
### **1. Keyword Detection**
- A predefined list of C keywords (`int`, `if`, `else`, etc.) is stored in an array.
- The program checks each word against this list to determine if it is a keyword.

### **2. Operator Detection**
- A set of valid operators (`+`, `-`, `*`, `/`, `=`, etc.) is stored in an array.
- The program checks each character to see if it matches any operator.

### **3. Identifier Detection**
- **Rules for identifiers:**
  - Must start with a letter (`a-z`, `A-Z`) or underscore (`_`).
  - Can be followed by letters, digits (`0-9`), or underscores.
- The program collects sequences of valid identifier characters and checks if they are keywords before classifying them as identifiers.

### **4. Number Detection**
- A sequence of digits (`0-9`) is recognized as a numeric literal.
- (Note: Floating-point numbers and scientific notation are not handled in this simplified version.)

### **5. File Handling**
- The program reads the input file line by line using `fgetc()`.
- It processes each character and builds tokens dynamically.

---

## **Where This Task is Applicable**
### **1. Compiler Design Courses**
- This program serves as a **basic introduction to lexical analysis**, a core topic in compiler construction.
- Students can extend it to handle more complex cases (e.g., strings, multi-character operators, comments).

### **2. Syntax Highlighting in Text Editors**
- Many code editors (VS Code, Sublime Text) use lexers to highlight keywords, variables, and operators.
- A similar approach can be used to build custom syntax highlighters.

### **3. Static Code Analysis Tools**
- Tools like `lint` check for coding style and errors.
- A lexical analyzer helps in tokenizing code before deeper analysis.

### **4. Custom Scripting Languages**
- Developers creating domain-specific languages (DSLs) need lexers to parse their syntax.
- This program can be modified to support new keywords and operators.

### **5. Embedded Systems Programming**
- Some embedded systems use lightweight lexers for configuration file parsing.
- Example: Parsing sensor data logs or command inputs.

---

## **Limitations and Possible Extensions**
### **Limitations**
1. **No support for strings or comments** (e.g., `"Hello"`, `/* comment */`).
2. **Only single-character operators** are recognized (e.g., `==`, `!=` are not handled).
3. **Floating-point numbers** are not properly parsed.
4. **No error handling** for invalid tokens (e.g., `$var` would be misclassified).

### **Possible Extensions**
1. **Add support for multi-character operators** (`==`, `+=`, `&&`).
2. **Include string and character literal recognition** (`"text"`, `'a'`).
3. **Handle line numbers and error reporting** for debugging.
4. **Integrate with a parser** to build a full compiler front-end.

---

## **Conclusion**
This **lexical analyzer** is a foundational example of how compilers break down source code into tokens. While simplified, it demonstrates key concepts in lexical analysis and can be expanded for real-world applications like syntax highlighting, custom language parsing, and static code analysis. By understanding this program, developers gain insight into the first phase of compilation, paving the way for more advanced compiler design techniques.  

**Future Work:** Enhance the lexer to handle more complex tokens and integrate it into a full compiler pipeline.

## Output

![Image](https://github.com/user-attachments/assets/1d57bc50-2275-4f51-bf1f-af702b86dcbe)
