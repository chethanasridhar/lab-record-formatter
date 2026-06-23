#include <iostream>
#include <fstream>
#include <string>
#include <limits>

using namespace std;

class Experiment {
public:
    int expNum;
    string title, date, aim, procedure, code, output;

    string getMultiLineInput(string prompt) {
        string totalInput = "", line;
        cout << "\n>>> " << prompt << " <<<" << endl;
        cout << "(PASTE NOW. When done, type 'END' on a NEW line and press Enter)" << endl;
        while (getline(cin, line)) {
            if (line == "END") break;
            totalInput += line + "\n";
        }
        return totalInput;
    }

    void getDetails() {
        string temp;
        cout << "\n--- New Experiment Entry ---" << endl;
        cout << "Experiment Number: ";
        getline(cin, temp); 
        try { expNum = stoi(temp); } catch(...) { expNum = 0; }

        cout << "Experiment Title: "; getline(cin, title);
        cout << "Date (DD/MM/YYYY): "; getline(cin, date);
        cout << "Aim: "; getline(cin, aim);

        procedure = getMultiLineInput("Enter PROCEDURE");
        code = getMultiLineInput("Paste PROGRAM CODE");
        output = getMultiLineInput("Paste OUTPUT");
    }

    string formatRecordHTML(string name, string roll) {
        string html = "<html><head><style>";
        html += "body { font-family: 'Segoe UI', sans-serif; margin: 40px; background-color: #f0f2f5; }";
        html += ".card { background: white; padding: 40px; border-radius: 15px; box-shadow: 0 10px 30px rgba(0,0,0,0.1); max-width: 800px; margin: auto; }";
        html += "h1 { color: #1a73e8; text-align: center; border-bottom: 3px solid #1a73e8; }";
        html += ".info { background: #e8f0fe; padding: 15px; border-radius: 8px; margin-bottom: 20px; display: flex; justify-content: space-between; font-weight: bold; }";
        html += "pre { background: #202124; color: #f1f3f4; padding: 20px; border-radius: 8px; font-family: 'Consolas', monospace; overflow-x: auto; }";
        html += ".out { background: #e6fffa; border: 1px solid #38b2ac; padding: 15px; border-radius: 8px; white-space: pre-wrap; }";
        html += "</style></head><body><div class='card'>";
        html += "<h1>LABORATORY RECORD</h1>";
        html += "<div class='info'><span>NAME: " + name + "</span><span>ROLL: " + roll + "</span></div>";
        html += "<div class='info' style='background:#fef7e0;'><span>EXP: " + to_string(expNum) + "</span><span>DATE: " + date + "</span></div>";
        html += "<h3>TITLE: " + title + "</h3>";
        html += "<h4>AIM:</h4><p>" + aim + "</p>";
        html += "<h4>PROCEDURE:</h4><p style='white-space: pre-wrap;'>" + procedure + "</p>";
        html += "<h4>CODE:</h4><pre><code>" + code + "</code></pre>";
        html += "<h4>OUTPUT:</h4><div class='out'>" + output + "</div>";
        html += "<button onclick='window.print()' style='margin-top:20px; padding:10px; cursor:pointer;'>Print to PDF</button>";
        html += "</div></body></html>";
        return html;
    }
};

int main() {
    string name, roll, choiceStr;
    Experiment exp;

    cout << "Enter Student Name: "; getline(cin, name);
    cout << "Enter Roll Number: "; getline(cin, roll);

    while (true) {
        cout << "\n--- MAIN MENU ---\n1. Add\n2. View\n3. Edit\n4. Delete\n5. Exit\nSelection: ";
        getline(cin, choiceStr);

        if (choiceStr == "5") break;

        if (choiceStr == "1") {
            exp.getDetails();
            string filename = "Experiment_" + to_string(exp.expNum) + ".html";
            ofstream outFile(filename);
            if (outFile) {
                outFile << exp.formatRecordHTML(name, roll);
                cout << "HTML Record Created!\n";
            }
            outFile.close();
        } 
        else if (choiceStr == "2") {
            string num;
            cout << "Enter Exp Number to VIEW: "; getline(cin, num);
            string filename = "Experiment_" + num + ".html";
            ifstream checkFile(filename);
            if (checkFile) {
                checkFile.close();
                string command = "start " + filename;
                system(command.c_str());
            } else cout << "HTML file not found.\n";
        }
        else if (choiceStr == "3") {
            string num;
            cout << "Enter Exp Number to EDIT: "; getline(cin, num);
            string filename = "Experiment_" + num + ".html";
            
            ifstream checkFile(filename);
            if (checkFile) {
                checkFile.close();
                cout << "Please enter new details below:\n";
                exp.getDetails(); // Get new info from user
                
                ofstream outFile(filename);
                if (outFile) {
                    outFile << exp.formatRecordHTML(name, roll);
                    cout << "HTML Record Updated";
                }
                outFile.close();
            } else {
                cout << "That experiment file does not exist.\n";
            }
        }
        else if (choiceStr == "4") {
            string num;
            cout << "Enter Exp Number to DELETE: "; getline(cin, num);
            string fname = "Experiment_" + num + ".html";
            if (remove(fname.c_str()) == 0) cout << " Deleted.\n";
            else cout << "Not found.\n";
        }
    }
    return 0;
}