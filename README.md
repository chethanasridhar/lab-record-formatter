📒 Lab Record Formatter

A lightweight C++17 command-line utility that automatically transforms raw laboratory records into clean, structured, submission-ready documents.

Instead of manually formatting experiment records, source code, terminal outputs, and observations, Lab Record Formatter parses raw text files and produces neatly organized records with consistent formatting in seconds.

✨ Features
📑 Automatically structures laboratory records
💻 Preserves source code indentation and formatting
🖥 Formats terminal outputs while maintaining alignment
🧹 Removes unnecessary blank lines and trailing whitespace
📄 Produces clean, consistent, submission-ready documents
⚡ Fast processing using only the C++ Standard Library
🔧 Easily customizable formatting rules
🚫 Zero external dependencies
📸 Example
Input
Experiment : 5

write a program
to implement stack

code

#include<iostream>
using namespace std;
...

↓

Output
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
🚀 Why This Project?

Preparing laboratory records is often more about formatting than actual programming.

This tool automates the repetitive work by:

organizing experiment sections
cleaning inconsistent formatting
preserving code readability
generating professional-looking records

Instead of spending 20–30 minutes formatting, you can generate a polished record in seconds.

🛠 Built With
C++17
Standard Template Library (STL)
fstream
String Processing
Stream Manipulation
Object-Oriented Programming
📂 Project Structure
Lab-Record-Formatter/
│
├── cpp1.cpp          # Main source file
├── input.txt         # Raw laboratory record
├── output.txt        # Generated formatted record
├── README.md
└── LICENSE
⚙ Getting Started
Prerequisites

Install any C++17-compatible compiler.

Example:

g++ --version
Clone the Repository
git clone https://github.com/yourusername/Lab-Record-Formatter.git
cd Lab-Record-Formatter
Compile
g++ cpp1.cpp -std=c++17 -o formatter
Run

Linux/macOS

./formatter

Windows

formatter.exe
📄 How It Works
Raw Text
    │
    ▼
Read File
    │
    ▼
Parse Content
    │
    ▼
Clean Formatting
    │
    ▼
Identify Sections
    │
    ▼
Generate Structured Output
📋 Processing Pipeline

The formatter performs several transformations:

Reads raw laboratory records from a text file
Detects logical sections such as title, algorithm, program, and output
Removes redundant whitespace
Preserves indentation for source code
Formats terminal output blocks
Writes the final structured document to an output file


📚 Use Cases
Programming laboratory records
College practical submissions
Terminal session documentation
Assignment formatting
Code report generation
Experiment documentation

📈 Advantages
Saves documentation time
Produces consistent formatting
Improves readability
Lightweight and portable
Easy to customize
No third-party libraries required

🔮 Roadmap

Planned improvements include:

 GUI application
 PDF export
 Markdown export
 HTML report generation
 Syntax highlighting
 Multiple formatting templates
 Batch processing
 Cross-platform releases
🤝 Contributing

Contributions are welcome!

Fork the repository
Create a feature branch
git checkout -b feature/new-feature
Commit your changes
git commit -m "Add new feature"
Push the branch
git push origin feature/new-feature
Open a Pull Request
📄 License

Distributed under the MIT License.

👨‍💻 Author

Developed to simplify laboratory documentation through automation using modern C++.

⭐ Show Your Support

If you found this project useful, consider giving it a ⭐ Star. It helps others discover the project and supports future improvements.