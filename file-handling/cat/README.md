# How to Use?

## Steps to Execute This Command

1. **Create a text file** and write some content inside it.

   - Example: `data.txt`

2. **Create a C source file** for the command using `vi editor`:

   ```bash
   vi my_cat.c
   ```

3. **Write the logic** for the `cat` command inside `my_cat.c`.

4. **Compile the program** using the C compiler:

   ```bash
   cc my_cat.c -o my_cat
   ```

5. **Run the program** with the necessary arguments:

   ```bash
   ./my_cat data.txt
   ```

6. **Observe the output**:

   - The content of `data.txt` will be displayed on the terminal.


