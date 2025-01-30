# How to Use?

## Steps to Execute This Command

1. **Create a text file** and write some content inside it.

   - Example: `data.txt`

2. **Create a C source file** for the command using `vi editor`:

   ```bash
   vi my_cp.c
   ```

3. **Write the logic** for the `cp` command inside `my_cp.c`.

4. **Compile the program** using the C compiler:

   ```bash
   cc my_cp.c -o my_cp
   ```

5. **Run the program** with the necessary arguments:

   ```bash
   ./my_cp my_cp.c data.txt 
   ```

6. **Observe the output**:

   - The content of `my_cp.c` will be copied into `data.txt`.

