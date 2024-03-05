#include <iostream>
#include <string>

using namespace std;

// Function to get the multiplier for a given unit
double getMultiplier(string unit) {
    if (unit == "kb" || unit == "Kb") return 1000;
    if (unit == "kB" || unit == "KB") return 8000;
    if (unit == "kib" || unit == "Kib") return 1024;
    if (unit == "kiB" || unit == "KiB") return 8192;
    if (unit == "mb" || unit == "Mb") return 1000000;
    if (unit == "mB" || unit == "MB") return 8000000;
    if (unit == "mib" || unit == "Mib") return 1048576;
    if (unit == "miB" || unit == "MiB") return 8388608;
    if (unit == "gb" || unit == "Gb") return 1000000000;
    if (unit == "gB" || unit == "GB") return 8000000000;
    if (unit == "gib" || unit == "Gib") return 1073741824;
    if (unit == "giB" || unit == "GiB") return 8796093022208;
    if (unit == "b") return 1;
    if (unit == "B") return 8;
    return 0; 
}

// Function to convert between units
string convertUnits(double value, string input, string output) {
    // Calculate the conversion factor
    double conversion = getMultiplier(input) / getMultiplier(output);
    double numValue = (value * conversion);

    // Convert the value and return
    return to_string(numValue);
}

int main() {
    // Read inputs in the specified format
    double value;
    string inputUnit, outputUnit;

    cout << "Enter the value to convert: ";
    cin >> value;

    cout << "Enter the input unit (e.g., b, B, kB, MB): ";
    cin >> inputUnit;

    cout << "Enter the output unit (e.g., b, B, kB, MB): ";
    cin >> outputUnit;

    // Convert units and display result
    string result = convertUnits(value, inputUnit, outputUnit);
    cout << "Converted value: " << result << endl;

    return 0;
}
