#include <bits/stdc++.h>
#include <sstream>
#include <string>

using namespace std;


string timeConversion(string s) {
    stringstream ss(s);
    
    
    string hour = "";
    getline(ss, hour, ':');
    int hour_int = stoi(hour);
    
    string minute = "";
    getline(ss, minute, ':');
    
    int second;
    // getline(ss, second, ':'); it has PM / AM after, no delimiter
    ss >> second;
    string second_str;
    second_str = (second < 10) ? "0" + to_string(second) : to_string(second);
    
    string time;
    // getline(ss, time, ':');
    ss >> time;
    
    if (time == "PM" && hour_int < 12)
    {
        hour_int += 12;
        hour = to_string(hour_int);
    }
    if (time == "AM" && hour_int == 12)
    {
        hour = "00";
    }
    
    string result = hour + ":" + minute + ":" + second_str;
    return result;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    cout << result << "\n";

    fout.close();

    return 0;
}
