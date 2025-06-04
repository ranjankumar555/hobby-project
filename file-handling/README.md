# File Handling in C - Exploring Commands Implemented Using File Handling Concepts

This project is a hands-on exploration of advanced file handling concepts in C by recreating common Linux file-related commands. Each command is implemented as a standalone C program, providing insights into file I/O operations and system-level programming.

---

## Table of Contents

1. [File and Directory Management Commands](#file-and-directory-management-commands)
2. [File Content Searching Commands](#file-content-searching-commands)
3. [File Permissions and Metadata Commands](#file-permissions-and-metadata-commands)
4. [File Compression and Archiving Commands](#file-compression-and-archiving-commands)
5. [File Monitoring and Logging Commands](#file-monitoring-and-logging-commands)
6. [File System and Disk Commands](#file-system-and-disk-commands)
7. [Advanced Commands](#advanced-commands)

---

## File and Directory Management Commands

| **Command** | **Description**                           | **C Implementation Idea** |
|-------------|-------------------------------------------|---------------------------|
| [`cat`](https://github.com/ranjankumar555/hobby-project/tree/main/file-handling/cat)       | Display the contents of a file.           | Use `fopen()`, `fgetc()`, or `fgets()` to read and display file contents. |
| [`cp`](https://github.com/ranjankumar555/hobby-project/tree/main/file-handling/cp)        | Copy files.                               | Use `fopen()` for reading, `fwrite()` for writing. |
| `mv`        | Move or rename files.                     | Use `rename()` for renaming or combine `cp` and `remove()`. |
| `rm`        | Delete a file.                            | Use `remove()` to delete files. |
| [`touch`](https://github.com/ranjankumar555/hobby-project/tree/main/file-handling/touch)     | Create an empty file or update its timestamp. | Use `fopen()` with `"w"` mode to create or truncate a file. |
| [`mkdir`](https://github.com/ranjankumar555/hobby-project/tree/main/file-handling/mkdir)     | Create a directory.                       | Use `mkdir()` from `<sys/stat.h>`. |
| `rmdir`     | Remove an empty directory.                | Use `rmdir()` to delete directories. |
| `ls`        | List files and directories.               | Use `opendir()`, `readdir()`, and `closedir()` from `<dirent.h>`. |

---

## File Content Searching Commands

| **Command** | **Description**                              | **C Implementation Idea** |
|-------------|----------------------------------------------|---------------------------|
| `grep`      | Search for patterns in files.                | Use `fgets()` and `strstr()` or regex to search. |
| `wc`        | Count lines, words, and characters in a file. | Use `fgetc()` to count `\n` for lines, spaces for words, and total characters. |
| `head`      | Display the first few lines of a file.        | Read the file using `fgets()` and stop after a set number of lines. |
| `tail`      | Display the last few lines of a file.         | Use `fseek()` to read from the end of the file and display lines. |
| `find`      | Search for files or directories.             | Use `opendir()` for traversal and `strcmp()` or regex to match. |

---

## File Permissions and Metadata Commands

| **Command** | **Description**                         | **C Implementation Idea** |
|-------------|-----------------------------------------|---------------------------|
| `chmod`     | Change file permissions.                | Use `chmod()` from `<sys/stat.h>`. |
| `chown`     | Change file owner and group.            | Use `chown()` from `<unistd.h>`. |
| `stat`      | Display file metadata.                  | Use `stat()` or `lstat()` from `<sys/stat.h>`. |
| `umask`     | Set the default file permission mask.   | Use `umask()` to set or get the file creation mask. |

---

## File Compression and Archiving Commands

| **Command** | **Description**                         | **C Implementation Idea** |
|-------------|-----------------------------------------|---------------------------|
| `gzip`      | Compress files.                         | Implement Huffman coding or similar compression. |
| `gunzip`    | Decompress files.                       | Reverse the compression logic. |
| `tar`       | Archive files into a single file.       | Read files and write headers and data to a single archive. |
| `zip`       | Compress files into `.zip` format.      | Use libraries like `libzip` or implement compression manually. |

---

## File Monitoring and Logging Commands

| **Command** | **Description**                         | **C Implementation Idea** |
|-------------|-----------------------------------------|---------------------------|
| `tail -f`   | Monitor a file for changes in real-time. | Use `fseek()` and periodic checks for new content. |
| `watch`     | Periodically run a command.             | Use `fork()` and `exec()` to repeat commands. |
| `inotifywait` | Watch for file or directory changes.   | Use `inotify` API like `inotify_add_watch()`. |

---

## File System and Disk Commands

| **Command** | **Description**                         | **C Implementation Idea** |
|-------------|-----------------------------------------|---------------------------|
| `df`        | Display disk usage.                     | Use `statvfs()` to fetch file system statistics. |
| `du`        | Display directory size.                 | Recursively traverse directories using `stat()`. |
| `mount`     | Mount a file system.                    | Use `mount()` system call (root privileges required). |
| `umount`    | Unmount a file system.                  | Use `umount()` system call. |

---

## Advanced Commands

| **Command** | **Description**                         | **C Implementation Idea** |
|-------------|-----------------------------------------|---------------------------|
| `tee`       | Read from input and write to multiple outputs. | Use `fgets()` to read and write to multiple files. |
| `split`     | Split a file into smaller files.         | Read the file in chunks and write to new files. |
| `diff`      | Compare two files line by line.          | Read files line by line and compare using `strcmp()`. |
| `sort`      | Sort lines in a file.                   | Use `qsort()` to sort lines stored in memory. |
| `uniq`      | Remove duplicate lines from a file.     | Sort lines and filter duplicates during output. |

---

## How to Use

1. Clone this repository:
   ```bash
   git clone https://github.com/ranjankumar555/file-handling-in-c.git
   cd file-handling-in-c


## Progress Tracker

| Command Name      | Description                           | Status          | Testing     | Documentation |
|-------------------|---------------------------------------|-----------------|-------------|---------------|
| `cat`             | Display file content                  | ✅ Implemented  | ✅ Done     | ✅ Completed   |
| `cp`              | Copy files                            | ✅ Implemented  | ✅ Done     | ✅ Completed   |
| `mv`              | Move/rename files                     | ❌ Not Started  | ❌ Pending  | ❌ Pending     |
| `rm`              | Remove files                          | ✅ Implemented  | ✅ Done	    | ❌ Pending     |
| `touch`           | Create or modify file timestamp       | ❌ Not Started  | ❌ Pending  | ❌ Pending     |
| `mkdir`           | Create a directory                    | ✅ Implemented  | ❌ Pending  | ❌ Pending     |
| `rmdir`           | Remove an empty directory             | ❌ Not Started  | ❌ Pending  | ❌ Pending     |
| `ls`              | List directory contents               | ❌ Not Started  | ❌ Pending  | ❌ Pending     |
| `grep`            | Search for patterns in files          | 🚧 In Progress  | ❌ Pending  | ❌ Pending     |
| `wc`              | Word, line, char count                | ❌ Not Started  | ❌ Pending  | ❌ Pending   |
| `head`            | Display the first few lines of a file | ❌ Not Started  | ❌ Pending  | ❌ Pending     |
| `tail`            | Display the last few lines of a file  | ❌ Not Started  | ❌ Pending  | ❌ Pending     |
| `find`            | Search for files or directories       | ❌ Not Started  | ❌ Pending  | ❌ Pending     |
| `chmod`           | Change file permissions               | ❌ Not Started  | ❌ Pending  | ❌ Pending     |
| `chown`           | Change file owner and group           | ❌ Not Started  | ❌ Pending  | ❌ Pending     |
| `stat`            | Display file metadata                 | ❌ Not Started  | ❌ Pending  | ❌ Pending     |
| `umask`           | Set default file permission mask      | ❌ Not Started  | ❌ Pending  | ❌ Pending     |
| `gzip`            | Compress files                        | ❌ Not Started  | ❌ Pending  | ❌ Pending     |
| `gunzip`          | Decompress files                      | ❌ Not Started  | ❌ Pending  | ❌ Pending     |
| `tar`             | Archive files                         | ❌ Not Started  | ❌ Pending  | ❌ Pending     |
| `zip`             | Compress files into `.zip` format     | ❌ Not Started  | ❌ Pending  | ❌ Pending     |
| `tail -f`         | Monitor file for real-time changes    | ❌ Not Started  | ❌ Pending  | ❌ Pending     |
| `watch`           | Periodically run a command            | ❌ Not Started  | ❌ Pending  | ❌ Pending     |
| `inotifywait`     | Watch for file/directory changes      | ❌ Not Started  | ❌ Pending  | ❌ Pending     |
| `df`              | Display disk usage                    | ❌ Not Started  | ❌ Pending  | ❌ Pending     |
| `du`              | Display directory size                | ❌ Not Started  | ❌ Pending  | ❌ Pending     |
| `mount`           | Mount file system                     | ❌ Not Started  | ❌ Pending  | ❌ Pending     |
| `umount`          | Unmount file system                   | ❌ Not Started  | ❌ Pending  | ❌ Pending     |
| `tee`             | Read from input and write to outputs  | ❌ Not Started  | ❌ Pending  | ❌ Pending     |
| `split`           | Split a file into smaller files       | ❌ Not Started  | ❌ Pending  | ❌ Pending     |
| `diff`            | Compare two files line by line        | ❌ Not Started  | ❌ Pending  | ❌ Pending     |
| `sort`            | Sort lines in a file                  | ❌ Not Started  | ❌ Pending  | ❌ Pending     |
| `uniq`            | Remove duplicate lines from a file    | ❌ Not Started  | ❌ Pending  | ❌ Pending     |

---

### Legend:
- ✅ = Completed
- 🚧 = Work In Progress
- ❌ = Not Started

