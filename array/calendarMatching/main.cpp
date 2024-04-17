#include <bits/stdc++.h>
using namespace std;


int timeToMin(string time) {
    int hours = stoi(time.substr(0, 2));
    int minutes = stoi(time.substr(3, 2));
    return hours * 60 + minutes;
}

string minToTime(int minutes) {
    int hours = minutes / 60;
    int mins = minutes % 60;
    string hour_str = (hours < 10) ? "0" + to_string(hours) : to_string(hours);
    string min_str = (mins < 10) ? "0" + to_string(mins) : to_string(mins);
    return hour_str + ":" + min_str;
}

vector<vector<string>> findMeetingSlots(vector<vector<string>> calendar1, vector<string> dailyBounds1,
                                        vector<vector<string>> calendar2, vector<string> dailyBounds2,
                                        int duration) {
    vector<vector<string>> merged;
    vector<vector<string>> available;

    
    merged.insert(merged.end(), calendar1.begin(), calendar1.end());
    merged.insert(merged.end(), calendar2.begin(), calendar2.end());

    // Sort by start time
    sort(merged.begin(), merged.end());

    // Define daily bounds
    int earliest = max(timeToMin(dailyBounds1[0]), timeToMin(dailyBounds2[0]));
    int latest = min(timeToMin(dailyBounds1[1]), timeToMin(dailyBounds2[1]));

    
    int ptr = earliest;
    for (auto& i : merged) {
        int s = timeToMin(i[0]);
        int e = timeToMin(i[1]);
        
        if (s - ptr >= duration) {
            available.push_back({minToTime(ptr), minToTime(s)});
        }
        ptr = max(ptr, e);
    }
    
    
    if (latest - ptr >= duration) {
        available.push_back({minToTime(ptr), minToTime(latest)});
    }

    return available;
}

int main() {
    
    vector<vector<string>> calendar1 = {{"9:00", "10:30"}, {"12:00", "13:00"}, {"16:00", "18:00"}};
    vector<string> dailyBounds1 = {"9:00", "20:00"};
    vector<vector<string>> calendar2 = {{"10:00", "11:30"}, {"12:30", "14:30"}, {"14:30", "15:00"}, {"16:00", "17:00"}};
    vector<string> dailyBounds2 = {"10:00", "18:30"};
    int meetingDuration = 30;

    vector<vector<string>> availableSlots = findMeetingSlots(calendar1, dailyBounds1, calendar2, dailyBounds2, meetingDuration);

    cout << "Available meeting slots:" << endl;
    for (auto& slot : availableSlots) {
        cout << "[" << slot[0] << ", " << slot[1] << "]" << endl;
    }

    return 0;
}
