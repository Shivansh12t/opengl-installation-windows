### **How to Install OpenGL in Windows**  
This guide walks you through installing OpenGL with **FreeGLUT** and **GLEW** on a Windows system using MSYS2. 

---

### **Step 1: Install MSYS2**
1. Download **MSYS2** from the official website: [https://www.msys2.org/](https://www.msys2.org/).  
2. Follow the installation instructions to set it up.

---

### **Step 2: Launch MSYS2 Shell**
1. Open the **MSYS2 MinGW 64-bit** terminal from your Start Menu.
2. Run the following commands one by one to install the required components:

```bash
pacman -Syu
pacman -S mingw-w64-x86_64-toolchain
pacman -S mingw-w64-x86_64-freeglut
pacman -S mingw-w64-x86_64-glew
```

#### **Note**:  
- If you encounter issues with the `pacman` commands (e.g., database errors), use these steps to resolve them:  
  ```bash
  pacman -Sy
  pacman -Syu
  ```

---

### **Step 3: Verify OpenGL Installation**
- The OpenGL libraries (**FreeGLUT**, **GLEW**) are now installed on your system.  
- Ensure you have the following installed:
  - **FreeGLUT** for windowing and OpenGL utility functions.
  - **GLEW** for managing OpenGL extensions.

---

### **Step 4: Compile and Run an OpenGL Program**

#### **Sample Command**
Use the following command to compile your OpenGL program:  
```bash
g++ -o out main.c -lmingw32 -lfreeglut -lglew32 -lopengl32
```

#### **Command Breakdown**
- `-lmingw32`: Links the MinGW runtime.
- `-lfreeglut`: Links the FreeGLUT library.
- `-lglew32`: Links the GLEW library.
- `-lopengl32`: Links the core OpenGL library.

#### **Run the Program**
Once compiled, execute your program using:
```bash
./out.exe
```

---

### **Additional Resources**
For further clarification, refer to this detailed **YouTube tutorial**:  
[Setting Up OpenGL with FreeGLUT and GLEW in Windows](https://www.youtube.com/watch?v=bi-NvsFKcZg)

---

### **Troubleshooting**
1. **Database Errors in `pacman`:**
   - Run `pacman -Sy` to synchronize package databases.
   - Run `pacman -Syu` to update all installed packages.

2. **Compilation Issues:**
   - Ensure you are using the **MSYS2 MinGW 64-bit** terminal.
   - Verify the libraries (`-lfreeglut`, `-lglew32`, `-lopengl32`) are correctly linked.

3. **Missing Executables:**
   - Check that you’ve installed the MinGW toolchain properly by running:
     ```bash
     g++ --version
     ```

---

### **Expected Result**
When you follow these steps, you'll be able to compile and run OpenGL programs with FreeGLUT and GLEW on Windows!