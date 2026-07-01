# Lab Record Formatter

A lightweight command-line utility written in **C++17** that automatically transforms raw laboratory records into clean, structured, and submission-ready documents.

Instead of manually formatting experiment records, source code, terminal outputs, and observations, **Lab Record Formatter** parses unstructured text and generates consistently formatted records in seconds.

---

## Overview

Preparing laboratory records often involves repetitive formatting rather than actual programming. This project automates that process by identifying logical sections, cleaning inconsistent formatting, preserving source code readability, and producing professional-looking documentation with minimal effort.

The application is lightweight, portable, and relies solely on the C++ Standard Library.

---

## Features

* Automatic organization of laboratory records into structured sections
* Preservation of source code indentation and formatting
* Proper formatting of terminal outputs while maintaining alignment
* Removal of unnecessary blank lines and trailing whitespace
* Consistent document formatting suitable for academic submissions
* Fast processing with minimal memory overhead
* Customizable formatting rules
* Zero external dependencies

---

## Example

### Input

```text
Experiment : 5

write a program
to implement stack

code

#include<iostream>
using namespace std;
...
```

### Output

```text
==================================
        EXPERIMENT - 5
==================================

Title
-----
Implement Stack

Algorithm
---------
1. Start
2. Initialize Stack
3. Push Elements
4. Display Stack
5. Stop

Program
-------
#include<iostream>
using namespace std;

...

Output
------
Stack Created Successfully
```

---

## Motivation

Laboratory documentation is a repetitive and time-consuming task. Formatting experiment titles, source code, outputs, and observations manually often takes considerably longer than writing the program itself.

Lab Record Formatter eliminates this overhead by automatically:

* Structuring experiment sections
* Cleaning inconsistent formatting
* Preserving code readability
* Producing professional, submission-ready records

What typically takes 20–30 minutes can be completed in just a few seconds.

---

## Technologies Used

* C++17
* Standard Template Library (STL)
* File Handling (`fstream`)
* String Processing
* Stream Manipulation
* Object-Oriented Programming

---

## Project Structure

```text
Lab-Record-Formatter/
│
├── cpp1.cpp          # Main source file
├── input.txt         # Raw laboratory record
├── output.txt        # Generated formatted record
├── README.md
└── LICENSE
```

---

## Getting Started

### Prerequisites

Install any C++17-compatible compiler.

```bash
g++ --version
```

### Clone the Repository

```bash
git clone https://github.com/yourusername/Lab-Record-Formatter.git
cd Lab-Record-Formatter
```

### Compile

```bash
g++ cpp1.cpp -std=c++17 -o formatter
```

### Run

**Linux / macOS**

```bash
./formatter
```

**Windows**

```bash
formatter.exe
```

---

## How It Works

```text
Raw Laboratory Record
          │
          ▼
      Read Input
          │
          ▼
     Parse Sections
          │
          ▼
  Clean & Normalize Text
          │
          ▼
 Detect Logical Components
          │
          ▼
 Generate Formatted Record
          │
          ▼
      Write Output
```

---

## Processing Pipeline

The formatter performs the following steps:

1. Reads the raw laboratory record from an input file.
2. Parses the document to identify logical sections.
3. Removes redundant whitespace and blank lines.
4. Preserves indentation within source code blocks.
5. Formats terminal outputs without affecting alignment.
6. Generates a structured, consistent laboratory record.
7. Writes the formatted document to the output file.

---

## Applications

* Programming laboratory records
* Practical examination documentation
* Assignment formatting
* Terminal session documentation
* Experiment reports
* Academic record preparation
* Helps the teacher in fast evaluation of multiple records of students thereby saving time
* economical 

---

## Advantages

* Reduces documentation time
* Produces consistent formatting
* Improves readability
* Lightweight and portable
* Easy to extend and customize
* No third-party libraries required

---

## Future Enhancements

Planned features include:

* Graphical User Interface (GUI)
* PDF export
* Markdown export
* HTML report generation
* Syntax highlighting
* Multiple formatting templates
* Batch processing
* Cross-platform executable releases

---

## Contributing

Contributions are welcome.

1. Fork the repository.
2. Create a new feature branch.

```bash
git checkout -b feature/new-feature
```

3. Commit your changes.

```bash
git commit -m "Add new feature"
```

4. Push the branch.

```bash
git push origin feature/new-feature
```

5. Open a Pull Request.

---

## License

This project is licensed under the MIT License. See the `LICENSE` file for details.

---

## Author

Developed to simplify laboratory documentation through automation using modern C++.

---

## Support

If you find this project useful, consider starring the repository. Your support helps improve the project and makes it easier for others to discover it.
