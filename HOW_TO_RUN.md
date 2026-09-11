# C/C++ Quick Run Guide

cd "LeetCode\drill"
g++ -std=c++17 -Wall evenFilter.cpp -o evenFilter.exe
.\evenFilter.exe

## 🚀 Keyboard Shortcuts Setup Complete!

### Method 1: Using VS Code Tasks (Recommended)

#### **Ctrl + Shift + B** - Build Only
- Compiles the current C++ file
- Shows compilation errors if any
- Creates an `.exe` file in the same directory

#### **Terminal → Run Task** - Build and Run
1. Press `Ctrl + Shift + P`
2. Type "Tasks: Run Task"
3. Select:
   - **C++: Build and Run** (for .cpp files)
   - **C: Build and Run** (for .c files)

### Method 2: Using Terminal Commands

```bash
# For C++ files
g++ -std=c++17 -Wall filename.cpp -o filename.exe
.\filename.exe

# For C files
gcc filename.c -o filename.exe
.\filename.exe
```

### Method 3: Install Code Runner Extension (Optional)

1. Install "Code Runner" extension from VS Code marketplace
2. Press **Ctrl + Alt + N** to run code
3. Or click the ▶️ play button in the top-right corner

---

## 📝 What's Configured:

### Tasks Available:
1. **C++: Build with g++** - Compile C++ with C++17 standard
2. **C++: Build and Run** - Compile and execute C++
3. **C: Build with gcc** - Compile C code
4. **C: Build and Run** - Compile and execute C
5. **Run Current Executable** - Run already compiled .exe

### Compiler Flags:
- `-std=c++17` - Use C++17 standard
- `-Wall` - Show all warnings
- `-g` - Include debugging information
- `-fdiagnostics-color=always` - Colored error messages

---

## 🎯 Quick Start:

1. Open any `.cpp` or `.c` file
2. Press **Ctrl + Shift + B** to build
3. If successful, run `.\filename.exe` in terminal
4. Or use "Run Task" → "Build and Run" for one-step execution

---

## 💡 Tips:

- The `.exe` file is created in the same folder as your source file
- Compilation errors will appear in the "Problems" panel
- Use `Ctrl + ` ` (backtick) to toggle terminal
- Delete old `.exe` files if you rename your source file

---

## 🔧 Troubleshooting:

**If compilation fails:**
- Check for syntax errors in your code
- Make sure MinGW is in your PATH
- Verify g++ version: `g++ --version`

**If execution fails:**
- Make sure compilation was successful (no errors)
- Check if `.exe` file was created
- Try running manually: `.\filename.exe`
